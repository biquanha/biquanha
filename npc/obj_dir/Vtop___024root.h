// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtop__Syms;
class Vtop_VerilatedVcd;
class Vtop___024unit;


//----------

VL_MODULE(Vtop___024root) {
  public:
    // CELLS
    Vtop___024unit* __PVT____024unit;

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_OUT(inst,31,0);
    VL_OUT(now_inst,31,0);
    VL_OUT64(inst_addr_o,63,0);
    VL_OUT64(now_addr,63,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ top__DOT__ysyx_22050019_core_inst__DOT__reg_we_id_ex;
        CData/*5:0*/ top__DOT__ysyx_22050019_core_inst__DOT__mem_r_wdth;
        CData/*2:0*/ top__DOT__ysyx_22050019_core_inst__DOT__mem_w_wdth;
        CData/*5:0*/ top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__imm_sel;
        CData/*1:0*/ top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__op1_en;
        CData/*2:0*/ top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__op2_en;
        CData/*1:0*/ top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__branch;
        CData/*0:0*/ top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__b_ab_1_s;
        CData/*0:0*/ top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__b_ab_1_u;
        CData/*0:0*/ top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op1__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op2__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_branch__DOT__i0__DOT__hit;
        CData/*7:0*/ top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_w_mask;
        CData/*0:0*/ top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__hit;
        CData/*7:0*/ top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_w_wdth_mux__DOT__i0__DOT__lut_out;
        CData/*0:0*/ top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_w_wdth_mux__DOT__i0__DOT__hit;
        SData/*11:0*/ top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__imm_12_b;
        SData/*11:0*/ top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__imm_12_s;
        IData/*22:0*/ top__DOT__ysyx_22050019_core_inst__DOT__alu_sel;
        IData/*31:0*/ top__DOT__ysyx_22050019_core_inst__DOT__IFU__DOT__i0__DOT__q;
        IData/*19:0*/ top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__imm_20_j;
        IData/*31:0*/ top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__srli_w;
        IData/*31:0*/ top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__sra_w;
        IData/*31:0*/ top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__div_32;
        IData/*31:0*/ top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__rem_32;
        QData/*63:0*/ top__DOT__ysyx_22050019_core_inst__DOT__inst_addr_pc_if;
        QData/*63:0*/ top__DOT__ysyx_22050019_core_inst__DOT__rdata1_id_regs;
        QData/*63:0*/ top__DOT__ysyx_22050019_core_inst__DOT__rdata2_id_regs;
        QData/*63:0*/ top__DOT__ysyx_22050019_core_inst__DOT__op1_id_ex;
        QData/*63:0*/ top__DOT__ysyx_22050019_core_inst__DOT__op2_id_ex;
        QData/*63:0*/ top__DOT__ysyx_22050019_core_inst__DOT__snpc;
        QData/*63:0*/ top__DOT__ysyx_22050019_core_inst__DOT__ram_rdata_mem_ex;
        QData/*63:0*/ top__DOT__ysyx_22050019_core_inst__DOT__PC__DOT__q;
        QData/*63:0*/ top__DOT__ysyx_22050019_core_inst__DOT__IFU__DOT__fetchmem_rdata;
        QData/*63:0*/ top__DOT__ysyx_22050019_core_inst__DOT__IFU__DOT__i1__DOT__q;
        QData/*63:0*/ top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__imm_12_I_64;
        QData/*63:0*/ top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__imm64;
        QData/*63:0*/ top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__b_ab_s;
        QData/*63:0*/ top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__lut_out;
        QData/*63:0*/ top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op1__DOT__i0__DOT__lut_out;
        QData/*63:0*/ top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op2__DOT__i0__DOT__lut_out;
        QData/*63:0*/ top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_branch__DOT__i0__DOT__lut_out;
        QData/*63:0*/ top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__result;
        QData/*63:0*/ top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data;
        QData/*63:0*/ top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__add;
        QData/*63:0*/ top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__SEXT_add_32;
        QData/*63:0*/ top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__sri_64;
        QData/*63:0*/ top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__sll_64_w;
        QData/*63:0*/ top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mul;
        QData/*63:0*/ top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__lut_out;
        QData/*63:0*/ top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__lut_out;
        VlUnpacked<VlWide<3>/*69:0*/, 6> top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*5:0*/, 6> top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 6> top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__data_list;
        VlUnpacked<VlWide<3>/*65:0*/, 2> top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op1__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 2> top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op1__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 2> top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op1__DOT__i0__DOT__data_list;
        VlUnpacked<VlWide<3>/*66:0*/, 3> top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op2__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 3> top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op2__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 3> top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op2__DOT__i0__DOT__data_list;
        VlUnpacked<VlWide<3>/*65:0*/, 2> top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_branch__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 2> top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_branch__DOT__i0__DOT__key_list;
    };
    struct {
        VlUnpacked<QData/*63:0*/, 2> top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_branch__DOT__i0__DOT__data_list;
        VlUnpacked<VlWide<3>/*86:0*/, 23> top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list;
        VlUnpacked<IData/*22:0*/, 23> top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 23> top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list;
        VlUnpacked<VlWide<3>/*69:0*/, 6> top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*5:0*/, 6> top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 6> top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__data_list;
        VlUnpacked<SData/*10:0*/, 3> top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_w_wdth_mux__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 3> top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_w_wdth_mux__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*7:0*/, 3> top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_w_wdth_mux__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*63:0*/, 32> top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs;
        VlUnpacked<QData/*63:0*/, 33> top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs1;
    };

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    VlWide<14>/*419:0*/ top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_imm__lut;
    VlWide<5>/*131:0*/ top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_op1__lut;
    VlWide<7>/*200:0*/ top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_op2__lut;
    VlWide<5>/*131:0*/ top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_branch__lut;
    VlWide<14>/*419:0*/ top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT____Vcellinp__mem_r_data_mux__lut;
    VlWide<63>/*2000:0*/ top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut;
    QData/*63:0*/ __Vtask_pmem_read__0__rdata;
    QData/*63:0*/ __Vtask_pmem_read__2__rdata;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop___024root);  ///< Copying not allowed
  public:
    Vtop___024root(const char* name);
    ~Vtop___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
