// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceChgSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep);

void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vtop___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop___024root__traceChgSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
            tracep->chgSData(oldp+0,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_w_wdth_mux__DOT__i0__DOT__pair_list[0]),11);
            tracep->chgSData(oldp+1,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_w_wdth_mux__DOT__i0__DOT__pair_list[1]),11);
            tracep->chgSData(oldp+2,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_w_wdth_mux__DOT__i0__DOT__pair_list[2]),11);
            tracep->chgCData(oldp+3,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_w_wdth_mux__DOT__i0__DOT__key_list[0]),3);
            tracep->chgCData(oldp+4,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_w_wdth_mux__DOT__i0__DOT__key_list[1]),3);
            tracep->chgCData(oldp+5,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_w_wdth_mux__DOT__i0__DOT__key_list[2]),3);
            tracep->chgCData(oldp+6,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_w_wdth_mux__DOT__i0__DOT__data_list[0]),8);
            tracep->chgCData(oldp+7,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_w_wdth_mux__DOT__i0__DOT__data_list[1]),8);
            tracep->chgCData(oldp+8,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_w_wdth_mux__DOT__i0__DOT__data_list[2]),8);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+9,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__inst_addr_pc_if),64);
            tracep->chgQData(oldp+11,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__rdata1_id_regs),64);
            tracep->chgQData(oldp+13,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__rdata2_id_regs),64);
            tracep->chgQData(oldp+15,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op1_id_ex),64);
            tracep->chgQData(oldp+17,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op2_id_ex),64);
            tracep->chgBit(oldp+19,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__reg_we_id_ex));
            tracep->chgIData(oldp+20,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__alu_sel),23);
            tracep->chgQData(oldp+21,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__snpc),64);
            tracep->chgCData(oldp+23,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__mem_r_wdth),6);
            tracep->chgCData(oldp+24,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__mem_w_wdth),3);
            tracep->chgQData(oldp+25,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__ram_rdata_mem_ex),64);
            tracep->chgCData(oldp+27,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_w_mask),8);
            tracep->chgQData(oldp+28,((4ULL + vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__inst_addr_pc_if)),64);
            tracep->chgQData(oldp+30,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__PC__DOT__q),64);
            tracep->chgQData(oldp+32,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IFU__DOT__fetchmem_rdata),64);
            tracep->chgIData(oldp+34,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IFU__DOT__i0__DOT__q),32);
            tracep->chgQData(oldp+35,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IFU__DOT__i1__DOT__q),64);
            tracep->chgQData(oldp+37,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__imm_12_I_64),64);
            tracep->chgIData(oldp+39,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__imm_20_j),20);
            tracep->chgQData(oldp+40,((((- (QData)((IData)(
                                                           (1U 
                                                            & (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__imm_20_j 
                                                               >> 0x13U))))) 
                                        << 0x15U) | (QData)((IData)(
                                                                    (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__imm_20_j 
                                                                     << 1U))))),64);
            tracep->chgSData(oldp+42,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__imm_12_b),12);
            tracep->chgQData(oldp+43,((((- (QData)((IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__imm_12_b) 
                                                               >> 0xbU))))) 
                                        << 0xdU) | (QData)((IData)(
                                                                   ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__imm_12_b) 
                                                                    << 1U))))),64);
            tracep->chgSData(oldp+45,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__imm_12_s),12);
            tracep->chgQData(oldp+46,((((- (QData)((IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__imm_12_s) 
                                                               >> 0xbU))))) 
                                        << 0xcU) | (QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__imm_12_s)))),64);
            tracep->chgCData(oldp+48,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__imm_sel),6);
            tracep->chgQData(oldp+49,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__imm64),64);
            tracep->chgCData(oldp+51,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__op1_en),2);
            tracep->chgCData(oldp+52,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__op2_en),3);
            tracep->chgCData(oldp+53,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__branch),2);
            tracep->chgQData(oldp+54,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__b_ab_s),64);
            tracep->chgBit(oldp+56,((0ULL == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__b_ab_s)));
            tracep->chgBit(oldp+57,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__b_ab_1_s));
            tracep->chgBit(oldp+58,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__b_ab_1_u));
            tracep->chgWData(oldp+59,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_imm__lut),420);
            tracep->chgWData(oldp+73,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__pair_list[0]),70);
            tracep->chgWData(oldp+76,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__pair_list[1]),70);
            tracep->chgWData(oldp+79,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__pair_list[2]),70);
            tracep->chgWData(oldp+82,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__pair_list[3]),70);
            tracep->chgWData(oldp+85,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__pair_list[4]),70);
            tracep->chgWData(oldp+88,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__pair_list[5]),70);
            tracep->chgCData(oldp+91,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__key_list[0]),6);
            tracep->chgCData(oldp+92,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__key_list[1]),6);
            tracep->chgCData(oldp+93,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__key_list[2]),6);
            tracep->chgCData(oldp+94,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__key_list[3]),6);
            tracep->chgCData(oldp+95,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__key_list[4]),6);
            tracep->chgCData(oldp+96,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__key_list[5]),6);
            tracep->chgQData(oldp+97,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+99,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+101,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+103,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+105,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+107,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__data_list[5]),64);
            tracep->chgQData(oldp+109,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+111,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+112,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_op1__lut),132);
            tracep->chgWData(oldp+117,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op1__DOT__i0__DOT__pair_list[0]),66);
            tracep->chgWData(oldp+120,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op1__DOT__i0__DOT__pair_list[1]),66);
            tracep->chgCData(oldp+123,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op1__DOT__i0__DOT__key_list[0]),2);
            tracep->chgCData(oldp+124,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op1__DOT__i0__DOT__key_list[1]),2);
            tracep->chgQData(oldp+125,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op1__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+127,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op1__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+129,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op1__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+131,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op1__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+132,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_op2__lut),201);
            tracep->chgWData(oldp+139,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op2__DOT__i0__DOT__pair_list[0]),67);
            tracep->chgWData(oldp+142,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op2__DOT__i0__DOT__pair_list[1]),67);
            tracep->chgWData(oldp+145,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op2__DOT__i0__DOT__pair_list[2]),67);
            tracep->chgCData(oldp+148,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op2__DOT__i0__DOT__key_list[0]),3);
            tracep->chgCData(oldp+149,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op2__DOT__i0__DOT__key_list[1]),3);
            tracep->chgCData(oldp+150,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op2__DOT__i0__DOT__key_list[2]),3);
            tracep->chgQData(oldp+151,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op2__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+153,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op2__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+155,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op2__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+157,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op2__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+159,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op2__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+160,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_branch__lut),132);
            tracep->chgWData(oldp+165,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_branch__DOT__i0__DOT__pair_list[0]),66);
            tracep->chgWData(oldp+168,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_branch__DOT__i0__DOT__pair_list[1]),66);
            tracep->chgCData(oldp+171,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_branch__DOT__i0__DOT__key_list[0]),2);
            tracep->chgCData(oldp+172,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_branch__DOT__i0__DOT__key_list[1]),2);
            tracep->chgQData(oldp+173,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_branch__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+175,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_branch__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+177,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_branch__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+179,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_branch__DOT__i0__DOT__hit));
            tracep->chgQData(oldp+180,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__result),64);
            tracep->chgQData(oldp+182,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data),64);
            tracep->chgIData(oldp+184,((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op1_id_ex)),32);
            tracep->chgIData(oldp+185,((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op2_id_ex)),32);
            tracep->chgBit(oldp+186,((IData)((0U != 
                                              (0x600aU 
                                               & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__alu_sel)))));
            tracep->chgBit(oldp+187,((1U & (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__alu_sel 
                                            >> 3U))));
            tracep->chgBit(oldp+188,((1U & (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__alu_sel 
                                            >> 1U))));
            tracep->chgBit(oldp+189,((1U & (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__alu_sel 
                                            >> 0xdU))));
            tracep->chgBit(oldp+190,((1U & (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__alu_sel 
                                            >> 0xeU))));
            tracep->chgQData(oldp+191,(((IData)((0U 
                                                 != 
                                                 (0x600aU 
                                                  & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__alu_sel)))
                                         ? (1ULL + 
                                            (~ vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op2_id_ex))
                                         : vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op2_id_ex)),64);
            tracep->chgQData(oldp+193,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__add),64);
            tracep->chgQData(oldp+195,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__SEXT_add_32),64);
            tracep->chgQData(oldp+197,(((1U & (((IData)(
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
            tracep->chgQData(oldp+199,(((1U & (((~ (IData)(
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
            tracep->chgQData(oldp+201,((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op1_id_ex 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op2_id_ex)))),64);
            tracep->chgIData(oldp+203,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__srli_w),32);
            tracep->chgQData(oldp+204,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__srli_w 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__srli_w)))),64);
            tracep->chgQData(oldp+206,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__sri_64),64);
            tracep->chgQData(oldp+208,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__sri_64 
                                                                                >> 0x1fU))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__sri_64)))),64);
            tracep->chgIData(oldp+210,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__sra_w),32);
            tracep->chgQData(oldp+211,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__sra_w 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__sra_w)))),64);
            tracep->chgQData(oldp+213,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__sll_64_w),64);
            tracep->chgQData(oldp+215,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__sll_64_w 
                                                                                >> 0x1fU))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__sll_64_w)))),64);
            tracep->chgQData(oldp+217,((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op1_id_ex 
                                        << (0x3fU & (IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op2_id_ex)))),64);
            tracep->chgQData(oldp+219,((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op1_id_ex 
                                        & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op2_id_ex)),64);
            tracep->chgQData(oldp+221,((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op1_id_ex 
                                        | vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op2_id_ex)),64);
            tracep->chgQData(oldp+223,((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op1_id_ex 
                                        ^ vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op2_id_ex)),64);
            tracep->chgQData(oldp+225,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mul),64);
            tracep->chgQData(oldp+227,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mul 
                                                                                >> 0x1fU))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mul)))),64);
            tracep->chgIData(oldp+229,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__div_32),32);
            tracep->chgQData(oldp+230,(VL_DIV_QQQ(64, vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op1_id_ex, vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op2_id_ex)),64);
            tracep->chgQData(oldp+232,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__div_32 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__div_32)))),64);
            tracep->chgIData(oldp+234,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__rem_32),32);
            tracep->chgQData(oldp+235,(VL_MODDIV_QQQ(64, vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op1_id_ex, vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op2_id_ex)),64);
            tracep->chgQData(oldp+237,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__rem_32 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__rem_32)))),64);
            tracep->chgWData(oldp+239,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut),2001);
            tracep->chgWData(oldp+302,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[0]),87);
            tracep->chgWData(oldp+305,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[1]),87);
            tracep->chgWData(oldp+308,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[2]),87);
            tracep->chgWData(oldp+311,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[3]),87);
            tracep->chgWData(oldp+314,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[4]),87);
            tracep->chgWData(oldp+317,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[5]),87);
            tracep->chgWData(oldp+320,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[6]),87);
            tracep->chgWData(oldp+323,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[7]),87);
            tracep->chgWData(oldp+326,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[8]),87);
            tracep->chgWData(oldp+329,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[9]),87);
            tracep->chgWData(oldp+332,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[10]),87);
            tracep->chgWData(oldp+335,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[11]),87);
            tracep->chgWData(oldp+338,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[12]),87);
            tracep->chgWData(oldp+341,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[13]),87);
            tracep->chgWData(oldp+344,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[14]),87);
            tracep->chgWData(oldp+347,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[15]),87);
            tracep->chgWData(oldp+350,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[16]),87);
            tracep->chgWData(oldp+353,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[17]),87);
            tracep->chgWData(oldp+356,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[18]),87);
            tracep->chgWData(oldp+359,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[19]),87);
            tracep->chgWData(oldp+362,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[20]),87);
            tracep->chgWData(oldp+365,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[21]),87);
            tracep->chgWData(oldp+368,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[22]),87);
            tracep->chgIData(oldp+371,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list[0]),23);
            tracep->chgIData(oldp+372,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list[1]),23);
            tracep->chgIData(oldp+373,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list[2]),23);
            tracep->chgIData(oldp+374,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list[3]),23);
            tracep->chgIData(oldp+375,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list[4]),23);
            tracep->chgIData(oldp+376,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list[5]),23);
            tracep->chgIData(oldp+377,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list[6]),23);
            tracep->chgIData(oldp+378,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list[7]),23);
            tracep->chgIData(oldp+379,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list[8]),23);
            tracep->chgIData(oldp+380,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list[9]),23);
            tracep->chgIData(oldp+381,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list[10]),23);
            tracep->chgIData(oldp+382,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list[11]),23);
            tracep->chgIData(oldp+383,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list[12]),23);
            tracep->chgIData(oldp+384,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list[13]),23);
            tracep->chgIData(oldp+385,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list[14]),23);
            tracep->chgIData(oldp+386,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list[15]),23);
            tracep->chgIData(oldp+387,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list[16]),23);
            tracep->chgIData(oldp+388,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list[17]),23);
            tracep->chgIData(oldp+389,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list[18]),23);
            tracep->chgIData(oldp+390,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list[19]),23);
            tracep->chgIData(oldp+391,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list[20]),23);
            tracep->chgIData(oldp+392,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list[21]),23);
            tracep->chgIData(oldp+393,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list[22]),23);
            tracep->chgQData(oldp+394,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+396,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+398,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+400,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+402,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+404,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list[5]),64);
            tracep->chgQData(oldp+406,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list[6]),64);
            tracep->chgQData(oldp+408,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list[7]),64);
            tracep->chgQData(oldp+410,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list[8]),64);
            tracep->chgQData(oldp+412,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list[9]),64);
            tracep->chgQData(oldp+414,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list[10]),64);
            tracep->chgQData(oldp+416,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list[11]),64);
            tracep->chgQData(oldp+418,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list[12]),64);
            tracep->chgQData(oldp+420,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list[13]),64);
            tracep->chgQData(oldp+422,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list[14]),64);
            tracep->chgQData(oldp+424,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list[15]),64);
            tracep->chgQData(oldp+426,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list[16]),64);
            tracep->chgQData(oldp+428,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list[17]),64);
            tracep->chgQData(oldp+430,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list[18]),64);
            tracep->chgQData(oldp+432,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list[19]),64);
            tracep->chgQData(oldp+434,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list[20]),64);
            tracep->chgQData(oldp+436,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list[21]),64);
            tracep->chgQData(oldp+438,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list[22]),64);
            tracep->chgQData(oldp+440,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+442,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+443,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT____Vcellinp__mem_r_data_mux__lut),420);
            tracep->chgWData(oldp+457,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__pair_list[0]),70);
            tracep->chgWData(oldp+460,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__pair_list[1]),70);
            tracep->chgWData(oldp+463,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__pair_list[2]),70);
            tracep->chgWData(oldp+466,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__pair_list[3]),70);
            tracep->chgWData(oldp+469,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__pair_list[4]),70);
            tracep->chgWData(oldp+472,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__pair_list[5]),70);
            tracep->chgCData(oldp+475,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__key_list[0]),6);
            tracep->chgCData(oldp+476,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__key_list[1]),6);
            tracep->chgCData(oldp+477,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__key_list[2]),6);
            tracep->chgCData(oldp+478,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__key_list[3]),6);
            tracep->chgCData(oldp+479,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__key_list[4]),6);
            tracep->chgCData(oldp+480,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__key_list[5]),6);
            tracep->chgQData(oldp+481,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+483,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+485,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+487,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+489,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+491,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__data_list[5]),64);
            tracep->chgQData(oldp+493,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+495,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__hit));
            tracep->chgCData(oldp+496,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_w_wdth_mux__DOT__i0__DOT__lut_out),8);
            tracep->chgBit(oldp+497,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_w_wdth_mux__DOT__i0__DOT__hit));
            tracep->chgQData(oldp+498,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs[0]),64);
            tracep->chgQData(oldp+500,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs[1]),64);
            tracep->chgQData(oldp+502,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs[2]),64);
            tracep->chgQData(oldp+504,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs[3]),64);
            tracep->chgQData(oldp+506,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs[4]),64);
            tracep->chgQData(oldp+508,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs[5]),64);
            tracep->chgQData(oldp+510,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs[6]),64);
            tracep->chgQData(oldp+512,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs[7]),64);
            tracep->chgQData(oldp+514,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs[8]),64);
            tracep->chgQData(oldp+516,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs[9]),64);
            tracep->chgQData(oldp+518,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs[10]),64);
            tracep->chgQData(oldp+520,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs[11]),64);
            tracep->chgQData(oldp+522,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs[12]),64);
            tracep->chgQData(oldp+524,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs[13]),64);
            tracep->chgQData(oldp+526,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs[14]),64);
            tracep->chgQData(oldp+528,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs[15]),64);
            tracep->chgQData(oldp+530,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs[16]),64);
            tracep->chgQData(oldp+532,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs[17]),64);
            tracep->chgQData(oldp+534,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs[18]),64);
            tracep->chgQData(oldp+536,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs[19]),64);
            tracep->chgQData(oldp+538,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs[20]),64);
            tracep->chgQData(oldp+540,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs[21]),64);
            tracep->chgQData(oldp+542,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs[22]),64);
            tracep->chgQData(oldp+544,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs[23]),64);
            tracep->chgQData(oldp+546,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs[24]),64);
            tracep->chgQData(oldp+548,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs[25]),64);
            tracep->chgQData(oldp+550,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs[26]),64);
            tracep->chgQData(oldp+552,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs[27]),64);
            tracep->chgQData(oldp+554,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs[28]),64);
            tracep->chgQData(oldp+556,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs[29]),64);
            tracep->chgQData(oldp+558,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs[30]),64);
            tracep->chgQData(oldp+560,(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs[31]),64);
        }
        tracep->chgBit(oldp+562,(vlSelf->clk));
        tracep->chgBit(oldp+563,(vlSelf->rst_n));
        tracep->chgIData(oldp+564,(vlSelf->inst),32);
        tracep->chgQData(oldp+565,(vlSelf->inst_addr_o),64);
        tracep->chgQData(oldp+567,(vlSelf->now_addr),64);
        tracep->chgIData(oldp+569,(vlSelf->now_inst),32);
        tracep->chgCData(oldp+570,((((((((((0x13U == 
                                            (0x7fU 
                                             & vlSelf->now_inst)) 
                                           | (0x67U 
                                              == (0x7fU 
                                                  & vlSelf->now_inst))) 
                                          | (0x23U 
                                             == (0x7fU 
                                                 & vlSelf->now_inst))) 
                                         | (0x33U == 
                                            (0x7fU 
                                             & vlSelf->now_inst))) 
                                        | (3U == (0x7fU 
                                                  & vlSelf->now_inst))) 
                                       | (0x1bU == 
                                          (0x7fU & vlSelf->now_inst))) 
                                      | (0x3bU == (0x7fU 
                                                   & vlSelf->now_inst))) 
                                     | (0x63U == (0x7fU 
                                                  & vlSelf->now_inst)))
                                     ? (0x1fU & (vlSelf->now_inst 
                                                 >> 0xfU))
                                     : 0U)),5);
        tracep->chgCData(oldp+571,((((((0x63U == (0x7fU 
                                                  & vlSelf->now_inst)) 
                                       | (0x23U == 
                                          (0x7fU & vlSelf->now_inst))) 
                                      | (0x33U == (0x7fU 
                                                   & vlSelf->now_inst))) 
                                     | (0x3bU == (0x7fU 
                                                  & vlSelf->now_inst)))
                                     ? (0x1fU & (vlSelf->now_inst 
                                                 >> 0x14U))
                                     : 0U)),5);
        tracep->chgCData(oldp+572,(((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__reg_we_id_ex)
                                     ? (0x1fU & (vlSelf->now_inst 
                                                 >> 7U))
                                     : 0U)),5);
        tracep->chgBit(oldp+573,(((((((((0x6fU == (0x7fU 
                                                   & vlSelf->now_inst)) 
                                        | (0x67U == 
                                           (0x7fU & vlSelf->now_inst))) 
                                       | ((IData)((0x63U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->now_inst))) 
                                          & (0ULL == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__b_ab_s))) 
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
                                               == (0x707fU 
                                                   & vlSelf->now_inst))) 
                                      & (IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__b_ab_1_u))) 
                                  | ((IData)((0x7063U 
                                              == (0x707fU 
                                                  & vlSelf->now_inst))) 
                                     & (~ (IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__b_ab_1_u))))));
        tracep->chgBit(oldp+574,((0x23U == (0x7fU & vlSelf->now_inst))));
        tracep->chgQData(oldp+575,(((0x23U == (0x7fU 
                                               & vlSelf->now_inst))
                                     ? vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__rdata2_id_regs
                                     : 0ULL)),64);
        tracep->chgBit(oldp+577,((3U == (0x7fU & vlSelf->now_inst))));
        tracep->chgQData(oldp+578,(((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__reg_we_id_ex)
                                     ? ((3U == (0x7fU 
                                                & vlSelf->now_inst))
                                         ? vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data
                                         : vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__result)
                                     : 0ULL)),64);
        tracep->chgQData(oldp+580,(((0x23U == (0x7fU 
                                               & vlSelf->now_inst))
                                     ? vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__result
                                     : 0ULL)),64);
        tracep->chgQData(oldp+582,(((3U == (0x7fU & vlSelf->now_inst))
                                     ? vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__result
                                     : 0ULL)),64);
        tracep->chgCData(oldp+584,((0x7fU & vlSelf->now_inst)),7);
        tracep->chgCData(oldp+585,((0x1fU & (vlSelf->now_inst 
                                             >> 7U))),5);
        tracep->chgCData(oldp+586,((7U & (vlSelf->now_inst 
                                          >> 0xcU))),3);
        tracep->chgCData(oldp+587,((0x1fU & (vlSelf->now_inst 
                                             >> 0xfU))),5);
        tracep->chgCData(oldp+588,((0x1fU & (vlSelf->now_inst 
                                             >> 0x14U))),5);
        tracep->chgCData(oldp+589,((vlSelf->now_inst 
                                    >> 0x19U)),7);
        tracep->chgSData(oldp+590,((vlSelf->now_inst 
                                    >> 0x14U)),12);
        tracep->chgIData(oldp+591,((vlSelf->now_inst 
                                    >> 0xcU)),20);
        tracep->chgQData(oldp+592,((((QData)((IData)(
                                                     (- (IData)(
                                                                (vlSelf->now_inst 
                                                                 >> 0x1fU))))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 (0xfffff000U 
                                                                  & vlSelf->now_inst))))),64);
        tracep->chgBit(oldp+594,((0x13U == (0x7fU & vlSelf->now_inst))));
        tracep->chgBit(oldp+595,((0x63U == (0x7fU & vlSelf->now_inst))));
        tracep->chgBit(oldp+596,((0x33U == (0x7fU & vlSelf->now_inst))));
        tracep->chgBit(oldp+597,((0x1bU == (0x7fU & vlSelf->now_inst))));
        tracep->chgBit(oldp+598,((0x17U == (0x7fU & vlSelf->now_inst))));
        tracep->chgBit(oldp+599,((0x37U == (0x7fU & vlSelf->now_inst))));
        tracep->chgBit(oldp+600,((0x6fU == (0x7fU & vlSelf->now_inst))));
        tracep->chgBit(oldp+601,((0x67U == (0x7fU & vlSelf->now_inst))));
        tracep->chgBit(oldp+602,((0x3bU == (0x7fU & vlSelf->now_inst))));
        tracep->chgBit(oldp+603,((0U == (7U & (vlSelf->now_inst 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+604,((1U == (7U & (vlSelf->now_inst 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+605,((2U == (7U & (vlSelf->now_inst 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+606,((3U == (7U & (vlSelf->now_inst 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+607,((4U == (7U & (vlSelf->now_inst 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+608,((5U == (7U & (vlSelf->now_inst 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+609,((6U == (7U & (vlSelf->now_inst 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+610,((7U == (7U & (vlSelf->now_inst 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+611,((0U == (vlSelf->now_inst 
                                         >> 0x19U))));
        tracep->chgBit(oldp+612,((1U == (vlSelf->now_inst 
                                         >> 0x19U))));
        tracep->chgBit(oldp+613,((0x20U == (vlSelf->now_inst 
                                            >> 0x19U))));
        tracep->chgBit(oldp+614,((IData)((0x13U == 
                                          (0x707fU 
                                           & vlSelf->now_inst)))));
        tracep->chgBit(oldp+615,((IData)((0x63U == 
                                          (0x707fU 
                                           & vlSelf->now_inst)))));
        tracep->chgBit(oldp+616,((IData)((0x3023U == 
                                          (0x707fU 
                                           & vlSelf->now_inst)))));
        tracep->chgBit(oldp+617,(((IData)((0x33U == 
                                           (0x707fU 
                                            & vlSelf->now_inst))) 
                                  & (0x20U == (vlSelf->now_inst 
                                               >> 0x19U)))));
        tracep->chgBit(oldp+618,(((IData)((0x33U == 
                                           (0x707fU 
                                            & vlSelf->now_inst))) 
                                  & (0U == (vlSelf->now_inst 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+619,((IData)((0x1bU == 
                                          (0x707fU 
                                           & vlSelf->now_inst)))));
        tracep->chgBit(oldp+620,((IData)((0x1063U == 
                                          (0x707fU 
                                           & vlSelf->now_inst)))));
        tracep->chgBit(oldp+621,((IData)((0x3003U == 
                                          (0x707fU 
                                           & vlSelf->now_inst)))));
        tracep->chgBit(oldp+622,((IData)((0x3013U == 
                                          (0x707fU 
                                           & vlSelf->now_inst)))));
        tracep->chgBit(oldp+623,((IData)((0x2003U == 
                                          (0x707fU 
                                           & vlSelf->now_inst)))));
        tracep->chgBit(oldp+624,((((IData)((0x3bU == 
                                            (0x707fU 
                                             & vlSelf->now_inst))) 
                                   & (1U != (vlSelf->now_inst 
                                             >> 0x19U))) 
                                  & (0x20U != (vlSelf->now_inst 
                                               >> 0x19U)))));
        tracep->chgBit(oldp+625,(((IData)((0x5013U 
                                           == (0x707fU 
                                               & vlSelf->now_inst))) 
                                  & (0x20U == (vlSelf->now_inst 
                                               >> 0x19U)))));
        tracep->chgBit(oldp+626,((IData)((0x4003U == 
                                          (0x707fU 
                                           & vlSelf->now_inst)))));
        tracep->chgBit(oldp+627,((IData)((0x1023U == 
                                          (0x707fU 
                                           & vlSelf->now_inst)))));
        tracep->chgBit(oldp+628,((IData)((0x7013U == 
                                          (0x707fU 
                                           & vlSelf->now_inst)))));
        tracep->chgBit(oldp+629,((IData)((0x103bU == 
                                          (0x707fU 
                                           & vlSelf->now_inst)))));
        tracep->chgBit(oldp+630,(((IData)((0x7033U 
                                           == (0x707fU 
                                               & vlSelf->now_inst))) 
                                  & (1U != (vlSelf->now_inst 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+631,((IData)((0x3033U == 
                                          (0x707fU 
                                           & vlSelf->now_inst)))));
        tracep->chgBit(oldp+632,(((IData)((0x4033U 
                                           == (0x707fU 
                                               & vlSelf->now_inst))) 
                                  & (0U == (vlSelf->now_inst 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+633,((IData)((0x4013U == 
                                          (0x707fU 
                                           & vlSelf->now_inst)))));
        tracep->chgBit(oldp+634,((IData)((0x6033U == 
                                          (0x707fU 
                                           & vlSelf->now_inst)))));
        tracep->chgBit(oldp+635,((IData)((0x23U == 
                                          (0x707fU 
                                           & vlSelf->now_inst)))));
        tracep->chgBit(oldp+636,(((IData)((0x1013U 
                                           == (0x707fU 
                                               & vlSelf->now_inst))) 
                                  & (0U == (vlSelf->now_inst 
                                            >> 0x1aU)))));
        tracep->chgBit(oldp+637,((IData)((0x5063U == 
                                          (0x707fU 
                                           & vlSelf->now_inst)))));
        tracep->chgBit(oldp+638,((IData)((0x2023U == 
                                          (0x707fU 
                                           & vlSelf->now_inst)))));
        tracep->chgBit(oldp+639,(((IData)((0x3bU == 
                                           (0x707fU 
                                            & vlSelf->now_inst))) 
                                  & (1U == (vlSelf->now_inst 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+640,(((IData)((0x403bU 
                                           == (0x707fU 
                                               & vlSelf->now_inst))) 
                                  & (1U == (vlSelf->now_inst 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+641,(((IData)((0x603bU 
                                           == (0x707fU 
                                               & vlSelf->now_inst))) 
                                  & (1U == (vlSelf->now_inst 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+642,(((IData)((0x2033U 
                                           == (0x707fU 
                                               & vlSelf->now_inst))) 
                                  & (0U == (vlSelf->now_inst 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+643,((IData)((0x4063U == 
                                          (0x707fU 
                                           & vlSelf->now_inst)))));
        tracep->chgBit(oldp+644,((IData)((0x1003U == 
                                          (0x707fU 
                                           & vlSelf->now_inst)))));
        tracep->chgBit(oldp+645,((IData)((0x5003U == 
                                          (0x707fU 
                                           & vlSelf->now_inst)))));
        tracep->chgBit(oldp+646,(((IData)((0x3bU == 
                                           (0x707fU 
                                            & vlSelf->now_inst))) 
                                  & (0x20U == (vlSelf->now_inst 
                                               >> 0x19U)))));
        tracep->chgBit(oldp+647,(((IData)((0x5013U 
                                           == (0x707fU 
                                               & vlSelf->now_inst))) 
                                  & (0U == (vlSelf->now_inst 
                                            >> 0x1aU)))));
        tracep->chgBit(oldp+648,(((IData)((0x101bU 
                                           == (0x707fU 
                                               & vlSelf->now_inst))) 
                                  & (0U == (vlSelf->now_inst 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+649,(((IData)((0x501bU 
                                           == (0x707fU 
                                               & vlSelf->now_inst))) 
                                  & (0x20U == (vlSelf->now_inst 
                                               >> 0x19U)))));
        tracep->chgBit(oldp+650,(((IData)((0x33U == 
                                           (0x707fU 
                                            & vlSelf->now_inst))) 
                                  & (1U == (vlSelf->now_inst 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+651,(((IData)((0x501bU 
                                           == (0x707fU 
                                               & vlSelf->now_inst))) 
                                  & (0U == (vlSelf->now_inst 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+652,(((IData)((0x503bU 
                                           == (0x707fU 
                                               & vlSelf->now_inst))) 
                                  & (0x20U == (vlSelf->now_inst 
                                               >> 0x19U)))));
        tracep->chgBit(oldp+653,(((IData)((0x503bU 
                                           == (0x707fU 
                                               & vlSelf->now_inst))) 
                                  & (0U == (vlSelf->now_inst 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+654,((IData)((0x6063U == 
                                          (0x707fU 
                                           & vlSelf->now_inst)))));
        tracep->chgBit(oldp+655,(((IData)((0x5033U 
                                           == (0x707fU 
                                               & vlSelf->now_inst))) 
                                  & (1U == (vlSelf->now_inst 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+656,((IData)((0x2013U == 
                                          (0x707fU 
                                           & vlSelf->now_inst)))));
        tracep->chgBit(oldp+657,(((IData)((0x503bU 
                                           == (0x707fU 
                                               & vlSelf->now_inst))) 
                                  & (1U == (vlSelf->now_inst 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+658,((IData)((0x7063U == 
                                          (0x707fU 
                                           & vlSelf->now_inst)))));
        tracep->chgBit(oldp+659,((IData)((3U == (0x707fU 
                                                 & vlSelf->now_inst)))));
        tracep->chgBit(oldp+660,((IData)((0x6013U == 
                                          (0x707fU 
                                           & vlSelf->now_inst)))));
        tracep->chgBit(oldp+661,(((IData)((0x703bU 
                                           == (0x707fU 
                                               & vlSelf->now_inst))) 
                                  & (1U == (vlSelf->now_inst 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+662,(((IData)((0x1033U 
                                           == (0x707fU 
                                               & vlSelf->now_inst))) 
                                  & (0U == (vlSelf->now_inst 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+663,(((IData)((0x7033U 
                                           == (0x707fU 
                                               & vlSelf->now_inst))) 
                                  & (1U == (vlSelf->now_inst 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+664,(((((((((IData)((0x13U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->now_inst))) 
                                        | (0x17U == 
                                           (0x7fU & vlSelf->now_inst))) 
                                       | (0x37U == 
                                          (0x7fU & vlSelf->now_inst))) 
                                      | (0x6fU == (0x7fU 
                                                   & vlSelf->now_inst))) 
                                     | (0x67U == (0x7fU 
                                                  & vlSelf->now_inst))) 
                                    | (0x23U == (0x7fU 
                                                 & vlSelf->now_inst))) 
                                   | ((IData)((0x33U 
                                               == (0x707fU 
                                                   & vlSelf->now_inst))) 
                                      & (0U == (vlSelf->now_inst 
                                                >> 0x19U)))) 
                                  | (3U == (0x7fU & vlSelf->now_inst)))));
        tracep->chgBit(oldp+665,(((IData)((0x1bU == 
                                           (0x707fU 
                                            & vlSelf->now_inst))) 
                                  | (((IData)((0x3bU 
                                               == (0x707fU 
                                                   & vlSelf->now_inst))) 
                                      & (1U != (vlSelf->now_inst 
                                                >> 0x19U))) 
                                     & (0x20U != (vlSelf->now_inst 
                                                  >> 0x19U))))));
        tracep->chgBit(oldp+666,(((IData)((0x3013U 
                                           == (0x707fU 
                                               & vlSelf->now_inst))) 
                                  | (IData)((0x3033U 
                                             == (0x707fU 
                                                 & vlSelf->now_inst))))));
        tracep->chgBit(oldp+667,(((IData)((0x7013U 
                                           == (0x707fU 
                                               & vlSelf->now_inst))) 
                                  | ((IData)((0x7033U 
                                              == (0x707fU 
                                                  & vlSelf->now_inst))) 
                                     & (1U != (vlSelf->now_inst 
                                               >> 0x19U))))));
        tracep->chgBit(oldp+668,(((IData)((0x103bU 
                                           == (0x707fU 
                                               & vlSelf->now_inst))) 
                                  | ((IData)((0x101bU 
                                              == (0x707fU 
                                                  & vlSelf->now_inst))) 
                                     & (0U == (vlSelf->now_inst 
                                               >> 0x19U))))));
        tracep->chgBit(oldp+669,(((IData)((0x4013U 
                                           == (0x707fU 
                                               & vlSelf->now_inst))) 
                                  | ((IData)((0x4033U 
                                              == (0x707fU 
                                                  & vlSelf->now_inst))) 
                                     & (0U == (vlSelf->now_inst 
                                               >> 0x19U))))));
        tracep->chgBit(oldp+670,(((IData)((0x6033U 
                                           == (0x707fU 
                                               & vlSelf->now_inst))) 
                                  | (IData)((0x6013U 
                                             == (0x707fU 
                                                 & vlSelf->now_inst))))));
        tracep->chgBit(oldp+671,((((IData)((0x403bU 
                                            == (0x707fU 
                                                & vlSelf->now_inst))) 
                                   & (1U == (vlSelf->now_inst 
                                             >> 0x19U))) 
                                  | ((IData)((0x503bU 
                                              == (0x707fU 
                                                  & vlSelf->now_inst))) 
                                     & (1U == (vlSelf->now_inst 
                                               >> 0x19U))))));
        tracep->chgBit(oldp+672,((((IData)((0x603bU 
                                            == (0x707fU 
                                                & vlSelf->now_inst))) 
                                   & (1U == (vlSelf->now_inst 
                                             >> 0x19U))) 
                                  | ((IData)((0x703bU 
                                              == (0x707fU 
                                                  & vlSelf->now_inst))) 
                                     & (1U == (vlSelf->now_inst 
                                               >> 0x19U))))));
        tracep->chgBit(oldp+673,((((IData)((0x2033U 
                                            == (0x707fU 
                                                & vlSelf->now_inst))) 
                                   & (0U == (vlSelf->now_inst 
                                             >> 0x19U))) 
                                  | (IData)((0x2013U 
                                             == (0x707fU 
                                                 & vlSelf->now_inst))))));
        tracep->chgBit(oldp+674,((((IData)((0x501bU 
                                            == (0x707fU 
                                                & vlSelf->now_inst))) 
                                   & (0U == (vlSelf->now_inst 
                                             >> 0x19U))) 
                                  | ((IData)((0x503bU 
                                              == (0x707fU 
                                                  & vlSelf->now_inst))) 
                                     & (0U == (vlSelf->now_inst 
                                               >> 0x19U))))));
    }
}

void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    }
}
