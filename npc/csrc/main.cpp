// =========================== CONFIG ============================
//#define CONFIG_GTKWAVE
#define CONFIG_ITRACE
#define CONFIG_DIFFTEST
//#define CONFIG_MTRACE

#include <cstdio>
// timer
#include <sys/time.h>
// Verilator with trace
#include "Vtop.h"
#include <verilated.h>
#include <verilated_vcd_c.h>    
// DPI-C
#include <svdpi.h>
#include <Vtop__Dpi.h>
#include <verilated_dpi.h>
// Difftest
#include <dlfcn.h>
static bool is_skip_ref = false;
static int skip_dut_nr_inst = 0;

typedef long long ll;

#define COLOR_RED     "\33[1;31m"
#define COLOR_GREEN   "\33[1;32m"
#define COLOR_NONE    "\33[0m"
void debug_exit(int status);
// ========================= Environment =========================
Vtop *dut = new Vtop;   //将top设置为全局变量
VerilatedVcdC *m_trace = new VerilatedVcdC; //波形跟踪时需设置全局变量　m_trace
// =============== Memory ===============
#define MEM_BASE 0x80000000
#define MEM_SIZE 0x08000000
long long img_size = 0;
uint8_t mem[MEM_SIZE];
uint8_t* cpu2mem(ll addr) {return mem + (addr - MEM_BASE); }//将指令地址转变为mem内的地址
// ============ verilator sim ===========
#define MAX_SIM_TIME 15000000
vluint64_t sim_time = 0;
// =============== get_timer ============
static uint64_t boot_time = 0;

static uint64_t get_time_internal() {
  struct timeval now;
  gettimeofday(&now, NULL);
  uint64_t us = now.tv_sec * 1000000 + now.tv_usec;
  return us;
}

uint64_t get_time() {
  if (boot_time == 0) boot_time = get_time_internal();
  uint64_t now = get_time_internal();
  return now - boot_time;
}
// =============== DPI-C ================
void difftest_skip_ref() {
  is_skip_ref = true;
  
  skip_dut_nr_inst = 0;
}
//读mem
#ifdef CONFIG_MTRACE
char mtrace_buf[16][100]={0};
int mtrace_count=0;
#endif
extern "C" void pmem_read(ll raddr, ll *rdata)
 {
   if(raddr == 0xa0000048) //0xa0000048
  {
    (*rdata) = get_time(); // get_time()
    difftest_skip_ref();
    return ;
  }
   if (raddr < MEM_BASE) return;
   uint8_t *pt = cpu2mem(raddr) + 7;
   ll ret = 0;
   for (int i = 0; i < 8; ++i) {
     ret = (ret << 8) | (*pt--);
   }
   *rdata = ret;
#ifdef CONFIG_MTRACE
	printf("[MTrace - Read]: addr = %016llx data = %016llx\n", raddr, ret);
   sprintf(mtrace_buf[mtrace_count],"read: addr:%016llx content:%016llx",raddr,ret);
   mtrace_count=(mtrace_count+1)%16;
#endif
 }
//写mem
extern "C" void pmem_write(ll waddr, ll wdata, char mask)
 {
#ifdef CONFIG_MTRACE
	printf("[MTrace - Write]: addr = %016llx, data = %016llx  mask = 0x%02x\n", waddr, wdata, (unsigned char)mask);
#endif
   if (waddr == 0xa00003F8) //0xa00003F8
  { //printf("WRITE DATA %llx %llx\n", waddr, wdata);
    putchar(wdata);
    is_skip_ref = true;
    return;
  }
   if (waddr < MEM_BASE) return;
   uint8_t *pt = cpu2mem(waddr);
   for (int i = 0; i < 8; ++i) {
     if (mask & 1) *pt = (wdata & 0xff);
     wdata >>= 8, mask >>= 1, pt++;
   }
#ifdef CONFIG_MTRACE
  sprintf(mtrace_buf[mtrace_count],"write: addr:%016llx data:%016llx",waddr,wdata);
  mtrace_count=(mtrace_count+1)%16;
#endif
 }

