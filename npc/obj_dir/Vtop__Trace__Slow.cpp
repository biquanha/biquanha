// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceInitTop(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+563,"clk", false,-1);
        tracep->declBit(c+564,"rst_n", false,-1);
        tracep->declBus(c+565,"inst", false,-1, 31,0);
        tracep->declQuad(c+566,"inst_addr_o", false,-1, 63,0);
        tracep->declQuad(c+568,"now_addr", false,-1, 63,0);
        tracep->declBus(c+570,"now_inst", false,-1, 31,0);
        tracep->declBit(c+563,"top clk", false,-1);
        tracep->declBit(c+564,"top rst_n", false,-1);
        tracep->declBus(c+565,"top inst", false,-1, 31,0);
        tracep->declQuad(c+566,"top inst_addr_o", false,-1, 63,0);
        tracep->declQuad(c+568,"top now_addr", false,-1, 63,0);
        tracep->declBus(c+570,"top now_inst", false,-1, 31,0);
        tracep->declBit(c+563,"top ysyx_22050019_core_inst clk", false,-1);
        tracep->declBit(c+564,"top ysyx_22050019_core_inst rst_n", false,-1);
        tracep->declBus(c+565,"top ysyx_22050019_core_inst inst_i", false,-1, 31,0);
        tracep->declQuad(c+566,"top ysyx_22050019_core_inst inst_addr", false,-1, 63,0);
        tracep->declQuad(c+568,"top ysyx_22050019_core_inst inst_addr_if_id", false,-1, 63,0);
        tracep->declBus(c+570,"top ysyx_22050019_core_inst inst_if_id", false,-1, 31,0);
        tracep->declQuad(c+10,"top ysyx_22050019_core_inst inst_addr_pc_if", false,-1, 63,0);
        tracep->declBus(c+571,"top ysyx_22050019_core_inst raddr1_id_regs", false,-1, 4,0);
        tracep->declBus(c+572,"top ysyx_22050019_core_inst raddr2_id_regs", false,-1, 4,0);
        tracep->declQuad(c+12,"top ysyx_22050019_core_inst rdata1_id_regs", false,-1, 63,0);
        tracep->declQuad(c+14,"top ysyx_22050019_core_inst rdata2_id_regs", false,-1, 63,0);
        tracep->declQuad(c+16,"top ysyx_22050019_core_inst op1_id_ex", false,-1, 63,0);
        tracep->declQuad(c+18,"top ysyx_22050019_core_inst op2_id_ex", false,-1, 63,0);
        tracep->declBit(c+20,"top ysyx_22050019_core_inst reg_we_id_ex", false,-1);
        tracep->declBus(c+573,"top ysyx_22050019_core_inst reg_waddr_id_ex", false,-1, 4,0);
        tracep->declBus(c+21,"top ysyx_22050019_core_inst alu_sel", false,-1, 22,0);
        tracep->declQuad(c+22,"top ysyx_22050019_core_inst snpc", false,-1, 63,0);
        tracep->declBit(c+574,"top ysyx_22050019_core_inst inst_j", false,-1);
        tracep->declBit(c+575,"top ysyx_22050019_core_inst ram_we_id_ex", false,-1);
        tracep->declQuad(c+576,"top ysyx_22050019_core_inst ram_waddr_id_ex", false,-1, 63,0);
        tracep->declBit(c+578,"top ysyx_22050019_core_inst ram_re_id_ex", false,-1);
        tracep->declBus(c+24,"top ysyx_22050019_core_inst mem_r_wdth", false,-1, 5,0);
        tracep->declBus(c+25,"top ysyx_22050019_core_inst mem_w_wdth", false,-1, 2,0);
        tracep->declQuad(c+579,"top ysyx_22050019_core_inst wdata_ex_reg", false,-1, 63,0);
        tracep->declBit(c+20,"top ysyx_22050019_core_inst reg_we_ex_reg", false,-1);
        tracep->declBus(c+573,"top ysyx_22050019_core_inst waddr_ex_reg", false,-1, 4,0);
        tracep->declBit(c+575,"top ysyx_22050019_core_inst ram_we_ex_mem", false,-1);
        tracep->declQuad(c+581,"top ysyx_22050019_core_inst ram_waddr_ex_mem", false,-1, 63,0);
        tracep->declQuad(c+576,"top ysyx_22050019_core_inst ram_wdata_ex_mem", false,-1, 63,0);
        tracep->declBit(c+578,"top ysyx_22050019_core_inst ram_re_ex_mem", false,-1);
        tracep->declQuad(c+26,"top ysyx_22050019_core_inst ram_rdata_mem_ex", false,-1, 63,0);
        tracep->declQuad(c+583,"top ysyx_22050019_core_inst ram_raddr_ex_mem", false,-1, 63,0);
        tracep->declBus(c+28,"top ysyx_22050019_core_inst wmask", false,-1, 7,0);
        tracep->declQuad(c+579,"top ysyx_22050019_core_inst wdata_reg", false,-1, 63,0);
        tracep->declBit(c+20,"top ysyx_22050019_core_inst wen_reg", false,-1);
        tracep->declBus(c+573,"top ysyx_22050019_core_inst waddr_reg", false,-1, 4,0);
        tracep->declBus(c+676,"top ysyx_22050019_core_inst PC DW", false,-1, 31,0);
        tracep->declQuad(c+677,"top ysyx_22050019_core_inst PC RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+563,"top ysyx_22050019_core_inst PC clk", false,-1);
        tracep->declBit(c+564,"top ysyx_22050019_core_inst PC rst_n", false,-1);
        tracep->declBit(c+574,"top ysyx_22050019_core_inst PC inst_j", false,-1);
        tracep->declQuad(c+22,"top ysyx_22050019_core_inst PC snpc", false,-1, 63,0);
        tracep->declQuad(c+10,"top ysyx_22050019_core_inst PC inst_addr", false,-1, 63,0);
        tracep->declQuad(c+29,"top ysyx_22050019_core_inst PC inst_addr_reg", false,-1, 63,0);
        tracep->declQuad(c+31,"top ysyx_22050019_core_inst PC q", false,-1, 63,0);
        tracep->declBit(c+563,"top ysyx_22050019_core_inst IFU clk", false,-1);
        tracep->declBit(c+564,"top ysyx_22050019_core_inst IFU rst_n", false,-1);
        tracep->declQuad(c+10,"top ysyx_22050019_core_inst IFU inst_addr_i", false,-1, 63,0);
        tracep->declBus(c+565,"top ysyx_22050019_core_inst IFU inst_i", false,-1, 31,0);
        tracep->declQuad(c+568,"top ysyx_22050019_core_inst IFU inst_addr_o", false,-1, 63,0);
        tracep->declQuad(c+566,"top ysyx_22050019_core_inst IFU inst_addr_reg_o", false,-1, 63,0);
        tracep->declBus(c+570,"top ysyx_22050019_core_inst IFU inst_o", false,-1, 31,0);
        tracep->declQuad(c+33,"top ysyx_22050019_core_inst IFU fetchmem_rdata", false,-1, 63,0);
        tracep->declBit(c+679,"top ysyx_22050019_core_inst IFU fetchmem ren", false,-1);
        tracep->declBit(c+680,"top ysyx_22050019_core_inst IFU fetchmem wen", false,-1);
        tracep->declQuad(c+10,"top ysyx_22050019_core_inst IFU fetchmem raddr", false,-1, 63,0);
        tracep->declQuad(c+33,"top ysyx_22050019_core_inst IFU fetchmem rdata", false,-1, 63,0);
        tracep->declQuad(c+681,"top ysyx_22050019_core_inst IFU fetchmem waddr", false,-1, 63,0);
        tracep->declQuad(c+681,"top ysyx_22050019_core_inst IFU fetchmem wdata", false,-1, 63,0);
        tracep->declBus(c+683,"top ysyx_22050019_core_inst IFU fetchmem mask", false,-1, 7,0);
        tracep->declBus(c+684,"top ysyx_22050019_core_inst IFU i0 DW", false,-1, 31,0);
        tracep->declBus(c+685,"top ysyx_22050019_core_inst IFU i0 RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+563,"top ysyx_22050019_core_inst IFU i0 clk", false,-1);
        tracep->declBit(c+564,"top ysyx_22050019_core_inst IFU i0 rst_n", false,-1);
        tracep->declBus(c+565,"top ysyx_22050019_core_inst IFU i0 din", false,-1, 31,0);
        tracep->declBus(c+570,"top ysyx_22050019_core_inst IFU i0 dout", false,-1, 31,0);
        tracep->declBit(c+679,"top ysyx_22050019_core_inst IFU i0 wen", false,-1);
        tracep->declBus(c+35,"top ysyx_22050019_core_inst IFU i0 q", false,-1, 31,0);
        tracep->declBus(c+676,"top ysyx_22050019_core_inst IFU i1 DW", false,-1, 31,0);
        tracep->declQuad(c+681,"top ysyx_22050019_core_inst IFU i1 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+563,"top ysyx_22050019_core_inst IFU i1 clk", false,-1);
        tracep->declBit(c+564,"top ysyx_22050019_core_inst IFU i1 rst_n", false,-1);
        tracep->declQuad(c+10,"top ysyx_22050019_core_inst IFU i1 din", false,-1, 63,0);
        tracep->declQuad(c+568,"top ysyx_22050019_core_inst IFU i1 dout", false,-1, 63,0);
        tracep->declBit(c+679,"top ysyx_22050019_core_inst IFU i1 wen", false,-1);
        tracep->declQuad(c+36,"top ysyx_22050019_core_inst IFU i1 q", false,-1, 63,0);
        tracep->declQuad(c+568,"top ysyx_22050019_core_inst IDU inst_addr_pc", false,-1, 63,0);
        tracep->declBus(c+570,"top ysyx_22050019_core_inst IDU inst_i", false,-1, 31,0);
        tracep->declQuad(c+12,"top ysyx_22050019_core_inst IDU rdata1", false,-1, 63,0);
        tracep->declQuad(c+14,"top ysyx_22050019_core_inst IDU rdata2", false,-1, 63,0);
        tracep->declQuad(c+22,"top ysyx_22050019_core_inst IDU snpc", false,-1, 63,0);
        tracep->declBit(c+574,"top ysyx_22050019_core_inst IDU inst_j", false,-1);
        tracep->declBit(c+575,"top ysyx_22050019_core_inst IDU ram_we", false,-1);
        tracep->declQuad(c+576,"top ysyx_22050019_core_inst IDU ram_waddr", false,-1, 63,0);
        tracep->declBit(c+578,"top ysyx_22050019_core_inst IDU ram_re", false,-1);
        tracep->declBus(c+571,"top ysyx_22050019_core_inst IDU raddr1", false,-1, 4,0);
        tracep->declBus(c+572,"top ysyx_22050019_core_inst IDU raddr2", false,-1, 4,0);
        tracep->declQuad(c+16,"top ysyx_22050019_core_inst IDU op1", false,-1, 63,0);
        tracep->declQuad(c+18,"top ysyx_22050019_core_inst IDU op2", false,-1, 63,0);
        tracep->declBus(c+24,"top ysyx_22050019_core_inst IDU mem_r_wdth", false,-1, 5,0);
        tracep->declBus(c+25,"top ysyx_22050019_core_inst IDU mem_w_wdth", false,-1, 2,0);
        tracep->declBit(c+20,"top ysyx_22050019_core_inst IDU reg_we_o", false,-1);
        tracep->declBus(c+573,"top ysyx_22050019_core_inst IDU reg_waddr_o", false,-1, 4,0);
        tracep->declBus(c+21,"top ysyx_22050019_core_inst IDU alu_sel", false,-1, 22,0);
        tracep->declBus(c+585,"top ysyx_22050019_core_inst IDU opcode", false,-1, 6,0);
        tracep->declBus(c+586,"top ysyx_22050019_core_inst IDU rd", false,-1, 4,0);
        tracep->declBus(c+587,"top ysyx_22050019_core_inst IDU funct3", false,-1, 2,0);
        tracep->declBus(c+588,"top ysyx_22050019_core_inst IDU rs1", false,-1, 4,0);
        tracep->declBus(c+589,"top ysyx_22050019_core_inst IDU rs2", false,-1, 4,0);
        tracep->declBus(c+590,"top ysyx_22050019_core_inst IDU funct7", false,-1, 6,0);
        tracep->declBus(c+591,"top ysyx_22050019_core_inst IDU imm_12_I", false,-1, 11,0);
        tracep->declQuad(c+38,"top ysyx_22050019_core_inst IDU imm_12_I_64", false,-1, 63,0);
        tracep->declBus(c+592,"top ysyx_22050019_core_inst IDU imm_20", false,-1, 19,0);
        tracep->declQuad(c+593,"top ysyx_22050019_core_inst IDU imm_20_U_64", false,-1, 63,0);
        tracep->declBus(c+40,"top ysyx_22050019_core_inst IDU imm_20_j", false,-1, 19,0);
        tracep->declQuad(c+41,"top ysyx_22050019_core_inst IDU imm_20_j_64", false,-1, 63,0);
        tracep->declBus(c+43,"top ysyx_22050019_core_inst IDU imm_12_b", false,-1, 11,0);
        tracep->declQuad(c+44,"top ysyx_22050019_core_inst IDU imm_12_b_64", false,-1, 63,0);
        tracep->declBus(c+46,"top ysyx_22050019_core_inst IDU imm_12_s", false,-1, 11,0);
        tracep->declQuad(c+47,"top ysyx_22050019_core_inst IDU imm_12_s_64", false,-1, 63,0);
        tracep->declBus(c+49,"top ysyx_22050019_core_inst IDU imm_sel", false,-1, 5,0);
        tracep->declQuad(c+50,"top ysyx_22050019_core_inst IDU imm64", false,-1, 63,0);
        tracep->declBit(c+595,"top ysyx_22050019_core_inst IDU op_i", false,-1);
        tracep->declBit(c+596,"top ysyx_22050019_core_inst IDU op_b", false,-1);
        tracep->declBit(c+575,"top ysyx_22050019_core_inst IDU op_s", false,-1);
        tracep->declBit(c+597,"top ysyx_22050019_core_inst IDU op_r", false,-1);
        tracep->declBit(c+578,"top ysyx_22050019_core_inst IDU inst_l", false,-1);
        tracep->declBit(c+598,"top ysyx_22050019_core_inst IDU inst_addiw", false,-1);
        tracep->declBit(c+599,"top ysyx_22050019_core_inst IDU inst_auipc", false,-1);
        tracep->declBit(c+600,"top ysyx_22050019_core_inst IDU inst_lui", false,-1);
        tracep->declBit(c+601,"top ysyx_22050019_core_inst IDU inst_jal", false,-1);
        tracep->declBit(c+602,"top ysyx_22050019_core_inst IDU inst_jalr", false,-1);
        tracep->declBit(c+603,"top ysyx_22050019_core_inst IDU inst_w", false,-1);
        tracep->declBit(c+604,"top ysyx_22050019_core_inst IDU rv32_funct3_000", false,-1);
        tracep->declBit(c+605,"top ysyx_22050019_core_inst IDU rv32_funct3_001", false,-1);
        tracep->declBit(c+606,"top ysyx_22050019_core_inst IDU rv32_funct3_010", false,-1);
        tracep->declBit(c+607,"top ysyx_22050019_core_inst IDU rv32_funct3_011", false,-1);
        tracep->declBit(c+608,"top ysyx_22050019_core_inst IDU rv32_funct3_100", false,-1);
        tracep->declBit(c+609,"top ysyx_22050019_core_inst IDU rv32_funct3_101", false,-1);
        tracep->declBit(c+610,"top ysyx_22050019_core_inst IDU rv32_funct3_110", false,-1);
        tracep->declBit(c+611,"top ysyx_22050019_core_inst IDU rv32_funct3_111", false,-1);
        tracep->declBit(c+612,"top ysyx_22050019_core_inst IDU rv32_funct7_000_0000", false,-1);
        tracep->declBit(c+613,"top ysyx_22050019_core_inst IDU rv32_funct7_000_0001", false,-1);
        tracep->declBit(c+614,"top ysyx_22050019_core_inst IDU rv32_funct7_010_0000", false,-1);
        tracep->declBit(c+615,"top ysyx_22050019_core_inst IDU addi", false,-1);
        tracep->declBit(c+616,"top ysyx_22050019_core_inst IDU beq", false,-1);
        tracep->declBit(c+617,"top ysyx_22050019_core_inst IDU sd", false,-1);
        tracep->declBit(c+618,"top ysyx_22050019_core_inst IDU sub", false,-1);
        tracep->declBit(c+619,"top ysyx_22050019_core_inst IDU add", false,-1);
        tracep->declBit(c+620,"top ysyx_22050019_core_inst IDU addiw", false,-1);
        tracep->declBit(c+621,"top ysyx_22050019_core_inst IDU bne", false,-1);
        tracep->declBit(c+622,"top ysyx_22050019_core_inst IDU ld", false,-1);
        tracep->declBit(c+623,"top ysyx_22050019_core_inst IDU sltiu", false,-1);
        tracep->declBit(c+624,"top ysyx_22050019_core_inst IDU lw", false,-1);
        tracep->declBit(c+625,"top ysyx_22050019_core_inst IDU addw", false,-1);
        tracep->declBit(c+626,"top ysyx_22050019_core_inst IDU srai", false,-1);
        tracep->declBit(c+627,"top ysyx_22050019_core_inst IDU lbu", false,-1);
        tracep->declBit(c+628,"top ysyx_22050019_core_inst IDU sh", false,-1);
        tracep->declBit(c+629,"top ysyx_22050019_core_inst IDU andi", false,-1);
        tracep->declBit(c+630,"top ysyx_22050019_core_inst IDU sllw", false,-1);
        tracep->declBit(c+631,"top ysyx_22050019_core_inst IDU AND", false,-1);
        tracep->declBit(c+632,"top ysyx_22050019_core_inst IDU sltu", false,-1);
        tracep->declBit(c+633,"top ysyx_22050019_core_inst IDU xor0", false,-1);
        tracep->declBit(c+634,"top ysyx_22050019_core_inst IDU xori", false,-1);
        tracep->declBit(c+635,"top ysyx_22050019_core_inst IDU OR", false,-1);
        tracep->declBit(c+636,"top ysyx_22050019_core_inst IDU sb", false,-1);
        tracep->declBit(c+637,"top ysyx_22050019_core_inst IDU slli", false,-1);
        tracep->declBit(c+638,"top ysyx_22050019_core_inst IDU bge", false,-1);
        tracep->declBit(c+639,"top ysyx_22050019_core_inst IDU sw", false,-1);
        tracep->declBit(c+640,"top ysyx_22050019_core_inst IDU mulw", false,-1);
        tracep->declBit(c+641,"top ysyx_22050019_core_inst IDU divw", false,-1);
        tracep->declBit(c+642,"top ysyx_22050019_core_inst IDU remw", false,-1);
        tracep->declBit(c+643,"top ysyx_22050019_core_inst IDU slt", false,-1);
        tracep->declBit(c+644,"top ysyx_22050019_core_inst IDU blt", false,-1);
        tracep->declBit(c+645,"top ysyx_22050019_core_inst IDU lh", false,-1);
        tracep->declBit(c+646,"top ysyx_22050019_core_inst IDU lhu", false,-1);
        tracep->declBit(c+647,"top ysyx_22050019_core_inst IDU subw", false,-1);
        tracep->declBit(c+648,"top ysyx_22050019_core_inst IDU srli", false,-1);
        tracep->declBit(c+649,"top ysyx_22050019_core_inst IDU slliw", false,-1);
        tracep->declBit(c+650,"top ysyx_22050019_core_inst IDU sraiw", false,-1);
        tracep->declBit(c+651,"top ysyx_22050019_core_inst IDU mul", false,-1);
        tracep->declBit(c+652,"top ysyx_22050019_core_inst IDU srliw", false,-1);
        tracep->declBit(c+653,"top ysyx_22050019_core_inst IDU sraw", false,-1);
        tracep->declBit(c+654,"top ysyx_22050019_core_inst IDU srlw", false,-1);
        tracep->declBit(c+655,"top ysyx_22050019_core_inst IDU bltu", false,-1);
        tracep->declBit(c+656,"top ysyx_22050019_core_inst IDU divu", false,-1);
        tracep->declBit(c+657,"top ysyx_22050019_core_inst IDU slti", false,-1);
        tracep->declBit(c+658,"top ysyx_22050019_core_inst IDU divuw", false,-1);
        tracep->declBit(c+659,"top ysyx_22050019_core_inst IDU bgeu", false,-1);
        tracep->declBit(c+660,"top ysyx_22050019_core_inst IDU lb", false,-1);
        tracep->declBit(c+661,"top ysyx_22050019_core_inst IDU ori", false,-1);
        tracep->declBit(c+662,"top ysyx_22050019_core_inst IDU remuw", false,-1);
        tracep->declBit(c+663,"top ysyx_22050019_core_inst IDU sll", false,-1);
        tracep->declBit(c+664,"top ysyx_22050019_core_inst IDU remu", false,-1);
        tracep->declBit(c+665,"top ysyx_22050019_core_inst IDU alu_add", false,-1);
        tracep->declBit(c+618,"top ysyx_22050019_core_inst IDU alu_sub", false,-1);
        tracep->declBit(c+666,"top ysyx_22050019_core_inst IDU alu_add_32", false,-1);
        tracep->declBit(c+667,"top ysyx_22050019_core_inst IDU alu_sltu", false,-1);
        tracep->declBit(c+626,"top ysyx_22050019_core_inst IDU alu_sr_64", false,-1);
        tracep->declBit(c+668,"top ysyx_22050019_core_inst IDU alu_and", false,-1);
        tracep->declBit(c+669,"top ysyx_22050019_core_inst IDU alu_sl_32", false,-1);
        tracep->declBit(c+670,"top ysyx_22050019_core_inst IDU alu_xor", false,-1);
        tracep->declBit(c+671,"top ysyx_22050019_core_inst IDU alu_or", false,-1);
        tracep->declBit(c+637,"top ysyx_22050019_core_inst IDU alu_slli_64", false,-1);
        tracep->declBit(c+640,"top ysyx_22050019_core_inst IDU alu_mul32", false,-1);
        tracep->declBit(c+672,"top ysyx_22050019_core_inst IDU alu_divw", false,-1);
        tracep->declBit(c+673,"top ysyx_22050019_core_inst IDU alu_remw", false,-1);
        tracep->declBit(c+674,"top ysyx_22050019_core_inst IDU alu_slt", false,-1);
        tracep->declBit(c+647,"top ysyx_22050019_core_inst IDU alu_sub_32", false,-1);
        tracep->declBit(c+648,"top ysyx_22050019_core_inst IDU alu_srli", false,-1);
        tracep->declBit(c+650,"top ysyx_22050019_core_inst IDU alu_sr_32", false,-1);
        tracep->declBit(c+651,"top ysyx_22050019_core_inst IDU alu_mul", false,-1);
        tracep->declBit(c+675,"top ysyx_22050019_core_inst IDU alu_srliw", false,-1);
        tracep->declBit(c+653,"top ysyx_22050019_core_inst IDU alu_sra_32", false,-1);
        tracep->declBit(c+656,"top ysyx_22050019_core_inst IDU alu_divu_64", false,-1);
        tracep->declBit(c+663,"top ysyx_22050019_core_inst IDU alu_sll_64", false,-1);
        tracep->declBit(c+664,"top ysyx_22050019_core_inst IDU alu_rem_64", false,-1);
        tracep->declBus(c+52,"top ysyx_22050019_core_inst IDU op1_en", false,-1, 1,0);
        tracep->declBus(c+53,"top ysyx_22050019_core_inst IDU op2_en", false,-1, 2,0);
        tracep->declBus(c+54,"top ysyx_22050019_core_inst IDU branch", false,-1, 1,0);
        tracep->declQuad(c+55,"top ysyx_22050019_core_inst IDU b_ab_s", false,-1, 63,0);
        tracep->declBit(c+57,"top ysyx_22050019_core_inst IDU beq_y", false,-1);
        tracep->declBit(c+58,"top ysyx_22050019_core_inst IDU b_ab_1_s", false,-1);
        tracep->declBit(c+59,"top ysyx_22050019_core_inst IDU b_ab_1_u", false,-1);
        tracep->declBus(c+686,"top ysyx_22050019_core_inst IDU mux_imm NR_KEY", false,-1, 31,0);
        tracep->declBus(c+686,"top ysyx_22050019_core_inst IDU mux_imm KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+676,"top ysyx_22050019_core_inst IDU mux_imm DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+50,"top ysyx_22050019_core_inst IDU mux_imm out", false,-1, 63,0);
        tracep->declBus(c+49,"top ysyx_22050019_core_inst IDU mux_imm key", false,-1, 5,0);
        tracep->declQuad(c+681,"top ysyx_22050019_core_inst IDU mux_imm default_out", false,-1, 63,0);
        tracep->declArray(c+60,"top ysyx_22050019_core_inst IDU mux_imm lut", false,-1, 419,0);
        tracep->declBus(c+686,"top ysyx_22050019_core_inst IDU mux_imm i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+686,"top ysyx_22050019_core_inst IDU mux_imm i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+676,"top ysyx_22050019_core_inst IDU mux_imm i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+687,"top ysyx_22050019_core_inst IDU mux_imm i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+50,"top ysyx_22050019_core_inst IDU mux_imm i0 out", false,-1, 63,0);
        tracep->declBus(c+49,"top ysyx_22050019_core_inst IDU mux_imm i0 key", false,-1, 5,0);
        tracep->declQuad(c+681,"top ysyx_22050019_core_inst IDU mux_imm i0 default_out", false,-1, 63,0);
        tracep->declArray(c+60,"top ysyx_22050019_core_inst IDU mux_imm i0 lut", false,-1, 419,0);
        tracep->declBus(c+688,"top ysyx_22050019_core_inst IDU mux_imm i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<6; i++) {
                tracep->declArray(c+74+i*3,"top ysyx_22050019_core_inst IDU mux_imm i0 pair_list", true,(i+0), 69,0);}}
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+92+i*1,"top ysyx_22050019_core_inst IDU mux_imm i0 key_list", true,(i+0), 5,0);}}
        {int i; for (i=0; i<6; i++) {
                tracep->declQuad(c+98+i*2,"top ysyx_22050019_core_inst IDU mux_imm i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+110,"top ysyx_22050019_core_inst IDU mux_imm i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+112,"top ysyx_22050019_core_inst IDU mux_imm i0 hit", false,-1);
        tracep->declBus(c+689,"top ysyx_22050019_core_inst IDU mux_imm i0 i", false,-1, 31,0);
        tracep->declBus(c+690,"top ysyx_22050019_core_inst IDU mux_op1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+690,"top ysyx_22050019_core_inst IDU mux_op1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+676,"top ysyx_22050019_core_inst IDU mux_op1 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+16,"top ysyx_22050019_core_inst IDU mux_op1 out", false,-1, 63,0);
        tracep->declBus(c+52,"top ysyx_22050019_core_inst IDU mux_op1 key", false,-1, 1,0);
        tracep->declQuad(c+681,"top ysyx_22050019_core_inst IDU mux_op1 default_out", false,-1, 63,0);
        tracep->declArray(c+113,"top ysyx_22050019_core_inst IDU mux_op1 lut", false,-1, 131,0);
        tracep->declBus(c+690,"top ysyx_22050019_core_inst IDU mux_op1 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+690,"top ysyx_22050019_core_inst IDU mux_op1 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+676,"top ysyx_22050019_core_inst IDU mux_op1 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+687,"top ysyx_22050019_core_inst IDU mux_op1 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+16,"top ysyx_22050019_core_inst IDU mux_op1 i0 out", false,-1, 63,0);
        tracep->declBus(c+52,"top ysyx_22050019_core_inst IDU mux_op1 i0 key", false,-1, 1,0);
        tracep->declQuad(c+681,"top ysyx_22050019_core_inst IDU mux_op1 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+113,"top ysyx_22050019_core_inst IDU mux_op1 i0 lut", false,-1, 131,0);
        tracep->declBus(c+691,"top ysyx_22050019_core_inst IDU mux_op1 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+118+i*3,"top ysyx_22050019_core_inst IDU mux_op1 i0 pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+124+i*1,"top ysyx_22050019_core_inst IDU mux_op1 i0 key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+126+i*2,"top ysyx_22050019_core_inst IDU mux_op1 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+130,"top ysyx_22050019_core_inst IDU mux_op1 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+132,"top ysyx_22050019_core_inst IDU mux_op1 i0 hit", false,-1);
        tracep->declBus(c+692,"top ysyx_22050019_core_inst IDU mux_op1 i0 i", false,-1, 31,0);
        tracep->declBus(c+693,"top ysyx_22050019_core_inst IDU mux_op2 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+693,"top ysyx_22050019_core_inst IDU mux_op2 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+676,"top ysyx_22050019_core_inst IDU mux_op2 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+18,"top ysyx_22050019_core_inst IDU mux_op2 out", false,-1, 63,0);
        tracep->declBus(c+53,"top ysyx_22050019_core_inst IDU mux_op2 key", false,-1, 2,0);
        tracep->declQuad(c+681,"top ysyx_22050019_core_inst IDU mux_op2 default_out", false,-1, 63,0);
        tracep->declArray(c+133,"top ysyx_22050019_core_inst IDU mux_op2 lut", false,-1, 200,0);
        tracep->declBus(c+693,"top ysyx_22050019_core_inst IDU mux_op2 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+693,"top ysyx_22050019_core_inst IDU mux_op2 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+676,"top ysyx_22050019_core_inst IDU mux_op2 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+687,"top ysyx_22050019_core_inst IDU mux_op2 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+18,"top ysyx_22050019_core_inst IDU mux_op2 i0 out", false,-1, 63,0);
        tracep->declBus(c+53,"top ysyx_22050019_core_inst IDU mux_op2 i0 key", false,-1, 2,0);
        tracep->declQuad(c+681,"top ysyx_22050019_core_inst IDU mux_op2 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+133,"top ysyx_22050019_core_inst IDU mux_op2 i0 lut", false,-1, 200,0);
        tracep->declBus(c+694,"top ysyx_22050019_core_inst IDU mux_op2 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+140+i*3,"top ysyx_22050019_core_inst IDU mux_op2 i0 pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+149+i*1,"top ysyx_22050019_core_inst IDU mux_op2 i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+152+i*2,"top ysyx_22050019_core_inst IDU mux_op2 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+158,"top ysyx_22050019_core_inst IDU mux_op2 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+160,"top ysyx_22050019_core_inst IDU mux_op2 i0 hit", false,-1);
        tracep->declBus(c+695,"top ysyx_22050019_core_inst IDU mux_op2 i0 i", false,-1, 31,0);
        tracep->declBus(c+690,"top ysyx_22050019_core_inst IDU mux_branch NR_KEY", false,-1, 31,0);
        tracep->declBus(c+690,"top ysyx_22050019_core_inst IDU mux_branch KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+676,"top ysyx_22050019_core_inst IDU mux_branch DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+22,"top ysyx_22050019_core_inst IDU mux_branch out", false,-1, 63,0);
        tracep->declBus(c+54,"top ysyx_22050019_core_inst IDU mux_branch key", false,-1, 1,0);
        tracep->declQuad(c+681,"top ysyx_22050019_core_inst IDU mux_branch default_out", false,-1, 63,0);
        tracep->declArray(c+161,"top ysyx_22050019_core_inst IDU mux_branch lut", false,-1, 131,0);
        tracep->declBus(c+690,"top ysyx_22050019_core_inst IDU mux_branch i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+690,"top ysyx_22050019_core_inst IDU mux_branch i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+676,"top ysyx_22050019_core_inst IDU mux_branch i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+687,"top ysyx_22050019_core_inst IDU mux_branch i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+22,"top ysyx_22050019_core_inst IDU mux_branch i0 out", false,-1, 63,0);
        tracep->declBus(c+54,"top ysyx_22050019_core_inst IDU mux_branch i0 key", false,-1, 1,0);
        tracep->declQuad(c+681,"top ysyx_22050019_core_inst IDU mux_branch i0 default_out", false,-1, 63,0);
        tracep->declArray(c+161,"top ysyx_22050019_core_inst IDU mux_branch i0 lut", false,-1, 131,0);
        tracep->declBus(c+691,"top ysyx_22050019_core_inst IDU mux_branch i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+166+i*3,"top ysyx_22050019_core_inst IDU mux_branch i0 pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+172+i*1,"top ysyx_22050019_core_inst IDU mux_branch i0 key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+174+i*2,"top ysyx_22050019_core_inst IDU mux_branch i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+178,"top ysyx_22050019_core_inst IDU mux_branch i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+180,"top ysyx_22050019_core_inst IDU mux_branch i0 hit", false,-1);
        tracep->declBus(c+692,"top ysyx_22050019_core_inst IDU mux_branch i0 i", false,-1, 31,0);
        tracep->declBus(c+570,"top ysyx_22050019_core_inst IDU Ebreak_inst inst", false,-1, 31,0);
        tracep->declBus(c+21,"top ysyx_22050019_core_inst EXU alu_sel", false,-1, 22,0);
        tracep->declBus(c+24,"top ysyx_22050019_core_inst EXU mem_r_wdth", false,-1, 5,0);
        tracep->declBus(c+25,"top ysyx_22050019_core_inst EXU mem_w_wdth", false,-1, 2,0);
        tracep->declQuad(c+16,"top ysyx_22050019_core_inst EXU op1", false,-1, 63,0);
        tracep->declQuad(c+18,"top ysyx_22050019_core_inst EXU op2", false,-1, 63,0);
        tracep->declQuad(c+576,"top ysyx_22050019_core_inst EXU ram_waddr_i", false,-1, 63,0);
        tracep->declBit(c+575,"top ysyx_22050019_core_inst EXU ram_we_i", false,-1);
        tracep->declQuad(c+26,"top ysyx_22050019_core_inst EXU ram_rdata_i", false,-1, 63,0);
        tracep->declBit(c+578,"top ysyx_22050019_core_inst EXU ram_re_i", false,-1);
        tracep->declBit(c+20,"top ysyx_22050019_core_inst EXU reg_we_i", false,-1);
        tracep->declBus(c+573,"top ysyx_22050019_core_inst EXU reg_waddr_i", false,-1, 4,0);
        tracep->declQuad(c+579,"top ysyx_22050019_core_inst EXU wdata", false,-1, 63,0);
        tracep->declBit(c+20,"top ysyx_22050019_core_inst EXU reg_we", false,-1);
        tracep->declBus(c+573,"top ysyx_22050019_core_inst EXU waddr", false,-1, 4,0);
        tracep->declBit(c+575,"top ysyx_22050019_core_inst EXU ram_we", false,-1);
        tracep->declQuad(c+581,"top ysyx_22050019_core_inst EXU ram_waddr", false,-1, 63,0);
        tracep->declQuad(c+576,"top ysyx_22050019_core_inst EXU ram_wdata", false,-1, 63,0);
        tracep->declBit(c+578,"top ysyx_22050019_core_inst EXU ram_re", false,-1);
        tracep->declQuad(c+583,"top ysyx_22050019_core_inst EXU ram_raddr", false,-1, 63,0);
        tracep->declBus(c+28,"top ysyx_22050019_core_inst EXU wmask", false,-1, 7,0);
        tracep->declQuad(c+181,"top ysyx_22050019_core_inst EXU result", false,-1, 63,0);
        tracep->declQuad(c+183,"top ysyx_22050019_core_inst EXU mem_r_data", false,-1, 63,0);
        tracep->declBus(c+28,"top ysyx_22050019_core_inst EXU mem_w_mask", false,-1, 7,0);
        tracep->declQuad(c+16,"top ysyx_22050019_core_inst EXU alu op_1", false,-1, 63,0);
        tracep->declQuad(c+18,"top ysyx_22050019_core_inst EXU alu op_2", false,-1, 63,0);
        tracep->declBus(c+21,"top ysyx_22050019_core_inst EXU alu alu_sel", false,-1, 22,0);
        tracep->declQuad(c+181,"top ysyx_22050019_core_inst EXU alu result", false,-1, 63,0);
        tracep->declBus(c+185,"top ysyx_22050019_core_inst EXU alu op1_32", false,-1, 31,0);
        tracep->declBus(c+186,"top ysyx_22050019_core_inst EXU alu op2_32", false,-1, 31,0);
        tracep->declBit(c+187,"top ysyx_22050019_core_inst EXU alu op_suber", false,-1);
        tracep->declBit(c+188,"top ysyx_22050019_core_inst EXU alu op_sltu", false,-1);
        tracep->declBit(c+189,"top ysyx_22050019_core_inst EXU alu op_sub", false,-1);
        tracep->declBit(c+190,"top ysyx_22050019_core_inst EXU alu op_slt", false,-1);
        tracep->declBit(c+191,"top ysyx_22050019_core_inst EXU alu op_sub_32", false,-1);
        tracep->declQuad(c+192,"top ysyx_22050019_core_inst EXU alu op_2_in", false,-1, 63,0);
        tracep->declQuad(c+194,"top ysyx_22050019_core_inst EXU alu add", false,-1, 63,0);
        tracep->declQuad(c+196,"top ysyx_22050019_core_inst EXU alu SEXT_add_32", false,-1, 63,0);
        tracep->declQuad(c+198,"top ysyx_22050019_core_inst EXU alu slt", false,-1, 63,0);
        tracep->declQuad(c+200,"top ysyx_22050019_core_inst EXU alu sltu", false,-1, 63,0);
        tracep->declQuad(c+202,"top ysyx_22050019_core_inst EXU alu srli_64", false,-1, 63,0);
        tracep->declBus(c+204,"top ysyx_22050019_core_inst EXU alu srli_w", false,-1, 31,0);
        tracep->declQuad(c+205,"top ysyx_22050019_core_inst EXU alu srli_32", false,-1, 63,0);
        tracep->declQuad(c+207,"top ysyx_22050019_core_inst EXU alu sri_64", false,-1, 63,0);
        tracep->declQuad(c+209,"top ysyx_22050019_core_inst EXU alu sri_32", false,-1, 63,0);
        tracep->declBus(c+211,"top ysyx_22050019_core_inst EXU alu sra_w", false,-1, 31,0);
        tracep->declQuad(c+212,"top ysyx_22050019_core_inst EXU alu sraw_32", false,-1, 63,0);
        tracep->declQuad(c+214,"top ysyx_22050019_core_inst EXU alu sll_64_w", false,-1, 63,0);
        tracep->declQuad(c+216,"top ysyx_22050019_core_inst EXU alu sll_32", false,-1, 63,0);
        tracep->declQuad(c+218,"top ysyx_22050019_core_inst EXU alu sll_64", false,-1, 63,0);
        tracep->declQuad(c+220,"top ysyx_22050019_core_inst EXU alu and64", false,-1, 63,0);
        tracep->declQuad(c+222,"top ysyx_22050019_core_inst EXU alu or64", false,-1, 63,0);
        tracep->declQuad(c+224,"top ysyx_22050019_core_inst EXU alu xor64", false,-1, 63,0);
        tracep->declQuad(c+226,"top ysyx_22050019_core_inst EXU alu mul", false,-1, 63,0);
        tracep->declQuad(c+228,"top ysyx_22050019_core_inst EXU alu mul_32", false,-1, 63,0);
        tracep->declBus(c+230,"top ysyx_22050019_core_inst EXU alu div_32", false,-1, 31,0);
        tracep->declQuad(c+231,"top ysyx_22050019_core_inst EXU alu divu_64", false,-1, 63,0);
        tracep->declQuad(c+233,"top ysyx_22050019_core_inst EXU alu div_32_64", false,-1, 63,0);
        tracep->declBus(c+235,"top ysyx_22050019_core_inst EXU alu rem_32", false,-1, 31,0);
        tracep->declQuad(c+236,"top ysyx_22050019_core_inst EXU alu remu_64", false,-1, 63,0);
        tracep->declQuad(c+238,"top ysyx_22050019_core_inst EXU alu rem_32_64", false,-1, 63,0);
        tracep->declBus(c+696,"top ysyx_22050019_core_inst EXU alu mux_alu_result NR_KEY", false,-1, 31,0);
        tracep->declBus(c+696,"top ysyx_22050019_core_inst EXU alu mux_alu_result KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+676,"top ysyx_22050019_core_inst EXU alu mux_alu_result DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+181,"top ysyx_22050019_core_inst EXU alu mux_alu_result out", false,-1, 63,0);
        tracep->declBus(c+21,"top ysyx_22050019_core_inst EXU alu mux_alu_result key", false,-1, 22,0);
        tracep->declQuad(c+681,"top ysyx_22050019_core_inst EXU alu mux_alu_result default_out", false,-1, 63,0);
        tracep->declArray(c+240,"top ysyx_22050019_core_inst EXU alu mux_alu_result lut", false,-1, 2000,0);
        tracep->declBus(c+696,"top ysyx_22050019_core_inst EXU alu mux_alu_result i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+696,"top ysyx_22050019_core_inst EXU alu mux_alu_result i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+676,"top ysyx_22050019_core_inst EXU alu mux_alu_result i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+687,"top ysyx_22050019_core_inst EXU alu mux_alu_result i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+181,"top ysyx_22050019_core_inst EXU alu mux_alu_result i0 out", false,-1, 63,0);
        tracep->declBus(c+21,"top ysyx_22050019_core_inst EXU alu mux_alu_result i0 key", false,-1, 22,0);
        tracep->declQuad(c+681,"top ysyx_22050019_core_inst EXU alu mux_alu_result i0 default_out", false,-1, 63,0);
        tracep->declArray(c+240,"top ysyx_22050019_core_inst EXU alu mux_alu_result i0 lut", false,-1, 2000,0);
        tracep->declBus(c+697,"top ysyx_22050019_core_inst EXU alu mux_alu_result i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<23; i++) {
                tracep->declArray(c+303+i*3,"top ysyx_22050019_core_inst EXU alu mux_alu_result i0 pair_list", true,(i+0), 86,0);}}
        {int i; for (i=0; i<23; i++) {
                tracep->declBus(c+372+i*1,"top ysyx_22050019_core_inst EXU alu mux_alu_result i0 key_list", true,(i+0), 22,0);}}
        {int i; for (i=0; i<23; i++) {
                tracep->declQuad(c+395+i*2,"top ysyx_22050019_core_inst EXU alu mux_alu_result i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+441,"top ysyx_22050019_core_inst EXU alu mux_alu_result i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+443,"top ysyx_22050019_core_inst EXU alu mux_alu_result i0 hit", false,-1);
        tracep->declBus(c+698,"top ysyx_22050019_core_inst EXU alu mux_alu_result i0 i", false,-1, 31,0);
        tracep->declBus(c+686,"top ysyx_22050019_core_inst EXU mem_r_data_mux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+686,"top ysyx_22050019_core_inst EXU mem_r_data_mux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+676,"top ysyx_22050019_core_inst EXU mem_r_data_mux DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+183,"top ysyx_22050019_core_inst EXU mem_r_data_mux out", false,-1, 63,0);
        tracep->declBus(c+24,"top ysyx_22050019_core_inst EXU mem_r_data_mux key", false,-1, 5,0);
        tracep->declQuad(c+26,"top ysyx_22050019_core_inst EXU mem_r_data_mux default_out", false,-1, 63,0);
        tracep->declArray(c+444,"top ysyx_22050019_core_inst EXU mem_r_data_mux lut", false,-1, 419,0);
        tracep->declBus(c+686,"top ysyx_22050019_core_inst EXU mem_r_data_mux i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+686,"top ysyx_22050019_core_inst EXU mem_r_data_mux i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+676,"top ysyx_22050019_core_inst EXU mem_r_data_mux i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+687,"top ysyx_22050019_core_inst EXU mem_r_data_mux i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+183,"top ysyx_22050019_core_inst EXU mem_r_data_mux i0 out", false,-1, 63,0);
        tracep->declBus(c+24,"top ysyx_22050019_core_inst EXU mem_r_data_mux i0 key", false,-1, 5,0);
        tracep->declQuad(c+26,"top ysyx_22050019_core_inst EXU mem_r_data_mux i0 default_out", false,-1, 63,0);
        tracep->declArray(c+444,"top ysyx_22050019_core_inst EXU mem_r_data_mux i0 lut", false,-1, 419,0);
        tracep->declBus(c+688,"top ysyx_22050019_core_inst EXU mem_r_data_mux i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<6; i++) {
                tracep->declArray(c+458+i*3,"top ysyx_22050019_core_inst EXU mem_r_data_mux i0 pair_list", true,(i+0), 69,0);}}
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+476+i*1,"top ysyx_22050019_core_inst EXU mem_r_data_mux i0 key_list", true,(i+0), 5,0);}}
        {int i; for (i=0; i<6; i++) {
                tracep->declQuad(c+482+i*2,"top ysyx_22050019_core_inst EXU mem_r_data_mux i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+494,"top ysyx_22050019_core_inst EXU mem_r_data_mux i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+496,"top ysyx_22050019_core_inst EXU mem_r_data_mux i0 hit", false,-1);
        tracep->declBus(c+689,"top ysyx_22050019_core_inst EXU mem_r_data_mux i0 i", false,-1, 31,0);
        tracep->declBus(c+693,"top ysyx_22050019_core_inst EXU mem_w_wdth_mux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+693,"top ysyx_22050019_core_inst EXU mem_w_wdth_mux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+699,"top ysyx_22050019_core_inst EXU mem_w_wdth_mux DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+28,"top ysyx_22050019_core_inst EXU mem_w_wdth_mux out", false,-1, 7,0);
        tracep->declBus(c+25,"top ysyx_22050019_core_inst EXU mem_w_wdth_mux key", false,-1, 2,0);
        tracep->declBus(c+700,"top ysyx_22050019_core_inst EXU mem_w_wdth_mux default_out", false,-1, 7,0);
        tracep->declQuad(c+701,"top ysyx_22050019_core_inst EXU mem_w_wdth_mux lut", false,-1, 32,0);
        tracep->declBus(c+693,"top ysyx_22050019_core_inst EXU mem_w_wdth_mux i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+693,"top ysyx_22050019_core_inst EXU mem_w_wdth_mux i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+699,"top ysyx_22050019_core_inst EXU mem_w_wdth_mux i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+687,"top ysyx_22050019_core_inst EXU mem_w_wdth_mux i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+28,"top ysyx_22050019_core_inst EXU mem_w_wdth_mux i0 out", false,-1, 7,0);
        tracep->declBus(c+25,"top ysyx_22050019_core_inst EXU mem_w_wdth_mux i0 key", false,-1, 2,0);
        tracep->declBus(c+700,"top ysyx_22050019_core_inst EXU mem_w_wdth_mux i0 default_out", false,-1, 7,0);
        tracep->declQuad(c+701,"top ysyx_22050019_core_inst EXU mem_w_wdth_mux i0 lut", false,-1, 32,0);
        tracep->declBus(c+703,"top ysyx_22050019_core_inst EXU mem_w_wdth_mux i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+1+i*1,"top ysyx_22050019_core_inst EXU mem_w_wdth_mux i0 pair_list", true,(i+0), 10,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+4+i*1,"top ysyx_22050019_core_inst EXU mem_w_wdth_mux i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+7+i*1,"top ysyx_22050019_core_inst EXU mem_w_wdth_mux i0 data_list", true,(i+0), 7,0);}}
        tracep->declBus(c+497,"top ysyx_22050019_core_inst EXU mem_w_wdth_mux i0 lut_out", false,-1, 7,0);
        tracep->declBit(c+498,"top ysyx_22050019_core_inst EXU mem_w_wdth_mux i0 hit", false,-1);
        tracep->declBus(c+695,"top ysyx_22050019_core_inst EXU mem_w_wdth_mux i0 i", false,-1, 31,0);
        tracep->declBit(c+578,"top ysyx_22050019_core_inst MEM ren", false,-1);
        tracep->declBit(c+575,"top ysyx_22050019_core_inst MEM wen", false,-1);
        tracep->declQuad(c+583,"top ysyx_22050019_core_inst MEM raddr", false,-1, 63,0);
        tracep->declQuad(c+26,"top ysyx_22050019_core_inst MEM rdata", false,-1, 63,0);
        tracep->declQuad(c+581,"top ysyx_22050019_core_inst MEM waddr", false,-1, 63,0);
        tracep->declQuad(c+576,"top ysyx_22050019_core_inst MEM wdata", false,-1, 63,0);
        tracep->declBus(c+28,"top ysyx_22050019_core_inst MEM mask", false,-1, 7,0);
        tracep->declBus(c+704,"top ysyx_22050019_core_inst regs ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+676,"top ysyx_22050019_core_inst regs DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+563,"top ysyx_22050019_core_inst regs clk", false,-1);
        tracep->declQuad(c+568,"top ysyx_22050019_core_inst regs now_pc", false,-1, 63,0);
        tracep->declQuad(c+579,"top ysyx_22050019_core_inst regs wdata", false,-1, 63,0);
        tracep->declBus(c+573,"top ysyx_22050019_core_inst regs waddr", false,-1, 4,0);
        tracep->declBit(c+20,"top ysyx_22050019_core_inst regs wen", false,-1);
        tracep->declBus(c+571,"top ysyx_22050019_core_inst regs raddr1", false,-1, 4,0);
        tracep->declBus(c+572,"top ysyx_22050019_core_inst regs raddr2", false,-1, 4,0);
        tracep->declQuad(c+12,"top ysyx_22050019_core_inst regs rdata1", false,-1, 63,0);
        tracep->declQuad(c+14,"top ysyx_22050019_core_inst regs rdata2", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+499+i*2,"top ysyx_22050019_core_inst regs regs", true,(i+0), 63,0);}}
    }
}

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vtop___024root__traceRegister(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vtop___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vtop___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vtop___024root__traceCleanup, vlSelf);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullSData(oldp+1,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_w_wdth_mux__DOT__i0__DOT__pair_list[0]),11);
        tracep->fullSData(oldp+2,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_w_wdth_mux__DOT__i0__DOT__pair_list[1]),11);
        tracep->fullSData(oldp+3,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_w_wdth_mux__DOT__i0__DOT__pair_list[2]),11);
        tracep->fullCData(oldp+4,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_w_wdth_mux__DOT__i0__DOT__key_list[0]),3);
        tracep->fullCData(oldp+5,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_w_wdth_mux__DOT__i0__DOT__key_list[1]),3);
        tracep->fullCData(oldp+6,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_w_wdth_mux__DOT__i0__DOT__key_list[2]),3);
        tracep->fullCData(oldp+7,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_w_wdth_mux__DOT__i0__DOT__data_list[0]),8);
        tracep->fullCData(oldp+8,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_w_wdth_mux__DOT__i0__DOT__data_list[1]),8);
        tracep->fullCData(oldp+9,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_w_wdth_mux__DOT__i0__DOT__data_list[2]),8);
        tracep->fullQData(oldp+10,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__inst_addr_pc_if),64);
        tracep->fullQData(oldp+12,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__rdata1_id_regs),64);
        tracep->fullQData(oldp+14,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__rdata2_id_regs),64);
        tracep->fullQData(oldp+16,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op1_id_ex),64);
        tracep->fullQData(oldp+18,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op2_id_ex),64);
        tracep->fullBit(oldp+20,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__reg_we_id_ex));
        tracep->fullIData(oldp+21,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__alu_sel),23);
        tracep->fullQData(oldp+22,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__snpc),64);
        tracep->fullCData(oldp+24,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__mem_r_wdth),6);
        tracep->fullCData(oldp+25,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__mem_w_wdth),3);
        tracep->fullQData(oldp+26,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__ram_rdata_mem_ex),64);
        tracep->fullCData(oldp+28,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_w_mask),8);
        tracep->fullQData(oldp+29,((4ULL + vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__inst_addr_pc_if)),64);
        tracep->fullQData(oldp+31,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__PC__DOT__q),64);
        tracep->fullQData(oldp+33,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IFU__DOT__fetchmem_rdata),64);
        tracep->fullIData(oldp+35,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IFU__DOT__i0__DOT__q),32);
        tracep->fullQData(oldp+36,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IFU__DOT__i1__DOT__q),64);
        tracep->fullQData(oldp+38,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__imm_12_I_64),64);
        tracep->fullIData(oldp+40,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__imm_20_j),20);
        tracep->fullQData(oldp+41,((((- (QData)((IData)(
                                                        (1U 
                                                         & (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__imm_20_j 
                                                            >> 0x13U))))) 
                                     << 0x15U) | (QData)((IData)(
                                                                 (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__imm_20_j 
                                                                  << 1U))))),64);
        tracep->fullSData(oldp+43,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__imm_12_b),12);
        tracep->fullQData(oldp+44,((((- (QData)((IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__imm_12_b) 
                                                            >> 0xbU))))) 
                                     << 0xdU) | (QData)((IData)(
                                                                ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__imm_12_b) 
                                                                 << 1U))))),64);
        tracep->fullSData(oldp+46,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__imm_12_s),12);
        tracep->fullQData(oldp+47,((((- (QData)((IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__imm_12_s) 
                                                            >> 0xbU))))) 
                                     << 0xcU) | (QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__imm_12_s)))),64);
        tracep->fullCData(oldp+49,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__imm_sel),6);
        tracep->fullQData(oldp+50,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__imm64),64);
        tracep->fullCData(oldp+52,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__op1_en),2);
        tracep->fullCData(oldp+53,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__op2_en),3);
        tracep->fullCData(oldp+54,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__branch),2);
        tracep->fullQData(oldp+55,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__b_ab_s),64);
        tracep->fullBit(oldp+57,((0ULL == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__b_ab_s)));
        tracep->fullBit(oldp+58,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__b_ab_1_s));
        tracep->fullBit(oldp+59,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__b_ab_1_u));
        tracep->fullWData(oldp+60,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_imm__lut),420);
        tracep->fullWData(oldp+74,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__pair_list[0]),70);
        tracep->fullWData(oldp+77,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__pair_list[1]),70);
        tracep->fullWData(oldp+80,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__pair_list[2]),70);
        tracep->fullWData(oldp+83,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__pair_list[3]),70);
        tracep->fullWData(oldp+86,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__pair_list[4]),70);
        tracep->fullWData(oldp+89,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__pair_list[5]),70);
        tracep->fullCData(oldp+92,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__key_list[0]),6);
        tracep->fullCData(oldp+93,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__key_list[1]),6);
        tracep->fullCData(oldp+94,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__key_list[2]),6);
        tracep->fullCData(oldp+95,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__key_list[3]),6);
        tracep->fullCData(oldp+96,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__key_list[4]),6);
        tracep->fullCData(oldp+97,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__key_list[5]),6);
        tracep->fullQData(oldp+98,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+100,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+102,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+104,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+106,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+108,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+110,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+112,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+113,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_op1__lut),132);
        tracep->fullWData(oldp+118,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op1__DOT__i0__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+121,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op1__DOT__i0__DOT__pair_list[1]),66);
        tracep->fullCData(oldp+124,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op1__DOT__i0__DOT__key_list[0]),2);
        tracep->fullCData(oldp+125,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op1__DOT__i0__DOT__key_list[1]),2);
        tracep->fullQData(oldp+126,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op1__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+128,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op1__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+130,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op1__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+132,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op1__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+133,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_op2__lut),201);
        tracep->fullWData(oldp+140,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op2__DOT__i0__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+143,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op2__DOT__i0__DOT__pair_list[1]),67);
        tracep->fullWData(oldp+146,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op2__DOT__i0__DOT__pair_list[2]),67);
        tracep->fullCData(oldp+149,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op2__DOT__i0__DOT__key_list[0]),3);
        tracep->fullCData(oldp+150,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op2__DOT__i0__DOT__key_list[1]),3);
        tracep->fullCData(oldp+151,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op2__DOT__i0__DOT__key_list[2]),3);
        tracep->fullQData(oldp+152,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op2__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+154,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op2__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+156,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op2__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+158,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op2__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+160,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op2__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+161,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_branch__lut),132);
        tracep->fullWData(oldp+166,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_branch__DOT__i0__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+169,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_branch__DOT__i0__DOT__pair_list[1]),66);
        tracep->fullCData(oldp+172,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_branch__DOT__i0__DOT__key_list[0]),2);
        tracep->fullCData(oldp+173,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_branch__DOT__i0__DOT__key_list[1]),2);
        tracep->fullQData(oldp+174,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_branch__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+176,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_branch__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+178,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_branch__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+180,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_branch__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+181,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__result),64);
        tracep->fullQData(oldp+183,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data),64);
        tracep->fullIData(oldp+185,((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op1_id_ex)),32);
        tracep->fullIData(oldp+186,((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op2_id_ex)),32);
        tracep->fullBit(oldp+187,((IData)((0U != (0x600aU 
                                                  & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__alu_sel)))));
        tracep->fullBit(oldp+188,((1U & (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__alu_sel 
                                         >> 3U))));
        tracep->fullBit(oldp+189,((1U & (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__alu_sel 
                                         >> 1U))));
        tracep->fullBit(oldp+190,((1U & (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__alu_sel 
                                         >> 0xdU))));
        tracep->fullBit(oldp+191,((1U & (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__alu_sel 
                                         >> 0xeU))));
        tracep->fullQData(oldp+192,(((IData)((0U != 
                                              (0x600aU 
                                               & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__alu_sel)))
                                      ? (1ULL + (~ vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op2_id_ex))
                                      : vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op2_id_ex)),64);
        tracep->fullQData(oldp+194,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__add),64);
        tracep->fullQData(oldp+196,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__SEXT_add_32),64);
        tracep->fullQData(oldp+198,(((1U & (((IData)(
                                                     (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op1_id_ex 
                                                      >> 0x3fU)) 
                                             & (~ (IData)(
                                                          (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op2_id_ex 
                                                           >> 0x3fU)))) 
                                            | (((1U 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op1_id_ex 
                                                            >> 0x3fU))) 
                                                == 
                                                (1U 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op2_id_ex 
                                                            >> 0x3fU)))) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__add 
                                                          >> 0x3fU)))))
                                      ? 1ULL : 0ULL)),64);
        tracep->fullQData(oldp+200,(((1U & (((~ (IData)(
                                                        (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op1_id_ex 
                                                         >> 0x3fU))) 
                                             & (IData)(
                                                       (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op2_id_ex 
                                                        >> 0x3fU))) 
                                            | (((1U 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op1_id_ex 
                                                            >> 0x3fU))) 
                                                == 
                                                (1U 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op2_id_ex 
                                                            >> 0x3fU)))) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__add 
                                                          >> 0x3fU)))))
                                      ? 1ULL : 0ULL)),64);
        tracep->fullQData(oldp+202,((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op1_id_ex 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op2_id_ex)))),64);
        tracep->fullIData(oldp+204,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__srli_w),32);
        tracep->fullQData(oldp+205,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__srli_w 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__srli_w)))),64);
        tracep->fullQData(oldp+207,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__sri_64),64);
        tracep->fullQData(oldp+209,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__sri_64 
                                                                             >> 0x1fU))))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__sri_64)))),64);
        tracep->fullIData(oldp+211,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__sra_w),32);
        tracep->fullQData(oldp+212,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__sra_w 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__sra_w)))),64);
        tracep->fullQData(oldp+214,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__sll_64_w),64);
        tracep->fullQData(oldp+216,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__sll_64_w 
                                                                             >> 0x1fU))))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__sll_64_w)))),64);
        tracep->fullQData(oldp+218,((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op1_id_ex 
                                     << (0x3fU & (IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op2_id_ex)))),64);
        tracep->fullQData(oldp+220,((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op1_id_ex 
                                     & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op2_id_ex)),64);
        tracep->fullQData(oldp+222,((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op1_id_ex 
                                     | vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op2_id_ex)),64);
        tracep->fullQData(oldp+224,((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op1_id_ex 
                                     ^ vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op2_id_ex)),64);
        tracep->fullQData(oldp+226,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mul),64);
        tracep->fullQData(oldp+228,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mul 
                                                                             >> 0x1fU))))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mul)))),64);
        tracep->fullIData(oldp+230,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__div_32),32);
        tracep->fullQData(oldp+231,(VL_DIV_QQQ(64, vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op1_id_ex, vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op2_id_ex)),64);
        tracep->fullQData(oldp+233,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__div_32 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__div_32)))),64);
        tracep->fullIData(oldp+235,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__rem_32),32);
        tracep->fullQData(oldp+236,(VL_MODDIV_QQQ(64, vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op1_id_ex, vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op2_id_ex)),64);
        tracep->fullQData(oldp+238,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__rem_32 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__rem_32)))),64);
        tracep->fullWData(oldp+240,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut),2001);
        tracep->fullWData(oldp+303,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[0]),87);
        tracep->fullWData(oldp+306,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[1]),87);
        tracep->fullWData(oldp+309,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[2]),87);
        tracep->fullWData(oldp+312,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[3]),87);
        tracep->fullWData(oldp+315,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[4]),87);
        tracep->fullWData(oldp+318,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[5]),87);
        tracep->fullWData(oldp+321,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[6]),87);
        tracep->fullWData(oldp+324,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[7]),87);
        tracep->fullWData(oldp+327,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[8]),87);
        tracep->fullWData(oldp+330,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[9]),87);
        tracep->fullWData(oldp+333,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[10]),87);
        tracep->fullWData(oldp+336,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[11]),87);
        tracep->fullWData(oldp+339,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[12]),87);
        tracep->fullWData(oldp+342,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[13]),87);
        tracep->fullWData(oldp+345,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[14]),87);
        tracep->fullWData(oldp+348,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[15]),87);
        tracep->fullWData(oldp+351,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[16]),87);
        tracep->fullWData(oldp+354,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[17]),87);
        tracep->fullWData(oldp+357,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[18]),87);
        tracep->fullWData(oldp+360,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[19]),87);
        tracep->fullWData(oldp+363,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[20]),87);
        tracep->fullWData(oldp+366,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[21]),87);
        tracep->fullWData(oldp+369,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[22]),87);
        tracep->fullIData(oldp+372,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list[0]),23);
        tracep->fullIData(oldp+373,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list[1]),23);
        tracep->fullIData(oldp+374,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list[2]),23);
        tracep->fullIData(oldp+375,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list[3]),23);
        tracep->fullIData(oldp+376,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list[4]),23);
        tracep->fullIData(oldp+377,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list[5]),23);
        tracep->fullIData(oldp+378,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list[6]),23);
        tracep->fullIData(oldp+379,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list[7]),23);
        tracep->fullIData(oldp+380,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list[8]),23);
        tracep->fullIData(oldp+381,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list[9]),23);
        tracep->fullIData(oldp+382,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list[10]),23);
        tracep->fullIData(oldp+383,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list[11]),23);
        tracep->fullIData(oldp+384,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list[12]),23);
        tracep->fullIData(oldp+385,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list[13]),23);
        tracep->fullIData(oldp+386,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list[14]),23);
        tracep->fullIData(oldp+387,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list[15]),23);
        tracep->fullIData(oldp+388,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list[16]),23);
        tracep->fullIData(oldp+389,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list[17]),23);
        tracep->fullIData(oldp+390,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list[18]),23);
        tracep->fullIData(oldp+391,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list[19]),23);
        tracep->fullIData(oldp+392,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list[20]),23);
        tracep->fullIData(oldp+393,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list[21]),23);
        tracep->fullIData(oldp+394,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list[22]),23);
        tracep->fullQData(oldp+395,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+397,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+399,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+401,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+403,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+405,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+407,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+409,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list[7]),64);
        tracep->fullQData(oldp+411,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list[8]),64);
        tracep->fullQData(oldp+413,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list[9]),64);
        tracep->fullQData(oldp+415,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list[10]),64);
        tracep->fullQData(oldp+417,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list[11]),64);
        tracep->fullQData(oldp+419,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list[12]),64);
        tracep->fullQData(oldp+421,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list[13]),64);
        tracep->fullQData(oldp+423,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list[14]),64);
        tracep->fullQData(oldp+425,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list[15]),64);
        tracep->fullQData(oldp+427,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list[16]),64);
        tracep->fullQData(oldp+429,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list[17]),64);
        tracep->fullQData(oldp+431,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list[18]),64);
        tracep->fullQData(oldp+433,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list[19]),64);
        tracep->fullQData(oldp+435,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list[20]),64);
        tracep->fullQData(oldp+437,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list[21]),64);
        tracep->fullQData(oldp+439,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list[22]),64);
        tracep->fullQData(oldp+441,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+443,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+444,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT____Vcellinp__mem_r_data_mux__lut),420);
        tracep->fullWData(oldp+458,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__pair_list[0]),70);
        tracep->fullWData(oldp+461,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__pair_list[1]),70);
        tracep->fullWData(oldp+464,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__pair_list[2]),70);
        tracep->fullWData(oldp+467,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__pair_list[3]),70);
        tracep->fullWData(oldp+470,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__pair_list[4]),70);
        tracep->fullWData(oldp+473,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__pair_list[5]),70);
        tracep->fullCData(oldp+476,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__key_list[0]),6);
        tracep->fullCData(oldp+477,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__key_list[1]),6);
        tracep->fullCData(oldp+478,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__key_list[2]),6);
        tracep->fullCData(oldp+479,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__key_list[3]),6);
        tracep->fullCData(oldp+480,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__key_list[4]),6);
        tracep->fullCData(oldp+481,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__key_list[5]),6);
        tracep->fullQData(oldp+482,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+484,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+486,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+488,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+490,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+492,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+494,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+496,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+497,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_w_wdth_mux__DOT__i0__DOT__lut_out),8);
        tracep->fullBit(oldp+498,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_w_wdth_mux__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+499,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs[0]),64);
        tracep->fullQData(oldp+501,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs[1]),64);
        tracep->fullQData(oldp+503,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs[2]),64);
        tracep->fullQData(oldp+505,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs[3]),64);
        tracep->fullQData(oldp+507,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs[4]),64);
        tracep->fullQData(oldp+509,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs[5]),64);
        tracep->fullQData(oldp+511,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs[6]),64);
        tracep->fullQData(oldp+513,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs[7]),64);
        tracep->fullQData(oldp+515,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs[8]),64);
        tracep->fullQData(oldp+517,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs[9]),64);
        tracep->fullQData(oldp+519,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs[10]),64);
        tracep->fullQData(oldp+521,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs[11]),64);
        tracep->fullQData(oldp+523,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs[12]),64);
        tracep->fullQData(oldp+525,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs[13]),64);
        tracep->fullQData(oldp+527,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs[14]),64);
        tracep->fullQData(oldp+529,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs[15]),64);
        tracep->fullQData(oldp+531,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs[16]),64);
        tracep->fullQData(oldp+533,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs[17]),64);
        tracep->fullQData(oldp+535,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs[18]),64);
        tracep->fullQData(oldp+537,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs[19]),64);
        tracep->fullQData(oldp+539,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs[20]),64);
        tracep->fullQData(oldp+541,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs[21]),64);
        tracep->fullQData(oldp+543,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs[22]),64);
        tracep->fullQData(oldp+545,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs[23]),64);
        tracep->fullQData(oldp+547,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs[24]),64);
        tracep->fullQData(oldp+549,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs[25]),64);
        tracep->fullQData(oldp+551,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs[26]),64);
        tracep->fullQData(oldp+553,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs[27]),64);
        tracep->fullQData(oldp+555,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs[28]),64);
        tracep->fullQData(oldp+557,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs[29]),64);
        tracep->fullQData(oldp+559,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs[30]),64);
        tracep->fullQData(oldp+561,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs[31]),64);
        tracep->fullBit(oldp+563,(vlSelf->clk));
        tracep->fullBit(oldp+564,(vlSelf->rst_n));
        tracep->fullIData(oldp+565,(vlSelf->inst),32);
        tracep->fullQData(oldp+566,(vlSelf->inst_addr_o),64);
        tracep->fullQData(oldp+568,(vlSelf->now_addr),64);
        tracep->fullIData(oldp+570,(vlSelf->now_inst),32);
        tracep->fullCData(oldp+571,((((((((((0x13U 
                                             == (0x7fU 
                                                 & vlSelf->now_inst)) 
                                            | (0x67U 
                                               == (0x7fU 
                                                   & vlSelf->now_inst))) 
                                           | (0x23U 
                                              == (0x7fU 
                                                  & vlSelf->now_inst))) 
                                          | (0x33U 
                                             == (0x7fU 
                                                 & vlSelf->now_inst))) 
                                         | (3U == (0x7fU 
                                                   & vlSelf->now_inst))) 
                                        | (0x1bU == 
                                           (0x7fU & vlSelf->now_inst))) 
                                       | (0x3bU == 
                                          (0x7fU & vlSelf->now_inst))) 
                                      | (0x63U == (0x7fU 
                                                   & vlSelf->now_inst)))
                                      ? (0x1fU & (vlSelf->now_inst 
                                                  >> 0xfU))
                                      : 0U)),5);
        tracep->fullCData(oldp+572,((((((0x63U == (0x7fU 
                                                   & vlSelf->now_inst)) 
                                        | (0x23U == 
                                           (0x7fU & vlSelf->now_inst))) 
                                       | (0x33U == 
                                          (0x7fU & vlSelf->now_inst))) 
                                      | (0x3bU == (0x7fU 
                                                   & vlSelf->now_inst)))
                                      ? (0x1fU & (vlSelf->now_inst 
                                                  >> 0x14U))
                                      : 0U)),5);
        tracep->fullCData(oldp+573,(((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__reg_we_id_ex)
                                      ? (0x1fU & (vlSelf->now_inst 
                                                  >> 7U))
                                      : 0U)),5);
        tracep->fullBit(oldp+574,(((((((((0x6fU == 
                                          (0x7fU & vlSelf->now_inst)) 
                                         | (0x67U == 
                                            (0x7fU 
                                             & vlSelf->now_inst))) 
                                        | ((IData)(
                                                   (0x63U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->now_inst))) 
                                           & (0ULL 
                                              == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__b_ab_s))) 
                                       | ((IData)((0x1063U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->now_inst))) 
                                          & (0ULL != vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__b_ab_s))) 
                                      | ((IData)((0x5063U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->now_inst))) 
                                         & (~ (IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__b_ab_1_s)))) 
                                     | ((IData)((0x4063U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->now_inst))) 
                                        & (IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__b_ab_1_s))) 
                                    | ((IData)((0x6063U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->now_inst))) 
                                       & (IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__b_ab_1_u))) 
                                   | ((IData)((0x7063U 
                                               == (0x707fU 
                                                   & vlSelf->now_inst))) 
                                      & (~ (IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__b_ab_1_u))))));
        tracep->fullBit(oldp+575,((0x23U == (0x7fU 
                                             & vlSelf->now_inst))));
        tracep->fullQData(oldp+576,(((0x23U == (0x7fU 
                                                & vlSelf->now_inst))
                                      ? vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__rdata2_id_regs
                                      : 0ULL)),64);
        tracep->fullBit(oldp+578,((3U == (0x7fU & vlSelf->now_inst))));
        tracep->fullQData(oldp+579,(((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__reg_we_id_ex)
                                      ? ((3U == (0x7fU 
                                                 & vlSelf->now_inst))
                                          ? vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data
                                          : vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__result)
                                      : 0ULL)),64);
        tracep->fullQData(oldp+581,(((0x23U == (0x7fU 
                                                & vlSelf->now_inst))
                                      ? vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__result
                                      : 0ULL)),64);
        tracep->fullQData(oldp+583,(((3U == (0x7fU 
                                             & vlSelf->now_inst))
                                      ? vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__result
                                      : 0ULL)),64);
        tracep->fullCData(oldp+585,((0x7fU & vlSelf->now_inst)),7);
        tracep->fullCData(oldp+586,((0x1fU & (vlSelf->now_inst 
                                              >> 7U))),5);
        tracep->fullCData(oldp+587,((7U & (vlSelf->now_inst 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+588,((0x1fU & (vlSelf->now_inst 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+589,((0x1fU & (vlSelf->now_inst 
                                              >> 0x14U))),5);
        tracep->fullCData(oldp+590,((vlSelf->now_inst 
                                     >> 0x19U)),7);
        tracep->fullSData(oldp+591,((vlSelf->now_inst 
                                     >> 0x14U)),12);
        tracep->fullIData(oldp+592,((vlSelf->now_inst 
                                     >> 0xcU)),20);
        tracep->fullQData(oldp+593,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->now_inst 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  (0xfffff000U 
                                                                   & vlSelf->now_inst))))),64);
        tracep->fullBit(oldp+595,((0x13U == (0x7fU 
                                             & vlSelf->now_inst))));
        tracep->fullBit(oldp+596,((0x63U == (0x7fU 
                                             & vlSelf->now_inst))));
        tracep->fullBit(oldp+597,((0x33U == (0x7fU 
                                             & vlSelf->now_inst))));
        tracep->fullBit(oldp+598,((0x1bU == (0x7fU 
                                             & vlSelf->now_inst))));
        tracep->fullBit(oldp+599,((0x17U == (0x7fU 
                                             & vlSelf->now_inst))));
        tracep->fullBit(oldp+600,((0x37U == (0x7fU 
                                             & vlSelf->now_inst))));
        tracep->fullBit(oldp+601,((0x6fU == (0x7fU 
                                             & vlSelf->now_inst))));
        tracep->fullBit(oldp+602,((0x67U == (0x7fU 
                                             & vlSelf->now_inst))));
        tracep->fullBit(oldp+603,((0x3bU == (0x7fU 
                                             & vlSelf->now_inst))));
        tracep->fullBit(oldp+604,((0U == (7U & (vlSelf->now_inst 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+605,((1U == (7U & (vlSelf->now_inst 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+606,((2U == (7U & (vlSelf->now_inst 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+607,((3U == (7U & (vlSelf->now_inst 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+608,((4U == (7U & (vlSelf->now_inst 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+609,((5U == (7U & (vlSelf->now_inst 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+610,((6U == (7U & (vlSelf->now_inst 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+611,((7U == (7U & (vlSelf->now_inst 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+612,((0U == (vlSelf->now_inst 
                                          >> 0x19U))));
        tracep->fullBit(oldp+613,((1U == (vlSelf->now_inst 
                                          >> 0x19U))));
        tracep->fullBit(oldp+614,((0x20U == (vlSelf->now_inst 
                                             >> 0x19U))));
        tracep->fullBit(oldp+615,((IData)((0x13U == 
                                           (0x707fU 
                                            & vlSelf->now_inst)))));
        tracep->fullBit(oldp+616,((IData)((0x63U == 
                                           (0x707fU 
                                            & vlSelf->now_inst)))));
        tracep->fullBit(oldp+617,((IData)((0x3023U 
                                           == (0x707fU 
                                               & vlSelf->now_inst)))));
        tracep->fullBit(oldp+618,(((IData)((0x33U == 
                                            (0x707fU 
                                             & vlSelf->now_inst))) 
                                   & (0x20U == (vlSelf->now_inst 
                                                >> 0x19U)))));
        tracep->fullBit(oldp+619,(((IData)((0x33U == 
                                            (0x707fU 
                                             & vlSelf->now_inst))) 
                                   & (0U == (vlSelf->now_inst 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+620,((IData)((0x1bU == 
                                           (0x707fU 
                                            & vlSelf->now_inst)))));
        tracep->fullBit(oldp+621,((IData)((0x1063U 
                                           == (0x707fU 
                                               & vlSelf->now_inst)))));
        tracep->fullBit(oldp+622,((IData)((0x3003U 
                                           == (0x707fU 
                                               & vlSelf->now_inst)))));
        tracep->fullBit(oldp+623,((IData)((0x3013U 
                                           == (0x707fU 
                                               & vlSelf->now_inst)))));
        tracep->fullBit(oldp+624,((IData)((0x2003U 
                                           == (0x707fU 
                                               & vlSelf->now_inst)))));
        tracep->fullBit(oldp+625,((((IData)((0x3bU 
                                             == (0x707fU 
                                                 & vlSelf->now_inst))) 
                                    & (1U != (vlSelf->now_inst 
                                              >> 0x19U))) 
                                   & (0x20U != (vlSelf->now_inst 
                                                >> 0x19U)))));
        tracep->fullBit(oldp+626,(((IData)((0x5013U 
                                            == (0x707fU 
                                                & vlSelf->now_inst))) 
                                   & (0x20U == (vlSelf->now_inst 
                                                >> 0x19U)))));
        tracep->fullBit(oldp+627,((IData)((0x4003U 
                                           == (0x707fU 
                                               & vlSelf->now_inst)))));
        tracep->fullBit(oldp+628,((IData)((0x1023U 
                                           == (0x707fU 
                                               & vlSelf->now_inst)))));
        tracep->fullBit(oldp+629,((IData)((0x7013U 
                                           == (0x707fU 
                                               & vlSelf->now_inst)))));
        tracep->fullBit(oldp+630,((IData)((0x103bU 
                                           == (0x707fU 
                                               & vlSelf->now_inst)))));
        tracep->fullBit(oldp+631,(((IData)((0x7033U 
                                            == (0x707fU 
                                                & vlSelf->now_inst))) 
                                   & (1U != (vlSelf->now_inst 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+632,((IData)((0x3033U 
                                           == (0x707fU 
                                               & vlSelf->now_inst)))));
        tracep->fullBit(oldp+633,(((IData)((0x4033U 
                                            == (0x707fU 
                                                & vlSelf->now_inst))) 
                                   & (0U == (vlSelf->now_inst 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+634,((IData)((0x4013U 
                                           == (0x707fU 
                                               & vlSelf->now_inst)))));
        tracep->fullBit(oldp+635,((IData)((0x6033U 
                                           == (0x707fU 
                                               & vlSelf->now_inst)))));
        tracep->fullBit(oldp+636,((IData)((0x23U == 
                                           (0x707fU 
                                            & vlSelf->now_inst)))));
        tracep->fullBit(oldp+637,(((IData)((0x1013U 
                                            == (0x707fU 
                                                & vlSelf->now_inst))) 
                                   & (0U == (vlSelf->now_inst 
                                             >> 0x1aU)))));
        tracep->fullBit(oldp+638,((IData)((0x5063U 
                                           == (0x707fU 
                                               & vlSelf->now_inst)))));
        tracep->fullBit(oldp+639,((IData)((0x2023U 
                                           == (0x707fU 
                                               & vlSelf->now_inst)))));
        tracep->fullBit(oldp+640,(((IData)((0x3bU == 
                                            (0x707fU 
                                             & vlSelf->now_inst))) 
                                   & (1U == (vlSelf->now_inst 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+641,(((IData)((0x403bU 
                                            == (0x707fU 
                                                & vlSelf->now_inst))) 
                                   & (1U == (vlSelf->now_inst 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+642,(((IData)((0x603bU 
                                            == (0x707fU 
                                                & vlSelf->now_inst))) 
                                   & (1U == (vlSelf->now_inst 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+643,(((IData)((0x2033U 
                                            == (0x707fU 
                                                & vlSelf->now_inst))) 
                                   & (0U == (vlSelf->now_inst 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+644,((IData)((0x4063U 
                                           == (0x707fU 
                                               & vlSelf->now_inst)))));
        tracep->fullBit(oldp+645,((IData)((0x1003U 
                                           == (0x707fU 
                                               & vlSelf->now_inst)))));
        tracep->fullBit(oldp+646,((IData)((0x5003U 
                                           == (0x707fU 
                                               & vlSelf->now_inst)))));
        tracep->fullBit(oldp+647,(((IData)((0x3bU == 
                                            (0x707fU 
                                             & vlSelf->now_inst))) 
                                   & (0x20U == (vlSelf->now_inst 
                                                >> 0x19U)))));
        tracep->fullBit(oldp+648,(((IData)((0x5013U 
                                            == (0x707fU 
                                                & vlSelf->now_inst))) 
                                   & (0U == (vlSelf->now_inst 
                                             >> 0x1aU)))));
        tracep->fullBit(oldp+649,(((IData)((0x101bU 
                                            == (0x707fU 
                                                & vlSelf->now_inst))) 
                                   & (0U == (vlSelf->now_inst 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+650,(((IData)((0x501bU 
                                            == (0x707fU 
                                                & vlSelf->now_inst))) 
                                   & (0x20U == (vlSelf->now_inst 
                                                >> 0x19U)))));
        tracep->fullBit(oldp+651,(((IData)((0x33U == 
                                            (0x707fU 
                                             & vlSelf->now_inst))) 
                                   & (1U == (vlSelf->now_inst 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+652,(((IData)((0x501bU 
                                            == (0x707fU 
                                                & vlSelf->now_inst))) 
                                   & (0U == (vlSelf->now_inst 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+653,(((IData)((0x503bU 
                                            == (0x707fU 
                                                & vlSelf->now_inst))) 
                                   & (0x20U == (vlSelf->now_inst 
                                                >> 0x19U)))));
        tracep->fullBit(oldp+654,(((IData)((0x503bU 
                                            == (0x707fU 
                                                & vlSelf->now_inst))) 
                                   & (0U == (vlSelf->now_inst 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+655,((IData)((0x6063U 
                                           == (0x707fU 
                                               & vlSelf->now_inst)))));
        tracep->fullBit(oldp+656,(((IData)((0x5033U 
                                            == (0x707fU 
                                                & vlSelf->now_inst))) 
                                   & (1U == (vlSelf->now_inst 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+657,((IData)((0x2013U 
                                           == (0x707fU 
                                               & vlSelf->now_inst)))));
        tracep->fullBit(oldp+658,(((IData)((0x503bU 
                                            == (0x707fU 
                                                & vlSelf->now_inst))) 
                                   & (1U == (vlSelf->now_inst 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+659,((IData)((0x7063U 
                                           == (0x707fU 
                                               & vlSelf->now_inst)))));
        tracep->fullBit(oldp+660,((IData)((3U == (0x707fU 
                                                  & vlSelf->now_inst)))));
        tracep->fullBit(oldp+661,((IData)((0x6013U 
                                           == (0x707fU 
                                               & vlSelf->now_inst)))));
        tracep->fullBit(oldp+662,(((IData)((0x703bU 
                                            == (0x707fU 
                                                & vlSelf->now_inst))) 
                                   & (1U == (vlSelf->now_inst 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+663,(((IData)((0x1033U 
                                            == (0x707fU 
                                                & vlSelf->now_inst))) 
                                   & (0U == (vlSelf->now_inst 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+664,(((IData)((0x7033U 
                                            == (0x707fU 
                                                & vlSelf->now_inst))) 
                                   & (1U == (vlSelf->now_inst 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+665,(((((((((IData)((0x13U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->now_inst))) 
                                         | (0x17U == 
                                            (0x7fU 
                                             & vlSelf->now_inst))) 
                                        | (0x37U == 
                                           (0x7fU & vlSelf->now_inst))) 
                                       | (0x6fU == 
                                          (0x7fU & vlSelf->now_inst))) 
                                      | (0x67U == (0x7fU 
                                                   & vlSelf->now_inst))) 
                                     | (0x23U == (0x7fU 
                                                  & vlSelf->now_inst))) 
                                    | ((IData)((0x33U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->now_inst))) 
                                       & (0U == (vlSelf->now_inst 
                                                 >> 0x19U)))) 
                                   | (3U == (0x7fU 
                                             & vlSelf->now_inst)))));
        tracep->fullBit(oldp+666,(((IData)((0x1bU == 
                                            (0x707fU 
                                             & vlSelf->now_inst))) 
                                   | (((IData)((0x3bU 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->now_inst))) 
                                       & (1U != (vlSelf->now_inst 
                                                 >> 0x19U))) 
                                      & (0x20U != (vlSelf->now_inst 
                                                   >> 0x19U))))));
        tracep->fullBit(oldp+667,(((IData)((0x3013U 
                                            == (0x707fU 
                                                & vlSelf->now_inst))) 
                                   | (IData)((0x3033U 
                                              == (0x707fU 
                                                  & vlSelf->now_inst))))));
        tracep->fullBit(oldp+668,(((IData)((0x7013U 
                                            == (0x707fU 
                                                & vlSelf->now_inst))) 
                                   | ((IData)((0x7033U 
                                               == (0x707fU 
                                                   & vlSelf->now_inst))) 
                                      & (1U != (vlSelf->now_inst 
                                                >> 0x19U))))));
        tracep->fullBit(oldp+669,(((IData)((0x103bU 
                                            == (0x707fU 
                                                & vlSelf->now_inst))) 
                                   | ((IData)((0x101bU 
                                               == (0x707fU 
                                                   & vlSelf->now_inst))) 
                                      & (0U == (vlSelf->now_inst 
                                                >> 0x19U))))));
        tracep->fullBit(oldp+670,(((IData)((0x4013U 
                                            == (0x707fU 
                                                & vlSelf->now_inst))) 
                                   | ((IData)((0x4033U 
                                               == (0x707fU 
                                                   & vlSelf->now_inst))) 
                                      & (0U == (vlSelf->now_inst 
                                                >> 0x19U))))));
        tracep->fullBit(oldp+671,(((IData)((0x6033U 
                                            == (0x707fU 
                                                & vlSelf->now_inst))) 
                                   | (IData)((0x6013U 
                                              == (0x707fU 
                                                  & vlSelf->now_inst))))));
        tracep->fullBit(oldp+672,((((IData)((0x403bU 
                                             == (0x707fU 
                                                 & vlSelf->now_inst))) 
                                    & (1U == (vlSelf->now_inst 
                                              >> 0x19U))) 
                                   | ((IData)((0x503bU 
                                               == (0x707fU 
                                                   & vlSelf->now_inst))) 
                                      & (1U == (vlSelf->now_inst 
                                                >> 0x19U))))));
        tracep->fullBit(oldp+673,((((IData)((0x603bU 
                                             == (0x707fU 
                                                 & vlSelf->now_inst))) 
                                    & (1U == (vlSelf->now_inst 
                                              >> 0x19U))) 
                                   | ((IData)((0x703bU 
                                               == (0x707fU 
                                                   & vlSelf->now_inst))) 
                                      & (1U == (vlSelf->now_inst 
                                                >> 0x19U))))));
        tracep->fullBit(oldp+674,((((IData)((0x2033U 
                                             == (0x707fU 
                                                 & vlSelf->now_inst))) 
                                    & (0U == (vlSelf->now_inst 
                                              >> 0x19U))) 
                                   | (IData)((0x2013U 
                                              == (0x707fU 
                                                  & vlSelf->now_inst))))));
        tracep->fullBit(oldp+675,((((IData)((0x501bU 
                                             == (0x707fU 
                                                 & vlSelf->now_inst))) 
                                    & (0U == (vlSelf->now_inst 
                                              >> 0x19U))) 
                                   | ((IData)((0x503bU 
                                               == (0x707fU 
                                                   & vlSelf->now_inst))) 
                                      & (0U == (vlSelf->now_inst 
                                                >> 0x19U))))));
        tracep->fullIData(oldp+676,(0x40U),32);
        tracep->fullQData(oldp+677,(0x80000000ULL),64);
        tracep->fullBit(oldp+679,(1U));
        tracep->fullBit(oldp+680,(0U));
        tracep->fullQData(oldp+681,(0ULL),64);
        tracep->fullCData(oldp+683,(0U),8);
        tracep->fullIData(oldp+684,(0x20U),32);
        tracep->fullIData(oldp+685,(0U),32);
        tracep->fullIData(oldp+686,(6U),32);
        tracep->fullIData(oldp+687,(1U),32);
        tracep->fullIData(oldp+688,(0x46U),32);
        tracep->fullIData(oldp+689,(6U),32);
        tracep->fullIData(oldp+690,(2U),32);
        tracep->fullIData(oldp+691,(0x42U),32);
        tracep->fullIData(oldp+692,(2U),32);
        tracep->fullIData(oldp+693,(3U),32);
        tracep->fullIData(oldp+694,(0x43U),32);
        tracep->fullIData(oldp+695,(3U),32);
        tracep->fullIData(oldp+696,(0x17U),32);
        tracep->fullIData(oldp+697,(0x57U),32);
        tracep->fullIData(oldp+698,(0x17U),32);
        tracep->fullIData(oldp+699,(8U),32);
        tracep->fullCData(oldp+700,(0xffU),8);
        tracep->fullQData(oldp+701,(0x10050190fULL),33);
        tracep->fullIData(oldp+703,(0xbU),32);
        tracep->fullIData(oldp+704,(5U),32);
    }
}
