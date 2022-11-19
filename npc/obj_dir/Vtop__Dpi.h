// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at vsrc/Ebreak.v:1:30
    extern void ebreak();
    // DPI import at vsrc/ysyx_22050019_regs.v:1:30
    extern void get_regs(const svOpenArrayHandle a);
    // DPI import at vsrc/ysyx_22050019_mem.v:1:30
    extern void pmem_read(long long raddr, long long* rdata);
    // DPI import at vsrc/ysyx_22050019_mem.v:3:30
    extern void pmem_write(long long waddr, long long wdata, char mask);

#ifdef __cplusplus
}
#endif