// Get Registers
uint64_t *cpu_gpr = NULL;
extern "C" void get_regs(const svOpenArrayHandle r)
{
  cpu_gpr = (uint64_t *)(((VerilatedDpiOpenVar*)r) -> datap());
}
//Ebreak
void ebreak()
{
  printf("%lx,%lx\n",cpu_gpr[10],dut->inst_addr_o) ;
  debug_exit(cpu_gpr[10]);
}
// =========================== Debug ===========================
// =============== Itrace ===============
#ifdef CONFIG_ITRACE
// Using IRingBuf as Itrace
// The following content are copied from nemu, until itracer().
#if defined(__GNUC__) && !defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmaybe-uninitialized"
#endif

#include "llvm/MC/MCAsmInfo.h"
#include "llvm/MC/MCContext.h"
#include "llvm/MC/MCDisassembler/MCDisassembler.h"
#include "llvm/MC/MCInstPrinter.h"
#include "llvm/Support/TargetRegistry.h"
#include "llvm/Support/TargetSelect.h"

#if defined(__GNUC__) && !defined(__clang__)
#pragma GCC diagnostic pop
#endif

using namespace llvm;

static llvm::MCDisassembler *gDisassembler = nullptr;
static llvm::MCSubtargetInfo *gSTI = nullptr;
static llvm::MCInstPrinter *gIP = nullptr;

extern "C" void init_disasm(const char *triple)
{
  llvm::InitializeAllTargetInfos();
  llvm::InitializeAllTargetMCs();
  llvm::InitializeAllAsmParsers();
  llvm::InitializeAllDisassemblers();

  std::string errstr;
  std::string gTriple(triple);

  llvm::MCInstrInfo *gMII = nullptr;
  llvm::MCRegisterInfo *gMRI = nullptr;
  auto target = llvm::TargetRegistry::lookupTarget(gTriple, errstr);
  if (!target) {
    llvm::errs() << "Can't find target for " << gTriple << ": " << errstr << "\n";
    assert(0);
  }

  MCTargetOptions MCOptions;
  gSTI = target->createMCSubtargetInfo(gTriple, "", "");
  std::string isa = target->getName();
  if (isa == "riscv32" || isa == "riscv64") {
    gSTI->ApplyFeatureFlag("+m");
    gSTI->ApplyFeatureFlag("+a");
    gSTI->ApplyFeatureFlag("+c");
    gSTI->ApplyFeatureFlag("+f");
    gSTI->ApplyFeatureFlag("+d");
  }
  gMII = target->createMCInstrInfo();
  gMRI = target->createMCRegInfo(gTriple);
  auto AsmInfo = target->createMCAsmInfo(*gMRI, gTriple, MCOptions);
#if LLVM_VERSION_MAJOR >= 13
   auto llvmTripleTwine = Twine(triple);
   auto llvmtriple = llvm::Triple(llvmTripleTwine);
   auto Ctx = new llvm::MCContext(llvmtriple,AsmInfo, gMRI, nullptr);
#else
   auto Ctx = new llvm::MCContext(AsmInfo, gMRI, nullptr);
#endif
  gDisassembler = target->createMCDisassembler(*gSTI, *Ctx);
  gIP = target->createMCInstPrinter(llvm::Triple(gTriple),
      AsmInfo->getAssemblerDialect(), *AsmInfo, *gMII, *gMRI);
  gIP->setPrintImmHex(true);
#if LLVM_VERSION_MAJOR >= 11
  gIP->setPrintBranchImmAsAddress(true);
#endif
}

extern "C" void disassemble(char *str, uint64_t pc, uint8_t *code, int nbyte)
{
  MCInst inst;
  llvm::ArrayRef<uint8_t> arr(code, nbyte);
  uint64_t dummy_size = 0;
  gDisassembler->getInstruction(inst, dummy_size, arr, pc, llvm::nulls());

  std::string s;
  raw_string_ostream os(s);
  gIP->printInst(&inst, pc, "", *gSTI, os);

  int skip = s.find_first_not_of('\t');
  const char *p = s.c_str() + skip;
  strcpy(str, p);
}

