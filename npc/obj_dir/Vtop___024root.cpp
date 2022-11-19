// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

void Vtop___024unit____Vdpiimwrap_ebreak_TOP____024unit();
void Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &rdata);
void Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ mask);

VL_INLINE_OPT void Vtop___024root___sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__2\n"); );
    // Variables
    CData/*4:0*/ __Vdlyvdim0__top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs__v0;
    VlWide<5>/*159:0*/ __Vtemp374;
    VlWide<7>/*223:0*/ __Vtemp375;
    VlWide<11>/*351:0*/ __Vtemp479;
    VlWide<38>/*1215:0*/ __Vtemp499;
    VlWide<5>/*159:0*/ __Vtemp681;
    VlWide<14>/*447:0*/ __Vtemp688;
    QData/*63:0*/ __Vdlyvval__top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs__v0;
    // Body
    __Vdlyvset__top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs__v0 = 0U;
    if (vlSelf->rst_n) {
        vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__PC__DOT__q 
            = (4ULL + vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__inst_addr_pc_if);
        vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IFU__DOT__i1__DOT__q 
            = vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__inst_addr_pc_if;
    } else {
        vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__PC__DOT__q = 0x80000000ULL;
        vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IFU__DOT__i1__DOT__q = 0ULL;
    }
    if (((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__reg_we_id_ex) 
         & (0U != ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__reg_we_id_ex)
                    ? (0x1fU & (vlSelf->now_inst >> 7U))
                    : 0U)))) {
        __Vdlyvval__top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs__v0 
            = ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__reg_we_id_ex)
                ? ((3U == (0x7fU & vlSelf->now_inst))
                    ? vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data
                    : vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__result)
                : 0ULL);
        __Vdlyvset__top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs__v0 = 1U;
        __Vdlyvdim0__top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs__v0 
            = ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__reg_we_id_ex)
                ? (0x1fU & (vlSelf->now_inst >> 7U))
                : 0U);
    }
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IFU__DOT__i0__DOT__q 
        = ((IData)(vlSelf->rst_n) ? vlSelf->inst : 0U);
    if (__Vdlyvset__top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs__v0) {
        vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs[__Vdlyvdim0__top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs__v0] 
            = __Vdlyvval__top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs__v0;
    }
    vlSelf->now_addr = vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IFU__DOT__i1__DOT__q;
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs1[0x1fU] 
        = vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs
        [0x1fU];
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs1[0x1eU] 
        = vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs
        [0x1eU];
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs1[0x1dU] 
        = vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs
        [0x1dU];
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs1[0x1cU] 
        = vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs
        [0x1cU];
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs1[0x1bU] 
        = vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs
        [0x1bU];
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs1[0x1aU] 
        = vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs
        [0x1aU];
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs1[0x19U] 
        = vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs
        [0x19U];
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs1[0x18U] 
        = vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs
        [0x18U];
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs1[0x17U] 
        = vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs
        [0x17U];
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs1[0x16U] 
        = vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs
        [0x16U];
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs1[0x15U] 
        = vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs
        [0x15U];
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs1[0x14U] 
        = vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs
        [0x14U];
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs1[0x13U] 
        = vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs
        [0x13U];
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs1[0x12U] 
        = vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs
        [0x12U];
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs1[0x11U] 
        = vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs
        [0x11U];
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs1[0x10U] 
        = vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs
        [0x10U];
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs1[0xfU] 
        = vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs
        [0xfU];
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs1[0xeU] 
        = vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs
        [0xeU];
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs1[0xdU] 
        = vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs
        [0xdU];
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs1[0xcU] 
        = vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs
        [0xcU];
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs1[0xbU] 
        = vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs
        [0xbU];
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs1[0xaU] 
        = vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs
        [0xaU];
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs1[9U] 
        = vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs
        [9U];
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs1[8U] 
        = vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs
        [8U];
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs1[7U] 
        = vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs
        [7U];
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs1[6U] 
        = vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs
        [6U];
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs1[5U] 
        = vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs
        [5U];
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs1[4U] 
        = vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs
        [4U];
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs1[3U] 
        = vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs
        [3U];
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs1[2U] 
        = vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs
        [2U];
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs1[1U] 
        = vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs
        [1U];
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs1[0U] 
        = vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs
        [0U];
    vlSelf->now_inst = vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IFU__DOT__i0__DOT__q;
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs1[0x20U] 
        = vlSelf->now_addr;
    if ((0x100073U == vlSelf->now_inst)) {
        Vtop___024unit____Vdpiimwrap_ebreak_TOP____024unit();
    }
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__reg_we_id_ex 
        = (((((((((0x13U == (0x7fU & vlSelf->now_inst)) 
                  | (0x17U == (0x7fU & vlSelf->now_inst))) 
                 | (0x37U == (0x7fU & vlSelf->now_inst))) 
                | (0x6fU == (0x7fU & vlSelf->now_inst))) 
               | (0x67U == (0x7fU & vlSelf->now_inst))) 
              | (0x33U == (0x7fU & vlSelf->now_inst))) 
             | (3U == (0x7fU & vlSelf->now_inst))) 
            | (0x1bU == (0x7fU & vlSelf->now_inst))) 
           | (0x3bU == (0x7fU & vlSelf->now_inst)));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__mem_r_wdth 
        = (((IData)((0x2003U == (0x707fU & vlSelf->now_inst))) 
            << 5U) | (((IData)((0x1003U == (0x707fU 
                                            & vlSelf->now_inst))) 
                       << 4U) | (((IData)((3U == (0x707fU 
                                                  & vlSelf->now_inst))) 
                                  << 3U) | (((IData)(
                                                     (0x5003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->now_inst))) 
                                             << 1U) 
                                            | (IData)(
                                                      (0x4003U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->now_inst)))))));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__branch 
        = ((((0x6fU == (0x7fU & vlSelf->now_inst)) 
             | (0x63U == (0x7fU & vlSelf->now_inst))) 
            << 1U) | (0x67U == (0x7fU & vlSelf->now_inst)));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__mem_w_wdth 
        = (((IData)((0x23U == (0x707fU & vlSelf->now_inst))) 
            << 2U) | (((IData)((0x1023U == (0x707fU 
                                            & vlSelf->now_inst))) 
                       << 1U) | (IData)((0x2023U == 
                                         (0x707fU & vlSelf->now_inst)))));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__alu_sel 
        = ((((IData)((0x7033U == (0x707fU & vlSelf->now_inst))) 
             & (1U == (vlSelf->now_inst >> 0x19U))) 
            << 0x16U) | ((((IData)((0x1033U == (0x707fU 
                                                & vlSelf->now_inst))) 
                           & (0U == (vlSelf->now_inst 
                                     >> 0x19U))) << 0x15U) 
                         | ((((IData)((0x5033U == (0x707fU 
                                                   & vlSelf->now_inst))) 
                              & (1U == (vlSelf->now_inst 
                                        >> 0x19U))) 
                             << 0x14U) | ((((IData)(
                                                    (0x503bU 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->now_inst))) 
                                            & (0x20U 
                                               == (vlSelf->now_inst 
                                                   >> 0x19U))) 
                                           << 0x13U) 
                                          | (((((IData)(
                                                        (0x501bU 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->now_inst))) 
                                                & (0U 
                                                   == 
                                                   (vlSelf->now_inst 
                                                    >> 0x19U))) 
                                               | ((IData)(
                                                          (0x503bU 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->now_inst))) 
                                                  & (0U 
                                                     == 
                                                     (vlSelf->now_inst 
                                                      >> 0x19U)))) 
                                              << 0x12U) 
                                             | ((((IData)(
                                                          (0x33U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->now_inst))) 
                                                  & (1U 
                                                     == 
                                                     (vlSelf->now_inst 
                                                      >> 0x19U))) 
                                                 << 0x11U) 
                                                | ((((IData)(
                                                             (0x501bU 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->now_inst))) 
                                                     & (0x20U 
                                                        == 
                                                        (vlSelf->now_inst 
                                                         >> 0x19U))) 
                                                    << 0x10U) 
                                                   | ((((IData)(
                                                                (0x5013U 
                                                                 == 
                                                                 (0x707fU 
                                                                  & vlSelf->now_inst))) 
                                                        & (0U 
                                                           == 
                                                           (vlSelf->now_inst 
                                                            >> 0x1aU))) 
                                                       << 0xfU) 
                                                      | ((((IData)(
                                                                   (0x3bU 
                                                                    == 
                                                                    (0x707fU 
                                                                     & vlSelf->now_inst))) 
                                                           & (0x20U 
                                                              == 
                                                              (vlSelf->now_inst 
                                                               >> 0x19U))) 
                                                          << 0xeU) 
                                                         | (((((IData)(
                                                                       (0x2033U 
                                                                        == 
                                                                        (0x707fU 
                                                                         & vlSelf->now_inst))) 
                                                               & (0U 
                                                                  == 
                                                                  (vlSelf->now_inst 
                                                                   >> 0x19U))) 
                                                              | (IData)(
                                                                        (0x2013U 
                                                                         == 
                                                                         (0x707fU 
                                                                          & vlSelf->now_inst)))) 
                                                             << 0xdU) 
                                                            | (((((IData)(
                                                                          (0x603bU 
                                                                           == 
                                                                           (0x707fU 
                                                                            & vlSelf->now_inst))) 
                                                                  & (1U 
                                                                     == 
                                                                     (vlSelf->now_inst 
                                                                      >> 0x19U))) 
                                                                 | ((IData)(
                                                                            (0x703bU 
                                                                             == 
                                                                             (0x707fU 
                                                                              & vlSelf->now_inst))) 
                                                                    & (1U 
                                                                       == 
                                                                       (vlSelf->now_inst 
                                                                        >> 0x19U)))) 
                                                                << 0xcU) 
                                                               | (((((IData)(
                                                                             (0x403bU 
                                                                              == 
                                                                              (0x707fU 
                                                                               & vlSelf->now_inst))) 
                                                                     & (1U 
                                                                        == 
                                                                        (vlSelf->now_inst 
                                                                         >> 0x19U))) 
                                                                    | ((IData)(
                                                                               (0x503bU 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->now_inst))) 
                                                                       & (1U 
                                                                          == 
                                                                          (vlSelf->now_inst 
                                                                           >> 0x19U)))) 
                                                                   << 0xbU) 
                                                                  | ((((IData)(
                                                                               (0x3bU 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->now_inst))) 
                                                                       & (1U 
                                                                          == 
                                                                          (vlSelf->now_inst 
                                                                           >> 0x19U))) 
                                                                      << 0xaU) 
                                                                     | ((((IData)(
                                                                                (0x1013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->now_inst))) 
                                                                          & (0U 
                                                                             == 
                                                                             (vlSelf->now_inst 
                                                                              >> 0x1aU))) 
                                                                         << 9U) 
                                                                        | ((((IData)(
                                                                                (0x6033U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->now_inst))) 
                                                                             | (IData)(
                                                                                (0x6013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->now_inst)))) 
                                                                            << 8U) 
                                                                           | ((((IData)(
                                                                                (0x4013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->now_inst))) 
                                                                                | ((IData)(
                                                                                (0x4033U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->now_inst))) 
                                                                                & (0U 
                                                                                == 
                                                                                (vlSelf->now_inst 
                                                                                >> 0x19U)))) 
                                                                               << 7U) 
                                                                              | ((((IData)(
                                                                                (0x103bU 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->now_inst))) 
                                                                                | ((IData)(
                                                                                (0x101bU 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->now_inst))) 
                                                                                & (0U 
                                                                                == 
                                                                                (vlSelf->now_inst 
                                                                                >> 0x19U)))) 
                                                                                << 6U) 
                                                                                | ((((IData)(
                                                                                (0x7013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->now_inst))) 
                                                                                | ((IData)(
                                                                                (0x7033U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->now_inst))) 
                                                                                & (1U 
                                                                                != 
                                                                                (vlSelf->now_inst 
                                                                                >> 0x19U)))) 
                                                                                << 5U) 
                                                                                | ((((IData)(
                                                                                (0x5013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->now_inst))) 
                                                                                & (0x20U 
                                                                                == 
                                                                                (vlSelf->now_inst 
                                                                                >> 0x19U))) 
                                                                                << 4U) 
                                                                                | ((((IData)(
                                                                                (0x3013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->now_inst))) 
                                                                                | (IData)(
                                                                                (0x3033U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->now_inst)))) 
                                                                                << 3U) 
                                                                                | ((((IData)(
                                                                                (0x1bU 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->now_inst))) 
                                                                                | (((IData)(
                                                                                (0x3bU 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->now_inst))) 
                                                                                & (1U 
                                                                                != 
                                                                                (vlSelf->now_inst 
                                                                                >> 0x19U))) 
                                                                                & (0x20U 
                                                                                != 
                                                                                (vlSelf->now_inst 
                                                                                >> 0x19U)))) 
                                                                                << 2U) 
                                                                                | ((((IData)(
                                                                                (0x33U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->now_inst))) 
                                                                                & (0x20U 
                                                                                == 
                                                                                (vlSelf->now_inst 
                                                                                >> 0x19U))) 
                                                                                << 1U) 
                                                                                | ((((((((IData)(
                                                                                (0x13U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->now_inst))) 
                                                                                | (0x17U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->now_inst))) 
                                                                                | (0x37U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->now_inst))) 
                                                                                | (0x6fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->now_inst))) 
                                                                                | (0x67U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->now_inst))) 
                                                                                | (0x23U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->now_inst))) 
                                                                                | ((IData)(
                                                                                (0x33U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->now_inst))) 
                                                                                & (0U 
                                                                                == 
                                                                                (vlSelf->now_inst 
                                                                                >> 0x19U)))) 
                                                                                | (3U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->now_inst)))))))))))))))))))))))));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__op1_en 
        = (((((0x17U == (0x7fU & vlSelf->now_inst)) 
              | (0x6fU == (0x7fU & vlSelf->now_inst))) 
             | (0x67U == (0x7fU & vlSelf->now_inst))) 
            << 1U) | ((((((0x13U == (0x7fU & vlSelf->now_inst)) 
                          | (0x23U == (0x7fU & vlSelf->now_inst))) 
                         | (0x33U == (0x7fU & vlSelf->now_inst))) 
                        | (0x1bU == (0x7fU & vlSelf->now_inst))) 
                       | (3U == (0x7fU & vlSelf->now_inst))) 
                      | (0x3bU == (0x7fU & vlSelf->now_inst))));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__op2_en 
        = ((((((((0x13U == (0x7fU & vlSelf->now_inst)) 
                 | (0x17U == (0x7fU & vlSelf->now_inst))) 
                | (0x37U == (0x7fU & vlSelf->now_inst))) 
               | (0x23U == (0x7fU & vlSelf->now_inst))) 
              | (0x1bU == (0x7fU & vlSelf->now_inst))) 
             | (3U == (0x7fU & vlSelf->now_inst))) 
            << 2U) | ((((0x33U == (0x7fU & vlSelf->now_inst)) 
                        | (0x3bU == (0x7fU & vlSelf->now_inst))) 
                       << 1U) | ((0x6fU == (0x7fU & vlSelf->now_inst)) 
                                 | (0x67U == (0x7fU 
                                              & vlSelf->now_inst)))));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__rdata1_id_regs 
        = vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs
        [(((((((((0x13U == (0x7fU & vlSelf->now_inst)) 
                 | (0x67U == (0x7fU & vlSelf->now_inst))) 
                | (0x23U == (0x7fU & vlSelf->now_inst))) 
               | (0x33U == (0x7fU & vlSelf->now_inst))) 
              | (3U == (0x7fU & vlSelf->now_inst))) 
             | (0x1bU == (0x7fU & vlSelf->now_inst))) 
            | (0x3bU == (0x7fU & vlSelf->now_inst))) 
           | (0x63U == (0x7fU & vlSelf->now_inst)))
           ? (0x1fU & (vlSelf->now_inst >> 0xfU)) : 0U)];
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__rdata2_id_regs 
        = vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__regs__DOT__regs
        [(((((0x63U == (0x7fU & vlSelf->now_inst)) 
             | (0x23U == (0x7fU & vlSelf->now_inst))) 
            | (0x33U == (0x7fU & vlSelf->now_inst))) 
           | (0x3bU == (0x7fU & vlSelf->now_inst)))
           ? (0x1fU & (vlSelf->now_inst >> 0x14U)) : 0U)];
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__imm_sel 
        = ((((0x17U == (0x7fU & vlSelf->now_inst)) 
             | (0x37U == (0x7fU & vlSelf->now_inst))) 
            << 5U) | (((0x6fU == (0x7fU & vlSelf->now_inst)) 
                       << 4U) | ((((((0x13U == (0x7fU 
                                                & vlSelf->now_inst)) 
                                     | (0x67U == (0x7fU 
                                                  & vlSelf->now_inst))) 
                                    | (0x1bU == (0x7fU 
                                                 & vlSelf->now_inst))) 
                                   | (3U == (0x7fU 
                                             & vlSelf->now_inst))) 
                                  << 3U) | (((0x63U 
                                              == (0x7fU 
                                                  & vlSelf->now_inst)) 
                                             << 1U) 
                                            | (0x23U 
                                               == (0x7fU 
                                                   & vlSelf->now_inst))))));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__imm_20_j 
        = ((0x80000U & (vlSelf->now_inst >> 0xcU)) 
           | ((0x7f800U & (vlSelf->now_inst >> 1U)) 
              | ((0x400U & (vlSelf->now_inst >> 0xaU)) 
                 | (0x3ffU & (vlSelf->now_inst >> 0x15U)))));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__imm_12_b 
        = ((0x800U & (vlSelf->now_inst >> 0x14U)) | 
           ((0x400U & (vlSelf->now_inst << 3U)) | (
                                                   (0x3f0U 
                                                    & (vlSelf->now_inst 
                                                       >> 0x15U)) 
                                                   | (0xfU 
                                                      & (vlSelf->now_inst 
                                                         >> 8U)))));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__imm_12_s 
        = ((0xfe0U & (vlSelf->now_inst >> 0x14U)) | 
           (0x1fU & (vlSelf->now_inst >> 7U)));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__imm_12_I_64 
        = (((- (QData)((IData)((vlSelf->now_inst >> 0x1fU)))) 
            << 0xcU) | (QData)((IData)((vlSelf->now_inst 
                                        >> 0x14U))));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_w_wdth_mux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__mem_w_wdth) 
                       == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_w_wdth_mux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_w_wdth_mux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_w_wdth_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__mem_w_wdth) 
           == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_w_wdth_mux__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_w_wdth_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_w_wdth_mux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__mem_w_wdth) 
                          == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_w_wdth_mux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_w_wdth_mux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_w_wdth_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_w_wdth_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__mem_w_wdth) 
              == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_w_wdth_mux__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_w_wdth_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_w_wdth_mux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__mem_w_wdth) 
                          == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_w_wdth_mux__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_w_wdth_mux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_w_wdth_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_w_wdth_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__mem_w_wdth) 
              == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_w_wdth_mux__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_w_mask 
        = ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_w_wdth_mux__DOT__i0__DOT__hit)
            ? (IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_w_wdth_mux__DOT__i0__DOT__lut_out)
            : 0xffU);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_op1__lut[0U] 
        = (IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__rdata1_id_regs);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_op1__lut[1U] 
        = (IData)((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__rdata1_id_regs 
                   >> 0x20U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_op1__lut[2U] 
        = (1U | ((IData)(vlSelf->now_addr) << 2U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_op1__lut[3U] 
        = (((IData)(vlSelf->now_addr) >> 0x1eU) | ((IData)(
                                                           (vlSelf->now_addr 
                                                            >> 0x20U)) 
                                                   << 2U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_op1__lut[4U] 
        = (8U | ((IData)((vlSelf->now_addr >> 0x20U)) 
                 >> 0x1eU));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__b_ab_s 
        = (1ULL + (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__rdata1_id_regs 
                   + (~ vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__rdata2_id_regs)));
    __Vtemp374[0U] = (IData)((((- (QData)((IData)((1U 
                                                   & ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__imm_12_s) 
                                                      >> 0xbU))))) 
                               << 0xcU) | (QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__imm_12_s))));
    __Vtemp374[1U] = (IData)(((((- (QData)((IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__imm_12_s) 
                                                       >> 0xbU))))) 
                                << 0xcU) | (QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__imm_12_s))) 
                              >> 0x20U));
    __Vtemp374[2U] = (1U | ((IData)((((- (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__imm_12_b) 
                                                             >> 0xbU))))) 
                                      << 0xdU) | (QData)((IData)(
                                                                 ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__imm_12_b) 
                                                                  << 1U))))) 
                            << 6U));
    __Vtemp374[3U] = (((IData)((((- (QData)((IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__imm_12_b) 
                                                        >> 0xbU))))) 
                                 << 0xdU) | (QData)((IData)(
                                                            ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__imm_12_b) 
                                                             << 1U))))) 
                       >> 0x1aU) | ((IData)(((((- (QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__imm_12_b) 
                                                                      >> 0xbU))))) 
                                               << 0xdU) 
                                              | (QData)((IData)(
                                                                ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__imm_12_b) 
                                                                 << 1U)))) 
                                             >> 0x20U)) 
                                    << 6U));
    __Vtemp374[4U] = (0x80U | ((IData)(((((- (QData)((IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__imm_12_b) 
                                                                 >> 0xbU))))) 
                                          << 0xdU) 
                                         | (QData)((IData)(
                                                           ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__imm_12_b) 
                                                            << 1U)))) 
                                        >> 0x20U)) 
                               >> 0x1aU));
    VL_EXTEND_WW(204,140, __Vtemp375, __Vtemp374);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_imm__lut[0U] 
        = __Vtemp375[0U];
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_imm__lut[1U] 
        = __Vtemp375[1U];
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_imm__lut[2U] 
        = __Vtemp375[2U];
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_imm__lut[3U] 
        = __Vtemp375[3U];
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_imm__lut[4U] 
        = __Vtemp375[4U];
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_imm__lut[5U] 
        = __Vtemp375[5U];
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_imm__lut[6U] 
        = (0x4000U | (((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__imm_12_I_64) 
                       << 0x12U) | __Vtemp375[6U]));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_imm__lut[7U] 
        = (((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__imm_12_I_64) 
            >> 0xeU) | ((IData)((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__imm_12_I_64 
                                 >> 0x20U)) << 0x12U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_imm__lut[8U] 
        = (0x200000U | (((IData)((((- (QData)((IData)(
                                                      (1U 
                                                       & (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__imm_20_j 
                                                          >> 0x13U))))) 
                                   << 0x15U) | (QData)((IData)(
                                                               (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__imm_20_j 
                                                                << 1U))))) 
                         << 0x18U) | ((IData)((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__imm_12_I_64 
                                               >> 0x20U)) 
                                      >> 0xeU)));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_imm__lut[9U] 
        = (((IData)((((- (QData)((IData)((1U & (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__imm_20_j 
                                                >> 0x13U))))) 
                      << 0x15U) | (QData)((IData)((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__imm_20_j 
                                                   << 1U))))) 
            >> 8U) | ((IData)(((((- (QData)((IData)(
                                                    (1U 
                                                     & (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__imm_20_j 
                                                        >> 0x13U))))) 
                                 << 0x15U) | (QData)((IData)(
                                                             (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__imm_20_j 
                                                              << 1U)))) 
                               >> 0x20U)) << 0x18U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_imm__lut[0xaU] 
        = (0x10000000U | (((IData)((((QData)((IData)(
                                                     (- (IData)(
                                                                (vlSelf->now_inst 
                                                                 >> 0x1fU))))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 (0xfffff000U 
                                                                  & vlSelf->now_inst))))) 
                           << 0x1eU) | ((IData)((((
                                                   (- (QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__imm_20_j 
                                                                          >> 0x13U))))) 
                                                   << 0x15U) 
                                                  | (QData)((IData)(
                                                                    (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__imm_20_j 
                                                                     << 1U)))) 
                                                 >> 0x20U)) 
                                        >> 8U)));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_imm__lut[0xbU] 
        = (((IData)((((QData)((IData)((- (IData)((vlSelf->now_inst 
                                                  >> 0x1fU))))) 
                      << 0x20U) | (QData)((IData)((0xfffff000U 
                                                   & vlSelf->now_inst))))) 
            >> 2U) | ((IData)(((((QData)((IData)((- (IData)(
                                                            (vlSelf->now_inst 
                                                             >> 0x1fU))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             (0xfffff000U 
                                                              & vlSelf->now_inst)))) 
                               >> 0x20U)) << 0x1eU));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_imm__lut[0xcU] 
        = ((IData)(((((QData)((IData)((- (IData)((vlSelf->now_inst 
                                                  >> 0x1fU))))) 
                      << 0x20U) | (QData)((IData)((0xfffff000U 
                                                   & vlSelf->now_inst)))) 
                    >> 0x20U)) >> 2U);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_imm__lut[0xdU] = 8U;
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op1__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_op1__lut[0U];
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op1__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_op1__lut[1U];
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op1__DOT__i0__DOT__pair_list[0U][2U] 
        = (3U & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_op1__lut[2U]);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op1__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_op1__lut[3U] 
            << 0x1eU) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_op1__lut[2U] 
                         >> 2U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op1__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_op1__lut[4U] 
            << 0x1eU) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_op1__lut[3U] 
                         >> 2U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op1__DOT__i0__DOT__pair_list[1U][2U] 
        = (3U & (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_op1__lut[4U] 
                 >> 2U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__b_ab_1_s 
        = (1U & (((IData)((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__rdata1_id_regs 
                           >> 0x3fU)) & (~ (IData)(
                                                   (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__rdata2_id_regs 
                                                    >> 0x3fU)))) 
                 | (((1U & (IData)((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__rdata1_id_regs 
                                    >> 0x3fU))) == 
                     (1U & (IData)((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__rdata2_id_regs 
                                    >> 0x3fU)))) & (IData)(
                                                           (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__b_ab_s 
                                                            >> 0x3fU)))));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__b_ab_1_u 
        = (1U & (((~ (IData)((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__rdata1_id_regs 
                              >> 0x3fU))) & (IData)(
                                                    (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__rdata2_id_regs 
                                                     >> 0x3fU))) 
                 | (((1U & (IData)((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__rdata1_id_regs 
                                    >> 0x3fU))) == 
                     (1U & (IData)((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__rdata2_id_regs 
                                    >> 0x3fU)))) & (IData)(
                                                           (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__b_ab_s 
                                                            >> 0x3fU)))));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_imm__lut[0U];
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_imm__lut[1U];
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__pair_list[0U][2U] 
        = (0x3fU & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_imm__lut[2U]);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_imm__lut[3U] 
            << 0x1aU) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_imm__lut[2U] 
                         >> 6U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_imm__lut[4U] 
            << 0x1aU) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_imm__lut[3U] 
                         >> 6U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__pair_list[1U][2U] 
        = (0x3fU & (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_imm__lut[4U] 
                    >> 6U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__pair_list[2U][0U] 
        = ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_imm__lut[5U] 
            << 0x14U) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_imm__lut[4U] 
                         >> 0xcU));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__pair_list[2U][1U] 
        = ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_imm__lut[6U] 
            << 0x14U) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_imm__lut[5U] 
                         >> 0xcU));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__pair_list[2U][2U] 
        = (0x3fU & (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_imm__lut[6U] 
                    >> 0xcU));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__pair_list[3U][0U] 
        = ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_imm__lut[7U] 
            << 0xeU) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_imm__lut[6U] 
                        >> 0x12U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__pair_list[3U][1U] 
        = ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_imm__lut[8U] 
            << 0xeU) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_imm__lut[7U] 
                        >> 0x12U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__pair_list[3U][2U] 
        = (0x3fU & (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_imm__lut[8U] 
                    >> 0x12U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__pair_list[4U][0U] 
        = ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_imm__lut[9U] 
            << 8U) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_imm__lut[8U] 
                      >> 0x18U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__pair_list[4U][1U] 
        = ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_imm__lut[0xaU] 
            << 8U) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_imm__lut[9U] 
                      >> 0x18U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__pair_list[4U][2U] 
        = (0x3fU & (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_imm__lut[0xaU] 
                    >> 0x18U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__pair_list[5U][0U] 
        = ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_imm__lut[0xbU] 
            << 2U) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_imm__lut[0xaU] 
                      >> 0x1eU));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__pair_list[5U][1U] 
        = ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_imm__lut[0xcU] 
            << 2U) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_imm__lut[0xbU] 
                      >> 0x1eU));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__pair_list[5U][2U] 
        = (0x3fU & ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_imm__lut[0xdU] 
                     << 2U) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_imm__lut[0xcU] 
                               >> 0x1eU)));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op1__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op1__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op1__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op1__DOT__i0__DOT__key_list[0U] 
        = (3U & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op1__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op1__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op1__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op1__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op1__DOT__i0__DOT__key_list[1U] 
        = (3U & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op1__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__key_list[0U] 
        = (0x3fU & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__key_list[1U] 
        = (0x3fU & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__key_list[2U] 
        = (0x3fU & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__key_list[3U] 
        = (0x3fU & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__pair_list
           [3U][2U]);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__data_list[4U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__pair_list
                            [4U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__pair_list
                                                                   [4U][0U])));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__key_list[4U] 
        = (0x3fU & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__pair_list
           [4U][2U]);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__data_list[5U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__pair_list
                            [5U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__pair_list
                                                                   [5U][0U])));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__key_list[5U] 
        = (0x3fU & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__pair_list
           [5U][2U]);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op1__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__op1_en) 
                               == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op1__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op1__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__op1_en) 
           == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op1__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op1__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__op1_en) 
                                  == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op1__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op1__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__op1_en) 
              == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op1__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op1_id_ex 
        = ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op1__DOT__i0__DOT__hit)
            ? vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op1__DOT__i0__DOT__lut_out
            : 0ULL);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__imm_sel) 
                               == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__imm_sel) 
           == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__imm_sel) 
                                  == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__imm_sel) 
              == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__imm_sel) 
                                  == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__imm_sel) 
              == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__imm_sel) 
                                  == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__imm_sel) 
              == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__imm_sel) 
                                  == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__key_list
                                  [4U])))) & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__imm_sel) 
              == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__imm_sel) 
                                  == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__key_list
                                  [5U])))) & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__imm_sel) 
              == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__imm64 
        = ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__hit)
            ? vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_imm__DOT__i0__DOT__lut_out
            : 0ULL);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_branch__lut[0U] 
        = (IData)((0xfffffffffffffffeULL & (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__rdata1_id_regs 
                                            + vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__imm_12_I_64)));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_branch__lut[1U] 
        = (IData)(((0xfffffffffffffffeULL & (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__rdata1_id_regs 
                                             + vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__imm_12_I_64)) 
                   >> 0x20U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_branch__lut[2U] 
        = (1U | ((IData)((vlSelf->now_addr + vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__imm64)) 
                 << 2U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_branch__lut[3U] 
        = (((IData)((vlSelf->now_addr + vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__imm64)) 
            >> 0x1eU) | ((IData)(((vlSelf->now_addr 
                                   + vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__imm64) 
                                  >> 0x20U)) << 2U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_branch__lut[4U] 
        = (8U | ((IData)(((vlSelf->now_addr + vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__imm64) 
                          >> 0x20U)) >> 0x1eU));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_op2__lut[0U] = 4U;
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_op2__lut[1U] = 0U;
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_op2__lut[2U] 
        = (1U | ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__rdata2_id_regs) 
                 << 3U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_op2__lut[3U] 
        = (((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__rdata2_id_regs) 
            >> 0x1dU) | ((IData)((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__rdata2_id_regs 
                                  >> 0x20U)) << 3U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_op2__lut[4U] 
        = (0x10U | (((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__imm64) 
                     << 6U) | ((IData)((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__rdata2_id_regs 
                                        >> 0x20U)) 
                               >> 0x1dU)));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_op2__lut[5U] 
        = (((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__imm64) 
            >> 0x1aU) | ((IData)((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__imm64 
                                  >> 0x20U)) << 6U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_op2__lut[6U] 
        = (0x100U | ((IData)((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__imm64 
                              >> 0x20U)) >> 0x1aU));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_branch__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_branch__lut[0U];
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_branch__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_branch__lut[1U];
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_branch__DOT__i0__DOT__pair_list[0U][2U] 
        = (3U & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_branch__lut[2U]);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_branch__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_branch__lut[3U] 
            << 0x1eU) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_branch__lut[2U] 
                         >> 2U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_branch__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_branch__lut[4U] 
            << 0x1eU) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_branch__lut[3U] 
                         >> 2U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_branch__DOT__i0__DOT__pair_list[1U][2U] 
        = (3U & (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_branch__lut[4U] 
                 >> 2U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op2__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_op2__lut[0U];
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op2__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_op2__lut[1U];
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op2__DOT__i0__DOT__pair_list[0U][2U] 
        = (7U & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_op2__lut[2U]);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op2__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_op2__lut[3U] 
            << 0x1dU) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_op2__lut[2U] 
                         >> 3U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op2__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_op2__lut[4U] 
            << 0x1dU) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_op2__lut[3U] 
                         >> 3U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op2__DOT__i0__DOT__pair_list[1U][2U] 
        = (7U & (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_op2__lut[4U] 
                 >> 3U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op2__DOT__i0__DOT__pair_list[2U][0U] 
        = ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_op2__lut[5U] 
            << 0x1aU) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_op2__lut[4U] 
                         >> 6U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op2__DOT__i0__DOT__pair_list[2U][1U] 
        = ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_op2__lut[6U] 
            << 0x1aU) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_op2__lut[5U] 
                         >> 6U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op2__DOT__i0__DOT__pair_list[2U][2U] 
        = (7U & (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT____Vcellinp__mux_op2__lut[6U] 
                 >> 6U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_branch__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_branch__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_branch__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_branch__DOT__i0__DOT__key_list[0U] 
        = (3U & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_branch__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_branch__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_branch__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_branch__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_branch__DOT__i0__DOT__key_list[1U] 
        = (3U & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_branch__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op2__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op2__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op2__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op2__DOT__i0__DOT__key_list[0U] 
        = (7U & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op2__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op2__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op2__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op2__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op2__DOT__i0__DOT__key_list[1U] 
        = (7U & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op2__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op2__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op2__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op2__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op2__DOT__i0__DOT__key_list[2U] 
        = (7U & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op2__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_branch__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__branch) 
                               == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_branch__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_branch__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_branch__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__branch) 
           == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_branch__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_branch__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_branch__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__branch) 
                                  == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_branch__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_branch__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_branch__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_branch__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__branch) 
              == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_branch__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__snpc 
        = ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_branch__DOT__i0__DOT__hit)
            ? vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_branch__DOT__i0__DOT__lut_out
            : 0ULL);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op2__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__op2_en) 
                               == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op2__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op2__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__op2_en) 
           == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op2__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op2__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op2__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__op2_en) 
                                  == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op2__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op2__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__op2_en) 
              == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op2__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op2__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op2__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__op2_en) 
                                  == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op2__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op2__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__op2_en) 
              == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op2__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op2_id_ex 
        = ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op2__DOT__i0__DOT__hit)
            ? vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__mux_op2__DOT__i0__DOT__lut_out
            : 0ULL);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__inst_addr_pc_if 
        = (((((((((0x6fU == (0x7fU & vlSelf->now_inst)) 
                  | (0x67U == (0x7fU & vlSelf->now_inst))) 
                 | ((IData)((0x63U == (0x707fU & vlSelf->now_inst))) 
                    & (0ULL == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__b_ab_s))) 
                | ((IData)((0x1063U == (0x707fU & vlSelf->now_inst))) 
                   & (0ULL != vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__b_ab_s))) 
               | ((IData)((0x5063U == (0x707fU & vlSelf->now_inst))) 
                  & (~ (IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__b_ab_1_s)))) 
              | ((IData)((0x4063U == (0x707fU & vlSelf->now_inst))) 
                 & (IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__b_ab_1_s))) 
             | ((IData)((0x6063U == (0x707fU & vlSelf->now_inst))) 
                & (IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__b_ab_1_u))) 
            | ((IData)((0x7063U == (0x707fU & vlSelf->now_inst))) 
               & (~ (IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IDU__DOT__b_ab_1_u))))
            ? vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__snpc
            : vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__PC__DOT__q);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__srli_w 
        = ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op1_id_ex) 
           >> (0x1fU & (IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op2_id_ex)));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__sri_64 
        = VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op1_id_ex, 
                         (0x3fU & (IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op2_id_ex)));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__sra_w 
        = VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op1_id_ex), 
                         (0x1fU & (IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op2_id_ex)));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__sll_64_w 
        = (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op1_id_ex 
           << (0x1fU & (IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op2_id_ex)));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mul 
        = (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op1_id_ex 
           * vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op2_id_ex);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__div_32 
        = VL_DIV_III(32, (IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op1_id_ex), (IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op2_id_ex));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__rem_32 
        = VL_MODDIV_III(32, (IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op1_id_ex), (IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op2_id_ex));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__add 
        = (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op1_id_ex 
           + ((IData)((0U != (0x600aU & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__alu_sel)))
               ? (1ULL + (~ vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op2_id_ex))
               : vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op2_id_ex));
    vlSelf->inst_addr_o = vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__inst_addr_pc_if;
    Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__inst_addr_pc_if, vlSelf->__Vtask_pmem_read__0__rdata);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IFU__DOT__fetchmem_rdata 
        = vlSelf->__Vtask_pmem_read__0__rdata;
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__SEXT_add_32 
        = (((QData)((IData)((- (IData)((1U & (IData)(
                                                     (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__add 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__add)));
    vlSelf->inst = (IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__IFU__DOT__fetchmem_rdata);
    __Vtemp479[9U] = (((IData)(((1U & (((~ (IData)(
                                                   (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op1_id_ex 
                                                    >> 0x3fU))) 
                                        & (IData)((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op2_id_ex 
                                                   >> 0x3fU))) 
                                       | (((1U & (IData)(
                                                         (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op1_id_ex 
                                                          >> 0x3fU))) 
                                           == (1U & (IData)(
                                                            (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op2_id_ex 
                                                             >> 0x3fU)))) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__add 
                                                     >> 0x3fU)))))
                                 ? 1ULL : 0ULL)) >> 0x1bU) 
                      | ((IData)((((1U & (((~ (IData)(
                                                      (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op1_id_ex 
                                                       >> 0x3fU))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op2_id_ex 
                                                      >> 0x3fU))) 
                                          | (((1U & (IData)(
                                                            (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op1_id_ex 
                                                             >> 0x3fU))) 
                                              == (1U 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op2_id_ex 
                                                             >> 0x3fU)))) 
                                             & (IData)(
                                                       (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__add 
                                                        >> 0x3fU)))))
                                    ? 1ULL : 0ULL) 
                                  >> 0x20U)) << 5U));
    __Vtemp499[0x24U] = (((IData)(((1U & (((IData)(
                                                   (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op1_id_ex 
                                                    >> 0x3fU)) 
                                           & (~ (IData)(
                                                        (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op2_id_ex 
                                                         >> 0x3fU)))) 
                                          | (((1U & (IData)(
                                                            (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op1_id_ex 
                                                             >> 0x3fU))) 
                                              == (1U 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op2_id_ex 
                                                             >> 0x3fU)))) 
                                             & (IData)(
                                                       (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__add 
                                                        >> 0x3fU)))))
                                    ? 1ULL : 0ULL)) 
                          >> 0x15U) | ((IData)((((1U 
                                                  & (((IData)(
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
                                                  ? 1ULL
                                                  : 0ULL) 
                                                >> 0x20U)) 
                                       << 0xbU));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0U] 
        = (IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__add);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[1U] 
        = (IData)((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__add 
                   >> 0x20U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[2U] 
        = (1U | ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__add) 
                 << 0x17U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[3U] 
        = (((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__add) 
            >> 9U) | ((IData)((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__add 
                               >> 0x20U)) << 0x17U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[4U] 
        = (0x1000000U | ((IData)((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__add 
                                  >> 0x20U)) >> 9U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[5U] 
        = ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__SEXT_add_32) 
           << 0xeU);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[6U] 
        = (((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__SEXT_add_32) 
            >> 0x12U) | ((IData)((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__SEXT_add_32 
                                  >> 0x20U)) << 0xeU));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[7U] 
        = (0x10000U | ((IData)((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__SEXT_add_32 
                                >> 0x20U)) >> 0x12U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[8U] 
        = ((IData)(((1U & (((~ (IData)((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op1_id_ex 
                                        >> 0x3fU))) 
                            & (IData)((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op2_id_ex 
                                       >> 0x3fU))) 
                           | (((1U & (IData)((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op1_id_ex 
                                              >> 0x3fU))) 
                               == (1U & (IData)((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op2_id_ex 
                                                 >> 0x3fU)))) 
                              & (IData)((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__add 
                                         >> 0x3fU)))))
                     ? 1ULL : 0ULL)) << 5U);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[9U] 
        = __Vtemp479[9U];
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0xaU] 
        = (0x100U | (((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__sri_64) 
                      << 0x1cU) | ((IData)((((1U & 
                                              (((~ (IData)(
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
                                              ? 1ULL
                                              : 0ULL) 
                                            >> 0x20U)) 
                                   >> 0x1bU)));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0xbU] 
        = (((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__sri_64) 
            >> 4U) | ((IData)((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__sri_64 
                               >> 0x20U)) << 0x1cU));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0xcU] 
        = ((IData)((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__sri_64 
                    >> 0x20U)) >> 4U);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0xdU] 
        = (1U | ((IData)((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op1_id_ex 
                          & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op2_id_ex)) 
                 << 0x13U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0xeU] 
        = (((IData)((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op1_id_ex 
                     & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op2_id_ex)) 
            >> 0xdU) | ((IData)(((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op1_id_ex 
                                  & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op2_id_ex) 
                                 >> 0x20U)) << 0x13U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0xfU] 
        = (0x1000000U | ((IData)(((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op1_id_ex 
                                   & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op2_id_ex) 
                                  >> 0x20U)) >> 0xdU));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x10U] 
        = ((IData)((((QData)((IData)((- (IData)((1U 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__sll_64_w 
                                                            >> 0x1fU))))))) 
                     << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__sll_64_w)))) 
           << 0xaU);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x11U] 
        = (((IData)((((QData)((IData)((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__sll_64_w 
                                                             >> 0x1fU))))))) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__sll_64_w)))) 
            >> 0x16U) | ((IData)(((((QData)((IData)(
                                                    (- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__sll_64_w 
                                                                           >> 0x1fU))))))) 
                                    << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__sll_64_w))) 
                                  >> 0x20U)) << 0xaU));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x12U] 
        = (0x10000U | ((IData)(((((QData)((IData)((- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__sll_64_w 
                                                                         >> 0x1fU))))))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__sll_64_w))) 
                                >> 0x20U)) >> 0x16U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x13U] 
        = ((IData)((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op1_id_ex 
                    ^ vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op2_id_ex)) 
           << 1U);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x14U] 
        = (((IData)((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op1_id_ex 
                     ^ vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op2_id_ex)) 
            >> 0x1fU) | ((IData)(((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op1_id_ex 
                                   ^ vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op2_id_ex) 
                                  >> 0x20U)) << 1U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x15U] 
        = (0x100U | (((IData)((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op1_id_ex 
                               | vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op2_id_ex)) 
                      << 0x18U) | ((IData)(((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op1_id_ex 
                                             ^ vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op2_id_ex) 
                                            >> 0x20U)) 
                                   >> 0x1fU)));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x16U] 
        = (((IData)((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op1_id_ex 
                     | vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op2_id_ex)) 
            >> 8U) | ((IData)(((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op1_id_ex 
                                | vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op2_id_ex) 
                               >> 0x20U)) << 0x18U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x17U] 
        = ((IData)(((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op1_id_ex 
                     | vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op2_id_ex) 
                    >> 0x20U)) >> 8U);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x18U] 
        = (1U | ((IData)((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op1_id_ex 
                          << (0x3fU & (IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op2_id_ex)))) 
                 << 0xfU));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x19U] 
        = (((IData)((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op1_id_ex 
                     << (0x3fU & (IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op2_id_ex)))) 
            >> 0x11U) | ((IData)(((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op1_id_ex 
                                   << (0x3fU & (IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op2_id_ex))) 
                                  >> 0x20U)) << 0xfU));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x1aU] 
        = (0x1000000U | ((IData)(((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op1_id_ex 
                                   << (0x3fU & (IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op2_id_ex))) 
                                  >> 0x20U)) >> 0x11U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x1bU] 
        = ((IData)((((QData)((IData)((- (IData)((1U 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mul 
                                                            >> 0x1fU))))))) 
                     << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mul)))) 
           << 6U);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x1cU] 
        = (((IData)((((QData)((IData)((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mul 
                                                             >> 0x1fU))))))) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mul)))) 
            >> 0x1aU) | ((IData)(((((QData)((IData)(
                                                    (- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mul 
                                                                           >> 0x1fU))))))) 
                                    << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mul))) 
                                  >> 0x20U)) << 6U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x1dU] 
        = (0x10000U | (((IData)((((QData)((IData)((- (IData)(
                                                             (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__div_32 
                                                              >> 0x1fU))))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__div_32)))) 
                        << 0x1dU) | ((IData)(((((QData)((IData)(
                                                                (- (IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mul 
                                                                                >> 0x1fU))))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mul))) 
                                              >> 0x20U)) 
                                     >> 0x1aU)));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x1eU] 
        = (((IData)((((QData)((IData)((- (IData)((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__div_32 
                                                  >> 0x1fU))))) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__div_32)))) 
            >> 3U) | ((IData)(((((QData)((IData)((- (IData)(
                                                            (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__div_32 
                                                             >> 0x1fU))))) 
                                 << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__div_32))) 
                               >> 0x20U)) << 0x1dU));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x1fU] 
        = ((IData)(((((QData)((IData)((- (IData)((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__div_32 
                                                  >> 0x1fU))))) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__div_32))) 
                    >> 0x20U)) >> 3U);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x20U] 
        = (0x100U | ((IData)((((QData)((IData)((- (IData)(
                                                          (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__rem_32 
                                                           >> 0x1fU))))) 
                               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__rem_32)))) 
                     << 0x14U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x21U] 
        = (((IData)((((QData)((IData)((- (IData)((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__rem_32 
                                                  >> 0x1fU))))) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__rem_32)))) 
            >> 0xcU) | ((IData)(((((QData)((IData)(
                                                   (- (IData)(
                                                              (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__rem_32 
                                                               >> 0x1fU))))) 
                                   << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__rem_32))) 
                                 >> 0x20U)) << 0x14U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x22U] 
        = ((IData)(((((QData)((IData)((- (IData)((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__rem_32 
                                                  >> 0x1fU))))) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__rem_32))) 
                    >> 0x20U)) >> 0xcU);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x23U] 
        = (1U | ((IData)(((1U & (((IData)((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op1_id_ex 
                                           >> 0x3fU)) 
                                  & (~ (IData)((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op2_id_ex 
                                                >> 0x3fU)))) 
                                 | (((1U & (IData)(
                                                   (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op1_id_ex 
                                                    >> 0x3fU))) 
                                     == (1U & (IData)(
                                                      (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op2_id_ex 
                                                       >> 0x3fU)))) 
                                    & (IData)((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__add 
                                               >> 0x3fU)))))
                           ? 1ULL : 0ULL)) << 0xbU));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x24U] 
        = __Vtemp499[0x24U];
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x25U] 
        = (0x1000000U | ((IData)((((1U & (((IData)(
                                                   (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op1_id_ex 
                                                    >> 0x3fU)) 
                                           & (~ (IData)(
                                                        (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op2_id_ex 
                                                         >> 0x3fU)))) 
                                          | (((1U & (IData)(
                                                            (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op1_id_ex 
                                                             >> 0x3fU))) 
                                              == (1U 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op2_id_ex 
                                                             >> 0x3fU)))) 
                                             & (IData)(
                                                       (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__add 
                                                        >> 0x3fU)))))
                                    ? 1ULL : 0ULL) 
                                  >> 0x20U)) >> 0x15U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x26U] 
        = ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__SEXT_add_32) 
           << 2U);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x27U] 
        = (((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__SEXT_add_32) 
            >> 0x1eU) | ((IData)((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__SEXT_add_32 
                                  >> 0x20U)) << 2U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x28U] 
        = (0x10000U | (((IData)((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op1_id_ex 
                                 >> (0x3fU & (IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op2_id_ex)))) 
                        << 0x19U) | ((IData)((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__SEXT_add_32 
                                              >> 0x20U)) 
                                     >> 0x1eU)));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x29U] 
        = (((IData)((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op1_id_ex 
                     >> (0x3fU & (IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op2_id_ex)))) 
            >> 7U) | ((IData)(((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op1_id_ex 
                                >> (0x3fU & (IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op2_id_ex))) 
                               >> 0x20U)) << 0x19U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x2aU] 
        = ((IData)(((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op1_id_ex 
                     >> (0x3fU & (IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op2_id_ex))) 
                    >> 0x20U)) >> 7U);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x2bU] 
        = (0x100U | ((IData)((((QData)((IData)((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__sri_64 
                                                                      >> 0x1fU))))))) 
                               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__sri_64)))) 
                     << 0x10U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x2cU] 
        = (((IData)((((QData)((IData)((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__sri_64 
                                                             >> 0x1fU))))))) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__sri_64)))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(
                                                    (- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__sri_64 
                                                                           >> 0x1fU))))))) 
                                    << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__sri_64))) 
                                  >> 0x20U)) << 0x10U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x2dU] 
        = ((IData)(((((QData)((IData)((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__sri_64 
                                                             >> 0x1fU))))))) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__sri_64))) 
                    >> 0x20U)) >> 0x10U);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x2eU] 
        = (1U | ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mul) 
                 << 7U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x2fU] 
        = (((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mul) 
            >> 0x19U) | ((IData)((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mul 
                                  >> 0x20U)) << 7U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x30U] 
        = (0x1000000U | (((IData)((((QData)((IData)(
                                                    (- (IData)(
                                                               (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__srli_w 
                                                                >> 0x1fU))))) 
                                    << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__srli_w)))) 
                          << 0x1eU) | ((IData)((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mul 
                                                >> 0x20U)) 
                                       >> 0x19U)));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x31U] 
        = (((IData)((((QData)((IData)((- (IData)((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__srli_w 
                                                  >> 0x1fU))))) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__srli_w)))) 
            >> 2U) | ((IData)(((((QData)((IData)((- (IData)(
                                                            (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__srli_w 
                                                             >> 0x1fU))))) 
                                 << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__srli_w))) 
                               >> 0x20U)) << 0x1eU));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x32U] 
        = ((IData)(((((QData)((IData)((- (IData)((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__srli_w 
                                                  >> 0x1fU))))) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__srli_w))) 
                    >> 0x20U)) >> 2U);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x33U] 
        = (0x10000U | ((IData)((((QData)((IData)((- (IData)(
                                                            (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__sra_w 
                                                             >> 0x1fU))))) 
                                 << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__sra_w)))) 
                       << 0x15U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x34U] 
        = (((IData)((((QData)((IData)((- (IData)((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__sra_w 
                                                  >> 0x1fU))))) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__sra_w)))) 
            >> 0xbU) | ((IData)(((((QData)((IData)(
                                                   (- (IData)(
                                                              (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__sra_w 
                                                               >> 0x1fU))))) 
                                   << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__sra_w))) 
                                 >> 0x20U)) << 0x15U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x35U] 
        = ((IData)(((((QData)((IData)((- (IData)((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__sra_w 
                                                  >> 0x1fU))))) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__sra_w))) 
                    >> 0x20U)) >> 0xbU);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x36U] 
        = (0x100U | ((IData)(VL_DIV_QQQ(64, vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op1_id_ex, vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op2_id_ex)) 
                     << 0xcU));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x37U] 
        = (((IData)(VL_DIV_QQQ(64, vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op1_id_ex, vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op2_id_ex)) 
            >> 0x14U) | ((IData)((VL_DIV_QQQ(64, vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op1_id_ex, vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op2_id_ex) 
                                  >> 0x20U)) << 0xcU));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x38U] 
        = ((IData)((VL_DIV_QQQ(64, vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op1_id_ex, vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op2_id_ex) 
                    >> 0x20U)) >> 0x14U);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x39U] 
        = (1U | ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__sll_64_w) 
                 << 3U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x3aU] 
        = (((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__sll_64_w) 
            >> 0x1dU) | ((IData)((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__sll_64_w 
                                  >> 0x20U)) << 3U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x3bU] 
        = (0x1000000U | (((IData)(VL_MODDIV_QQQ(64, vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op1_id_ex, vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op2_id_ex)) 
                          << 0x1aU) | ((IData)((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__sll_64_w 
                                                >> 0x20U)) 
                                       >> 0x1dU)));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x3cU] 
        = (((IData)(VL_MODDIV_QQQ(64, vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op1_id_ex, vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op2_id_ex)) 
            >> 6U) | ((IData)((VL_MODDIV_QQQ(64, vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op1_id_ex, vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op2_id_ex) 
                               >> 0x20U)) << 0x1aU));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x3dU] 
        = ((IData)((VL_MODDIV_QQQ(64, vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op1_id_ex, vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__op2_id_ex) 
                    >> 0x20U)) >> 6U);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x3eU] = 0x10000U;
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0U];
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[1U];
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[0U][2U] 
        = (0x7fffffU & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[2U]);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[3U] 
            << 9U) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[2U] 
                      >> 0x17U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[4U] 
            << 9U) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[3U] 
                      >> 0x17U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[1U][2U] 
        = (0x7fffffU & ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[5U] 
                         << 9U) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[4U] 
                                   >> 0x17U)));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[2U][0U] 
        = ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[6U] 
            << 0x12U) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[5U] 
                         >> 0xeU));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[2U][1U] 
        = ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[7U] 
            << 0x12U) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[6U] 
                         >> 0xeU));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[2U][2U] 
        = (0x7fffffU & ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[8U] 
                         << 0x12U) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[7U] 
                                      >> 0xeU)));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[3U][0U] 
        = ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[9U] 
            << 0x1bU) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[8U] 
                         >> 5U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[3U][1U] 
        = ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0xaU] 
            << 0x1bU) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[9U] 
                         >> 5U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[3U][2U] 
        = (0x7fffffU & (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0xaU] 
                        >> 5U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[4U][0U] 
        = ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0xbU] 
            << 4U) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0xaU] 
                      >> 0x1cU));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[4U][1U] 
        = ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0xcU] 
            << 4U) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0xbU] 
                      >> 0x1cU));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[4U][2U] 
        = (0x7fffffU & ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0xdU] 
                         << 4U) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0xcU] 
                                   >> 0x1cU)));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[5U][0U] 
        = ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0xeU] 
            << 0xdU) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0xdU] 
                        >> 0x13U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[5U][1U] 
        = ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0xfU] 
            << 0xdU) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0xeU] 
                        >> 0x13U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[5U][2U] 
        = (0x7fffffU & ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x10U] 
                         << 0xdU) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0xfU] 
                                     >> 0x13U)));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[6U][0U] 
        = ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x11U] 
            << 0x16U) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x10U] 
                         >> 0xaU));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[6U][1U] 
        = ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x12U] 
            << 0x16U) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x11U] 
                         >> 0xaU));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[6U][2U] 
        = (0x7fffffU & ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x13U] 
                         << 0x16U) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x12U] 
                                      >> 0xaU)));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[7U][0U] 
        = ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x14U] 
            << 0x1fU) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x13U] 
                         >> 1U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[7U][1U] 
        = ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x15U] 
            << 0x1fU) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x14U] 
                         >> 1U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[7U][2U] 
        = (0x7fffffU & (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x15U] 
                        >> 1U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[8U][0U] 
        = ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x16U] 
            << 8U) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x15U] 
                      >> 0x18U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[8U][1U] 
        = ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x17U] 
            << 8U) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x16U] 
                      >> 0x18U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[8U][2U] 
        = (0x7fffffU & ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x18U] 
                         << 8U) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x17U] 
                                   >> 0x18U)));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[9U][0U] 
        = ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x19U] 
            << 0x11U) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x18U] 
                         >> 0xfU));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[9U][1U] 
        = ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x1aU] 
            << 0x11U) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x19U] 
                         >> 0xfU));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[9U][2U] 
        = (0x7fffffU & ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x1bU] 
                         << 0x11U) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x1aU] 
                                      >> 0xfU)));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[0xaU][0U] 
        = ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x1cU] 
            << 0x1aU) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x1bU] 
                         >> 6U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[0xaU][1U] 
        = ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x1dU] 
            << 0x1aU) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x1cU] 
                         >> 6U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[0xaU][2U] 
        = (0x7fffffU & (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x1dU] 
                        >> 6U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[0xbU][0U] 
        = ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x1eU] 
            << 3U) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x1dU] 
                      >> 0x1dU));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[0xbU][1U] 
        = ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x1fU] 
            << 3U) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x1eU] 
                      >> 0x1dU));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[0xbU][2U] 
        = (0x7fffffU & ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x20U] 
                         << 3U) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x1fU] 
                                   >> 0x1dU)));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[0xcU][0U] 
        = ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x21U] 
            << 0xcU) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x20U] 
                        >> 0x14U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[0xcU][1U] 
        = ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x22U] 
            << 0xcU) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x21U] 
                        >> 0x14U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[0xcU][2U] 
        = (0x7fffffU & ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x23U] 
                         << 0xcU) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x22U] 
                                     >> 0x14U)));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[0xdU][0U] 
        = ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x24U] 
            << 0x15U) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x23U] 
                         >> 0xbU));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[0xdU][1U] 
        = ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x25U] 
            << 0x15U) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x24U] 
                         >> 0xbU));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[0xdU][2U] 
        = (0x7fffffU & ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x26U] 
                         << 0x15U) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x25U] 
                                      >> 0xbU)));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[0xeU][0U] 
        = ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x27U] 
            << 0x1eU) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x26U] 
                         >> 2U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[0xeU][1U] 
        = ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x28U] 
            << 0x1eU) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x27U] 
                         >> 2U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[0xeU][2U] 
        = (0x7fffffU & (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x28U] 
                        >> 2U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[0xfU][0U] 
        = ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x29U] 
            << 7U) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x28U] 
                      >> 0x19U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[0xfU][1U] 
        = ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x2aU] 
            << 7U) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x29U] 
                      >> 0x19U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[0xfU][2U] 
        = (0x7fffffU & ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x2bU] 
                         << 7U) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x2aU] 
                                   >> 0x19U)));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[0x10U][0U] 
        = ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x2cU] 
            << 0x10U) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x2bU] 
                         >> 0x10U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[0x10U][1U] 
        = ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x2dU] 
            << 0x10U) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x2cU] 
                         >> 0x10U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[0x10U][2U] 
        = (0x7fffffU & ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x2eU] 
                         << 0x10U) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x2dU] 
                                      >> 0x10U)));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[0x11U][0U] 
        = ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x2fU] 
            << 0x19U) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x2eU] 
                         >> 7U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[0x11U][1U] 
        = ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x30U] 
            << 0x19U) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x2fU] 
                         >> 7U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[0x11U][2U] 
        = (0x7fffffU & (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x30U] 
                        >> 7U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[0x12U][0U] 
        = ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x31U] 
            << 2U) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x30U] 
                      >> 0x1eU));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[0x12U][1U] 
        = ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x32U] 
            << 2U) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x31U] 
                      >> 0x1eU));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[0x12U][2U] 
        = (0x7fffffU & ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x33U] 
                         << 2U) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x32U] 
                                   >> 0x1eU)));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[0x13U][0U] 
        = ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x34U] 
            << 0xbU) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x33U] 
                        >> 0x15U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[0x13U][1U] 
        = ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x35U] 
            << 0xbU) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x34U] 
                        >> 0x15U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[0x13U][2U] 
        = (0x7fffffU & ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x36U] 
                         << 0xbU) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x35U] 
                                     >> 0x15U)));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[0x14U][0U] 
        = ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x37U] 
            << 0x14U) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x36U] 
                         >> 0xcU));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[0x14U][1U] 
        = ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x38U] 
            << 0x14U) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x37U] 
                         >> 0xcU));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[0x14U][2U] 
        = (0x7fffffU & ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x39U] 
                         << 0x14U) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x38U] 
                                      >> 0xcU)));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[0x15U][0U] 
        = ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x3aU] 
            << 0x1dU) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x39U] 
                         >> 3U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[0x15U][1U] 
        = ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x3bU] 
            << 0x1dU) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x3aU] 
                         >> 3U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[0x15U][2U] 
        = (0x7fffffU & (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x3bU] 
                        >> 3U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[0x16U][0U] 
        = ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x3cU] 
            << 6U) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x3bU] 
                      >> 0x1aU));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[0x16U][1U] 
        = ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x3dU] 
            << 6U) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x3cU] 
                      >> 0x1aU));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list[0x16U][2U] 
        = (0x7fffffU & ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x3eU] 
                         << 6U) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT____Vcellinp__mux_alu_result__lut[0x3dU] 
                                   >> 0x1aU)));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list[0U] 
        = (0x7fffffU & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list[1U] 
        = (0x7fffffU & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list[2U] 
        = (0x7fffffU & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list[3U] 
        = (0x7fffffU & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list
           [3U][2U]);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list[4U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list
                            [4U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list
                                                                   [4U][0U])));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list[4U] 
        = (0x7fffffU & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list
           [4U][2U]);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list[5U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list
                            [5U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list
                                                                   [5U][0U])));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list[5U] 
        = (0x7fffffU & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list
           [5U][2U]);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list[6U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list
                            [6U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list
                                                                   [6U][0U])));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list[6U] 
        = (0x7fffffU & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list
           [6U][2U]);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list[7U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list
                            [7U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list
                                                                   [7U][0U])));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list[7U] 
        = (0x7fffffU & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list
           [7U][2U]);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list[8U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list
                            [8U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list
                                                                   [8U][0U])));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list[8U] 
        = (0x7fffffU & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list
           [8U][2U]);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list[9U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list
                            [9U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list
                                                                   [9U][0U])));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list[9U] 
        = (0x7fffffU & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list
           [9U][2U]);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list[0xaU] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list
                            [0xaU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list
                             [0xaU][0U])));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list[0xaU] 
        = (0x7fffffU & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list
           [0xaU][2U]);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list[0xbU] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list
                            [0xbU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list
                             [0xbU][0U])));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list[0xbU] 
        = (0x7fffffU & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list
           [0xbU][2U]);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list[0xcU] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list
                            [0xcU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list
                             [0xcU][0U])));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list[0xcU] 
        = (0x7fffffU & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list
           [0xcU][2U]);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list[0xdU] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list
                            [0xdU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list
                             [0xdU][0U])));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list[0xdU] 
        = (0x7fffffU & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list
           [0xdU][2U]);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list[0xeU] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list
                            [0xeU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list
                             [0xeU][0U])));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list[0xeU] 
        = (0x7fffffU & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list
           [0xeU][2U]);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list[0xfU] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list
                            [0xfU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list
                             [0xfU][0U])));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list[0xfU] 
        = (0x7fffffU & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list
           [0xfU][2U]);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list[0x10U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list
                            [0x10U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list
                             [0x10U][0U])));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list[0x10U] 
        = (0x7fffffU & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list
           [0x10U][2U]);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list[0x11U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list
                            [0x11U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list
                             [0x11U][0U])));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list[0x11U] 
        = (0x7fffffU & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list
           [0x11U][2U]);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list[0x12U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list
                            [0x12U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list
                             [0x12U][0U])));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list[0x12U] 
        = (0x7fffffU & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list
           [0x12U][2U]);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list[0x13U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list
                            [0x13U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list
                             [0x13U][0U])));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list[0x13U] 
        = (0x7fffffU & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list
           [0x13U][2U]);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list[0x14U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list
                            [0x14U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list
                             [0x14U][0U])));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list[0x14U] 
        = (0x7fffffU & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list
           [0x14U][2U]);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list[0x15U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list
                            [0x15U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list
                             [0x15U][0U])));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list[0x15U] 
        = (0x7fffffU & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list
           [0x15U][2U]);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list[0x16U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list
                            [0x16U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list
                             [0x16U][0U])));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list[0x16U] 
        = (0x7fffffU & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__pair_list
           [0x16U][2U]);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__alu_sel 
                               == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__hit 
        = (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__alu_sel 
           == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__alu_sel 
                                  == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__hit) 
           | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__alu_sel 
              == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__alu_sel 
                                  == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__hit) 
           | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__alu_sel 
              == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__alu_sel 
                                  == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__hit) 
           | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__alu_sel 
              == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__alu_sel 
                                  == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list
                                  [4U])))) & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__hit) 
           | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__alu_sel 
              == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__alu_sel 
                                  == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list
                                  [5U])))) & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__hit) 
           | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__alu_sel 
              == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__alu_sel 
                                  == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list
                                  [6U])))) & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__hit) 
           | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__alu_sel 
              == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__alu_sel 
                                  == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list
                                  [7U])))) & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__hit) 
           | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__alu_sel 
              == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__alu_sel 
                                  == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list
                                  [8U])))) & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__hit) 
           | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__alu_sel 
              == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__alu_sel 
                                  == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list
                                  [9U])))) & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__hit) 
           | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__alu_sel 
              == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__alu_sel 
                                  == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list
                                  [0xaU])))) & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__hit) 
           | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__alu_sel 
              == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__alu_sel 
                                  == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list
                                  [0xbU])))) & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list
              [0xbU]));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__hit) 
           | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__alu_sel 
              == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list
              [0xbU]));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__alu_sel 
                                  == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list
                                  [0xcU])))) & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list
              [0xcU]));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__hit) 
           | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__alu_sel 
              == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list
              [0xcU]));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__alu_sel 
                                  == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list
                                  [0xdU])))) & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list
              [0xdU]));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__hit) 
           | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__alu_sel 
              == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list
              [0xdU]));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__alu_sel 
                                  == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list
                                  [0xeU])))) & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list
              [0xeU]));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__hit) 
           | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__alu_sel 
              == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list
              [0xeU]));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__alu_sel 
                                  == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list
                                  [0xfU])))) & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list
              [0xfU]));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__hit) 
           | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__alu_sel 
              == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list
              [0xfU]));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__alu_sel 
                                  == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list
                                  [0x10U])))) & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list
              [0x10U]));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__hit) 
           | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__alu_sel 
              == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list
              [0x10U]));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__alu_sel 
                                  == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list
                                  [0x11U])))) & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list
              [0x11U]));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__hit) 
           | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__alu_sel 
              == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list
              [0x11U]));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__alu_sel 
                                  == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list
                                  [0x12U])))) & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list
              [0x12U]));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__hit) 
           | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__alu_sel 
              == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list
              [0x12U]));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__alu_sel 
                                  == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list
                                  [0x13U])))) & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list
              [0x13U]));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__hit) 
           | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__alu_sel 
              == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list
              [0x13U]));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__alu_sel 
                                  == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list
                                  [0x14U])))) & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list
              [0x14U]));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__hit) 
           | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__alu_sel 
              == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list
              [0x14U]));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__alu_sel 
                                  == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list
                                  [0x15U])))) & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list
              [0x15U]));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__hit) 
           | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__alu_sel 
              == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list
              [0x15U]));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__alu_sel 
                                  == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list
                                  [0x16U])))) & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__data_list
              [0x16U]));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__hit) 
           | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__alu_sel 
              == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__key_list
              [0x16U]));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__result 
        = ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__hit)
            ? vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__alu__DOT__mux_alu_result__DOT__i0__DOT__lut_out
            : 0ULL);
    if ((3U == (0x7fU & vlSelf->now_inst))) {
        Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(
                                                              ((3U 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelf->now_inst))
                                                                ? vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__result
                                                                : 0ULL), vlSelf->__Vtask_pmem_read__2__rdata);
        vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__ram_rdata_mem_ex 
            = vlSelf->__Vtask_pmem_read__2__rdata;
    } else {
        vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__ram_rdata_mem_ex = 0ULL;
    }
    if ((0x23U == (0x7fU & vlSelf->now_inst))) {
        Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(
                                                               ((0x23U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSelf->now_inst))
                                                                 ? vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__result
                                                                 : 0ULL), 
                                                               ((0x23U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSelf->now_inst))
                                                                 ? vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__rdata2_id_regs
                                                                 : 0ULL), (IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_w_mask));
    }
    __Vtemp681[3U] = ((0x3fU & ((IData)((((QData)((IData)(
                                                          (- (IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__ram_rdata_mem_ex 
                                                                                >> 0x1fU))))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__ram_rdata_mem_ex)))) 
                                >> 0x14U)) | ((0xfc0U 
                                               & ((IData)(
                                                          (((QData)((IData)(
                                                                            (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__ram_rdata_mem_ex 
                                                                                >> 0x1fU))))))) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__ram_rdata_mem_ex)))) 
                                                  >> 0x14U)) 
                                              | ((IData)(
                                                         ((((QData)((IData)(
                                                                            (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__ram_rdata_mem_ex 
                                                                                >> 0x1fU))))))) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__ram_rdata_mem_ex))) 
                                                          >> 0x20U)) 
                                                 << 0xcU)));
    __Vtemp681[4U] = (0x20000U | ((0x3fU & ((IData)(
                                                    ((((QData)((IData)(
                                                                       (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__ram_rdata_mem_ex 
                                                                                >> 0x1fU))))))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__ram_rdata_mem_ex))) 
                                                     >> 0x20U)) 
                                            >> 0x14U)) 
                                  | (0xfc0U & ((IData)(
                                                       ((((QData)((IData)(
                                                                          (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__ram_rdata_mem_ex 
                                                                                >> 0x1fU))))))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__ram_rdata_mem_ex))) 
                                                        >> 0x20U)) 
                                               >> 0x14U))));
    __Vtemp688[9U] = ((0x3ffffU & ((IData)((((- (QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__ram_rdata_mem_ex 
                                                                            >> 0xfU)))))) 
                                             << 0x10U) 
                                            | (QData)((IData)(
                                                              (0xffffU 
                                                               & (IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__ram_rdata_mem_ex)))))) 
                                   >> 8U)) | ((0xfc0000U 
                                               & ((IData)(
                                                          (((- (QData)((IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__ram_rdata_mem_ex 
                                                                                >> 0xfU)))))) 
                                                            << 0x10U) 
                                                           | (QData)((IData)(
                                                                             (0xffffU 
                                                                              & (IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__ram_rdata_mem_ex)))))) 
                                                  >> 8U)) 
                                              | ((IData)(
                                                         ((((- (QData)((IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__ram_rdata_mem_ex 
                                                                                >> 0xfU)))))) 
                                                            << 0x10U) 
                                                           | (QData)((IData)(
                                                                             (0xffffU 
                                                                              & (IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__ram_rdata_mem_ex))))) 
                                                          >> 0x20U)) 
                                                 << 0x18U)));
    __Vtemp688[0xaU] = (0x10000000U | ((0x3ffffU & 
                                        ((IData)(((
                                                   ((- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__ram_rdata_mem_ex 
                                                                                >> 0xfU)))))) 
                                                    << 0x10U) 
                                                   | (QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__ram_rdata_mem_ex))))) 
                                                  >> 0x20U)) 
                                         >> 8U)) | 
                                       (((IData)((((QData)((IData)(
                                                                   (- (IData)(
                                                                              (1U 
                                                                               & (IData)(
                                                                                (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__ram_rdata_mem_ex 
                                                                                >> 0x1fU))))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__ram_rdata_mem_ex)))) 
                                         << 0x1eU) 
                                        | (0xfc0000U 
                                           & ((IData)(
                                                      ((((- (QData)((IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__ram_rdata_mem_ex 
                                                                                >> 0xfU)))))) 
                                                         << 0x10U) 
                                                        | (QData)((IData)(
                                                                          (0xffffU 
                                                                           & (IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__ram_rdata_mem_ex))))) 
                                                       >> 0x20U)) 
                                              >> 8U)))));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT____Vcellinp__mem_r_data_mux__lut[0U] 
        = (IData)((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__ram_rdata_mem_ex)))));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT____Vcellinp__mem_r_data_mux__lut[1U] 
        = (IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__ram_rdata_mem_ex)))) 
                   >> 0x20U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT____Vcellinp__mem_r_data_mux__lut[2U] 
        = (1U | ((IData)((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__ram_rdata_mem_ex))))) 
                 << 6U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT____Vcellinp__mem_r_data_mux__lut[3U] 
        = (((IData)((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__ram_rdata_mem_ex))))) 
            >> 0x1aU) | ((IData)(((QData)((IData)((0xffffU 
                                                   & (IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__ram_rdata_mem_ex)))) 
                                  >> 0x20U)) << 6U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT____Vcellinp__mem_r_data_mux__lut[4U] 
        = (0x80U | (((IData)((QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__ram_rdata_mem_ex))) 
                     << 0xcU) | ((IData)(((QData)((IData)(
                                                          (0xffffU 
                                                           & (IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__ram_rdata_mem_ex)))) 
                                          >> 0x20U)) 
                                 >> 0x1aU)));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT____Vcellinp__mem_r_data_mux__lut[5U] 
        = (((IData)((QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__ram_rdata_mem_ex))) 
            >> 0x14U) | ((IData)(((QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__ram_rdata_mem_ex)) 
                                  >> 0x20U)) << 0xcU));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT____Vcellinp__mem_r_data_mux__lut[6U] 
        = (0x4000U | (((IData)((((- (QData)((IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__ram_rdata_mem_ex 
                                                                >> 7U)))))) 
                                 << 8U) | (QData)((IData)(
                                                          (0xffU 
                                                           & (IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__ram_rdata_mem_ex)))))) 
                       << 0x12U) | ((IData)(((QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__ram_rdata_mem_ex)) 
                                             >> 0x20U)) 
                                    >> 0x14U)));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT____Vcellinp__mem_r_data_mux__lut[7U] 
        = (((IData)((((- (QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__ram_rdata_mem_ex 
                                                        >> 7U)))))) 
                      << 8U) | (QData)((IData)((0xffU 
                                                & (IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__ram_rdata_mem_ex)))))) 
            >> 0xeU) | ((IData)(((((- (QData)((IData)(
                                                      (1U 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__ram_rdata_mem_ex 
                                                                  >> 7U)))))) 
                                   << 8U) | (QData)((IData)(
                                                            (0xffU 
                                                             & (IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__ram_rdata_mem_ex))))) 
                                 >> 0x20U)) << 0x12U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT____Vcellinp__mem_r_data_mux__lut[8U] 
        = (0x200000U | (((IData)((((- (QData)((IData)(
                                                      (1U 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__ram_rdata_mem_ex 
                                                                  >> 0xfU)))))) 
                                   << 0x10U) | (QData)((IData)(
                                                               (0xffffU 
                                                                & (IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__ram_rdata_mem_ex)))))) 
                         << 0x18U) | ((IData)(((((- (QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__ram_rdata_mem_ex 
                                                                                >> 7U)))))) 
                                                 << 8U) 
                                                | (QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__ram_rdata_mem_ex))))) 
                                               >> 0x20U)) 
                                      >> 0xeU)));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT____Vcellinp__mem_r_data_mux__lut[9U] 
        = __Vtemp688[9U];
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT____Vcellinp__mem_r_data_mux__lut[0xaU] 
        = __Vtemp688[0xaU];
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT____Vcellinp__mem_r_data_mux__lut[0xbU] 
        = ((0x3ffffU & ((IData)((((QData)((IData)((- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__ram_rdata_mem_ex 
                                                                         >> 0x1fU))))))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__ram_rdata_mem_ex)))) 
                        >> 2U)) | (__Vtemp681[3U] << 0x12U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT____Vcellinp__mem_r_data_mux__lut[0xcU] 
        = ((__Vtemp681[3U] >> 0xeU) | (__Vtemp681[4U] 
                                       << 0x12U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT____Vcellinp__mem_r_data_mux__lut[0xdU] 
        = (__Vtemp681[4U] >> 0xeU);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT____Vcellinp__mem_r_data_mux__lut[0U];
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT____Vcellinp__mem_r_data_mux__lut[1U];
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__pair_list[0U][2U] 
        = (0x3fU & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT____Vcellinp__mem_r_data_mux__lut[2U]);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT____Vcellinp__mem_r_data_mux__lut[3U] 
            << 0x1aU) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT____Vcellinp__mem_r_data_mux__lut[2U] 
                         >> 6U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT____Vcellinp__mem_r_data_mux__lut[4U] 
            << 0x1aU) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT____Vcellinp__mem_r_data_mux__lut[3U] 
                         >> 6U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__pair_list[1U][2U] 
        = (0x3fU & (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT____Vcellinp__mem_r_data_mux__lut[4U] 
                    >> 6U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__pair_list[2U][0U] 
        = ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT____Vcellinp__mem_r_data_mux__lut[5U] 
            << 0x14U) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT____Vcellinp__mem_r_data_mux__lut[4U] 
                         >> 0xcU));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__pair_list[2U][1U] 
        = ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT____Vcellinp__mem_r_data_mux__lut[6U] 
            << 0x14U) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT____Vcellinp__mem_r_data_mux__lut[5U] 
                         >> 0xcU));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__pair_list[2U][2U] 
        = (0x3fU & (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT____Vcellinp__mem_r_data_mux__lut[6U] 
                    >> 0xcU));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__pair_list[3U][0U] 
        = ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT____Vcellinp__mem_r_data_mux__lut[7U] 
            << 0xeU) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT____Vcellinp__mem_r_data_mux__lut[6U] 
                        >> 0x12U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__pair_list[3U][1U] 
        = ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT____Vcellinp__mem_r_data_mux__lut[8U] 
            << 0xeU) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT____Vcellinp__mem_r_data_mux__lut[7U] 
                        >> 0x12U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__pair_list[3U][2U] 
        = (0x3fU & (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT____Vcellinp__mem_r_data_mux__lut[8U] 
                    >> 0x12U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__pair_list[4U][0U] 
        = ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT____Vcellinp__mem_r_data_mux__lut[9U] 
            << 8U) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT____Vcellinp__mem_r_data_mux__lut[8U] 
                      >> 0x18U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__pair_list[4U][1U] 
        = ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT____Vcellinp__mem_r_data_mux__lut[0xaU] 
            << 8U) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT____Vcellinp__mem_r_data_mux__lut[9U] 
                      >> 0x18U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__pair_list[4U][2U] 
        = (0x3fU & (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT____Vcellinp__mem_r_data_mux__lut[0xaU] 
                    >> 0x18U));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__pair_list[5U][0U] 
        = ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT____Vcellinp__mem_r_data_mux__lut[0xbU] 
            << 2U) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT____Vcellinp__mem_r_data_mux__lut[0xaU] 
                      >> 0x1eU));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__pair_list[5U][1U] 
        = ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT____Vcellinp__mem_r_data_mux__lut[0xcU] 
            << 2U) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT____Vcellinp__mem_r_data_mux__lut[0xbU] 
                      >> 0x1eU));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__pair_list[5U][2U] 
        = (0x3fU & ((vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT____Vcellinp__mem_r_data_mux__lut[0xdU] 
                     << 2U) | (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT____Vcellinp__mem_r_data_mux__lut[0xcU] 
                               >> 0x1eU)));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__key_list[0U] 
        = (0x3fU & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__key_list[1U] 
        = (0x3fU & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__key_list[2U] 
        = (0x3fU & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__key_list[3U] 
        = (0x3fU & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__pair_list
           [3U][2U]);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__data_list[4U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__pair_list
                            [4U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__pair_list
                                                                   [4U][0U])));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__key_list[4U] 
        = (0x3fU & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__pair_list
           [4U][2U]);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__data_list[5U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__pair_list
                            [5U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__pair_list
                                                                   [5U][0U])));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__key_list[5U] 
        = (0x3fU & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__pair_list
           [5U][2U]);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__mem_r_wdth) 
                               == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__mem_r_wdth) 
           == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__mem_r_wdth) 
                                  == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__mem_r_wdth) 
              == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__mem_r_wdth) 
                                  == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__mem_r_wdth) 
              == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__mem_r_wdth) 
                                  == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__mem_r_wdth) 
              == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__mem_r_wdth) 
                                  == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__key_list
                                  [4U])))) & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__mem_r_wdth) 
              == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__mem_r_wdth) 
                                  == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__key_list
                                  [5U])))) & vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__mem_r_wdth) 
              == vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data 
        = ((IData)(vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__hit)
            ? vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__EXU__DOT__mem_r_data_mux__DOT__i0__DOT__lut_out
            : vlSelf->top__DOT__ysyx_22050019_core_inst__DOT__ram_rdata_mem_ex);
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vtop___024root___change_request_1(Vtop___024root* vlSelf);

VL_INLINE_OPT QData Vtop___024root___change_request(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request\n"); );
    // Body
    return (Vtop___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vtop___024root___change_request_1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
}
#endif  // VL_DEBUG
