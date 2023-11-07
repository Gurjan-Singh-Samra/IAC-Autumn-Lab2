// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsigdelay.h for the primary calling header

#include "verilated.h"

#include "Vsigdelay___024root.h"

VL_ATTR_COLD void Vsigdelay___024root___initial__TOP__0(Vsigdelay___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsigdelay___024root___initial__TOP__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_ha00c3b92__0;
    // Body
    VL_WRITEF("Loading rom.\n");
    __Vtemp_ha00c3b92__0[0U] = 0x2e6d656dU;
    __Vtemp_ha00c3b92__0[1U] = 0x65726f6dU;
    __Vtemp_ha00c3b92__0[2U] = 0x73696eU;
    VL_READMEM_N(true, 8, 512, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_ha00c3b92__0)
                 ,  &(vlSelf->sigdelay__DOT__sigRam__DOT__ram_array)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vsigdelay___024root___eval_initial(Vsigdelay___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsigdelay___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
    Vsigdelay___024root___initial__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vsigdelay___024root___eval_settle(Vsigdelay___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsigdelay___024root___eval_settle\n"); );
}

VL_ATTR_COLD void Vsigdelay___024root___final(Vsigdelay___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsigdelay___024root___final\n"); );
}

VL_ATTR_COLD void Vsigdelay___024root___ctor_var_reset(Vsigdelay___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsigdelay___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->en = VL_RAND_RESET_I(1);
    vlSelf->wr = VL_RAND_RESET_I(1);
    vlSelf->rd = VL_RAND_RESET_I(1);
    vlSelf->incr = VL_RAND_RESET_I(9);
    vlSelf->offset = VL_RAND_RESET_I(9);
    vlSelf->mic_signal = VL_RAND_RESET_I(8);
    vlSelf->delayed_signal = VL_RAND_RESET_I(8);
    vlSelf->sigdelay__DOT__address = VL_RAND_RESET_I(9);
    for (int __Vi0=0; __Vi0<512; ++__Vi0) {
        vlSelf->sigdelay__DOT__sigRam__DOT__ram_array[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__Vdly__sigdelay__DOT__address = VL_RAND_RESET_I(9);
}