#define SIZE_RINGBUF 16
#define LEN_RINGBUF 256
int ring_pos = SIZE_RINGBUF - 1;
char ringbuf[SIZE_RINGBUF][LEN_RINGBUF];

void itrace_record(uint64_t pc)
{
  if (pc < MEM_BASE) return;
  // ring_pos
  if (ring_pos == SIZE_RINGBUF - 1) ring_pos = 0;
  else ring_pos = ring_pos + 1;
  // fetch_inst
  uint8_t *pt = cpu2mem(pc);
  uint8_t *inst = (uint8_t*)malloc(sizeof(uint8_t) * 4);
  for (int i = 0; i < 4; ++i) {
    inst[i] = (*pt++);
  }
  // prepare buffer
  char *p = ringbuf[ring_pos];
  p += sprintf(p, "0x%016lx:", pc);
  for (int i = 0; i < 4; ++i) {
    p += sprintf(p, " %02x", inst[i]);
  }
  p += sprintf(p, "\t");
  // disasm
  disassemble(p, pc, inst, 4);
}

void itrace_output()
{
  printf("========== Itrace Ringbuf ==========\n");
  for (int i = 0; i < SIZE_RINGBUF; ++i) {
    if (ring_pos == i) printf("--->");
    else printf("    ");
    printf("%s\n", ringbuf[i]);
  }
  printf("====================================\n");
}
#endif
// ========================= Mtrace  ===========================
#ifdef CONFIG_MTRACE
void print_mtrace(){
  printf("========== Mtrace Ringbuf ==========\n");
  for(int i=0;i<16;i++)
  {
    if(strlen(mtrace_buf[i])==0) break;
    if((i+1)%16==mtrace_count) printf("-->");
    else printf("   ");
    printf("%s\n",mtrace_buf[i]);
  }
  printf("====================================\n");
}
#endif
// ========================= Difftest ==========================
#ifdef CONFIG_DIFFTEST
enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF };
void (*ref_difftest_memcpy)(uint32_t addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;
void (*ref_difftest_raise_intr)(uint64_t NO) = NULL;


void init_difftest() {
  char ref_so_file[]="/home/xin/.ssh/ysyx-workbench/nemu/build/riscv64-nemu-interpreter-so";
  assert(ref_so_file != NULL);

  void *handle;
  handle = dlopen(ref_so_file, RTLD_LAZY);
  assert(handle);

  ref_difftest_memcpy = (void (*)(uint32_t addr, void *buf, size_t n, bool direction))(dlsym(handle, "difftest_memcpy"));
  assert(ref_difftest_memcpy);

  ref_difftest_regcpy = (void (*)(void *dut, bool direction))(dlsym(handle, "difftest_regcpy"));
  assert(ref_difftest_regcpy);

  ref_difftest_exec = (void (*)(uint64_t n))(dlsym(handle, "difftest_exec"));
  assert(ref_difftest_exec);

  ref_difftest_raise_intr = (void (*)(uint64_t NO))(dlsym(handle, "difftest_raise_intr"));
  assert(ref_difftest_raise_intr);

  void (*ref_difftest_init)() = (void (*)())(dlsym(handle, "difftest_init"));
  assert(ref_difftest_init);

  ref_difftest_init();
  ref_difftest_memcpy(MEM_BASE, mem, img_size, DIFFTEST_TO_REF);
  ref_difftest_regcpy(cpu_gpr, DIFFTEST_TO_REF);
}
void checkregs(uint64_t *ref_regs)
{
  for (int i = 0; i <= 32; ++i) {
    if (ref_regs[i] != cpu_gpr[i]) {
        printf("============ difftest ================\n");
      printf("Error: Difftest failed at reg %d, pc = 0x%016lx\n", i, cpu_gpr[32]);
      for (int j = 0; j <= 32; ++j) {
        if (cpu_gpr[j] != ref_regs[j]) printf(COLOR_RED);
        printf("reg %02d: dut = 0x%016lx, ref = 0x%016lx\n", j, cpu_gpr[j], ref_regs[j]);
        if (cpu_gpr[j] != ref_regs[j]) printf(COLOR_NONE);
      }
      debug_exit(1);
    }
  }
}

uint64_t ref_regs[32];
void exec_once();
void difftest_exec_once()
{
  if (is_skip_ref) {
    exec_once();
    
    ref_difftest_regcpy(cpu_gpr, DIFFTEST_TO_REF);
    is_skip_ref = false;
    //printf("%lx\n",cpu_gpr[32]);
    return;
  }

  ref_difftest_exec(1);
  ref_difftest_regcpy(ref_regs, DIFFTEST_TO_DUT);
  checkregs(ref_regs);
}

#endif

void debug_exit(int status)
{
#ifdef CONFIG_GTKWAVE
  m_trace -> close();
#endif
#ifdef CONFIG_ITRACE
  if (status != 0) itrace_output();
#endif
#ifdef CONFIG_MTRACE
  if (status != 0) print_mtrace();
#endif
  if (status == 0) puts("\33[1;32mSim Result: HIT GOOD TRAP\33[0m");
  else puts("\33[1;31mSim Result: HIT BAD TRAP\33[0m");
  exit(EXIT_SUCCESS);

}

// ========================= Functions =========================
//将指令读入到mem中(附带打印内存功能)
void load_image()
{
  char image_path[] = "/home/xin/.ssh/ysyx-workbench/npc/1.bin";
  assert(image_path != NULL);
  FILE *fp = fopen(image_path, "rb");
  assert(fp);
  fseek(fp, 0, SEEK_END);
  img_size = ftell(fp);
  fseek(fp, 0, SEEK_SET);
  printf("The image is %s, size = %lld\n", image_path, img_size);
  int ret = fread(mem, img_size, 1, fp);
  fclose(fp);
  assert(ret);
}
//通过地址输入计算输出指令
uint32_t inst_read(uint64_t raddr)
{
    if (raddr < MEM_BASE)
    { printf("地址太小了\n") ;
    return 0 ;}
    uint32_t inst ;
    uint8_t *pt = cpu2mem(raddr) + 3;
    for (int i = 0; i < 4; ++i) {
    inst = (inst << 8) | (*pt--);
  }
    return inst ;
}
//gtkwave的波形生成测试
void gtkwave()
{
    Verilated::traceEverOn(true);
    dut->trace(m_trace, 5);
    m_trace->open("top.vcd");
}
//cpu复位信号控制
void cpu_reset()
{
  dut -> clk = 0;
  dut -> rst_n = 0;
  dut -> eval();
#ifdef CONFIG_GTKWAVE
  m_trace -> dump(sim_time++);
#endif
  dut -> clk = 1;
  dut -> rst_n = 0;
  dut -> eval();
#ifdef CONFIG_GTKWAVE
  m_trace -> dump(sim_time++);
#endif
  dut -> rst_n = 1;
}
//cpu运行一次
void exec_once()
{
#ifdef CONFIG_ITRACE
  itrace_record(dut->inst_addr_o);
#endif
  dut->clk = 0;
  dut -> eval();
#ifdef CONFIG_GTKWAVE
  m_trace -> dump(sim_time++);
#endif
  dut->clk = 1;
  dut -> eval();
#ifdef CONFIG_GTKWAVE
  m_trace -> dump(sim_time++);
#endif

}
//主函数部分
int main(int argc, char** argv, char** env) {
    printf("++++++++start+++++++\n");
#ifdef  CONFIG_GTKWAVE 
    gtkwave();
#endif
    load_image();
    cpu_reset();
#ifdef CONFIG_ITRACE
  init_disasm("riscv64-pc-linux-gnu");
#endif
//2流水线择在这里将cpu先跑一次，不可放在‘init_disasm（）’初始前
    exec_once();
#ifdef CONFIG_DIFFTEST
  init_difftest();
#endif
    while (sim_time < MAX_SIM_TIME) {
    exec_once();
#ifdef CONFIG_DIFFTEST
    difftest_exec_once();
#endif
    }
}
