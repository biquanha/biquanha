#include <isa.h>
#include <cpu/difftest.h>
#include "../local-include/reg.h"

bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
  if(cpu.pc != ref_r -> pc) return false;
  for (int i =0; i< 32; ++i){
    if(gpr(i) != ref_r -> gpr[i]) return false;
  }
  return true;
}

void isa_difftest_attach() {
}
