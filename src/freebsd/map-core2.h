/****************************/
/* THIS IS OPEN SOURCE CODE */
/****************************/

/* 
* File:    freebsd-map-core2.h
* CVS:     $Id$
* Author:  George Neville-Neil
*          gnn@freebsd.org
*/

#ifndef FreeBSD_MAP_CORE2
#define FreeBSD_MAP_CORE2

enum NativeEvent_Value_Core2Processor {
	PNE_CORE2_BACLEARS = PAPI_NATIVE_MASK ,
	PNE_CORE2_BOGUS_BR,
	PNE_CORE2_BR_BAC_MISSP_EXEC,
	PNE_CORE2_BR_CALL_MISSP_EXEC,
	PNE_CORE2_BR_CALL_EXEC,
	PNE_CORE2_BR_CND_EXEC,
	PNE_CORE2_BR_CND_MISSP_EXEC,
	PNE_CORE2_BR_IND_CALL_EXEC,
	PNE_CORE2_BR_IND_EXEC,
	PNE_CORE2_BR_IND_MISSP_EXEC,
	PNE_CORE2_BR_INST_DECODED,
	PNE_CORE2_BR_INST_EXEC,
	PNE_CORE2_BR_INST_RETIRED_ANY,
	PNE_CORE2_BR_INST_RETIRED_MISPRED,
	PNE_CORE2_BR_INST_RETIRED_MISPRED_NOT_TAKEN,
	PNE_CORE2_BR_INST_RETIRED_MISPRED_TAKEN,
	PNE_CORE2_BR_INST_RETIRED_PRED_NOT_TAKEN,
	PNE_CORE2_BR_INST_RETIRED_PRED_TAKEN,
	PNE_CORE2_BR_INST_RETIRED_TAKEN,
	PNE_CORE2_BR_MISSP_EXEC,
	PNE_CORE2_BR_RET_MISSP_EXEC,
	PNE_CORE2_BR_RET_BAC_MISSP_EXEC,
	PNE_CORE2_BR_RET_EXEC,
	PNE_CORE2_BR_TKN_BUBBLE_1,
	PNE_CORE2_BR_TKN_BUBBLE_2,
	PNE_CORE2_BUSQ_EMPTY,
	PNE_CORE2_BUS_BNR_DRV,
	PNE_CORE2_BUS_DATA_RCV,
	PNE_CORE2_BUS_DRDY_CLOCKS,
	PNE_CORE2_BUS_HIT_DRV,
	PNE_CORE2_BUS_HITM_DRV,
	PNE_CORE2_BUS_IO_WAIT,
	PNE_CORE2_BUS_LOCK_CLOCKS,
	PNE_CORE2_BUS_REQUEST_OUTSTANDING,
	PNE_CORE2_BUS_TRANS_ANY,
	PNE_CORE2_BUS_TRANS_BRD,
	PNE_CORE2_BUS_TRANS_BURST,
	PNE_CORE2_BUS_TRANS_DEF,
	PNE_CORE2_BUS_TRANS_IFETCH,
	PNE_CORE2_BUS_TRANS_INVAL,
	PNE_CORE2_BUS_TRANS_IO,
	PNE_CORE2_BUS_TRANS_MEM,
	PNE_CORE2_BUS_TRANS_P,
	PNE_CORE2_BUS_TRANS_PWR,
	PNE_CORE2_BUS_TRANS_RFO,
	PNE_CORE2_BUS_TRANS_WB,
	PNE_CORE2_CMP_SNOOP,
	PNE_CORE2_CPU_CLK_UNHALTED_BUS,
	PNE_CORE2_CPU_CLK_UNHALTED_CORE_P,
	PNE_CORE2_CPU_CLK_UNHALTED_NO_OTHER,
	PNE_CORE2_CYCLES_DIV_BUSY,
	PNE_CORE2_CYCLES_INT_MASKED,
	PNE_CORE2_CYCLES_INT_PENDING_AND_MASKED,
	PNE_CORE2_CYCLES_L1I_MEM_STALLED,
	PNE_CORE2_DELAYED_BYPASS_FP,
	PNE_CORE2_DELAYED_BYPASS_LOAD,
	PNE_CORE2_DELAYED_BYPASS_SIMD,
	PNE_CORE2_DIV,
	PNE_CORE2_DTLB_MISSES_ANY,
	PNE_CORE2_DTLB_MISSES_L0_MISS_LD,
	PNE_CORE2_DTLB_MISSES_MISS_LD,
	PNE_CORE2_DTLB_MISSES_MISS_ST,
	PNE_CORE2_EIST_TRANS,
	PNE_CORE2_ESP_ADDITIONS,
	PNE_CORE2_ESP_SYNCH,
	PNE_CORE2_EXT_SNOOP,
	PNE_CORE2_FP_ASSIST,
	PNE_CORE2_FP_COMP_OPS_EXE,
	PNE_CORE2_FP_MMX_TRANS_TO_FP,
	PNE_CORE2_FP_MMX_TRANS_TO_MMX,
	PNE_CORE2_HW_INT_RCV,
	PNE_CORE2_IDLE_DURING_DIV,
	PNE_CORE2_ILD_STALL,
	PNE_CORE2_INST_QUEUE_FULL,
	PNE_CORE2_INST_RETIRED_ANY_P,
	PNE_CORE2_INST_RETIRED_LOADS,
	PNE_CORE2_INST_RETIRED_OTHER,
	PNE_CORE2_INST_RETIRED_STORES,
	PNE_CORE2_ITLB_FLUSH,
	PNE_CORE2_ITLB_LARGE_MISS,
	PNE_CORE2_ITLB_MISSES,
	PNE_CORE2_ITLB_SMALL_MISS,
	PNE_CORE2_ITLB_MISS_RETIRED,
	PNE_CORE2_L1D_ALL_CACHE_REF,
	PNE_CORE2_L1D_ALL_REF,
	PNE_CORE2_L1D_CACHE_LD,
	PNE_CORE2_L1D_CACHE_LOCK,
	PNE_CORE2_L1D_CACHE_LOCK_DURATION,
	PNE_CORE2_L1D_CACHE_ST,
	PNE_CORE2_L1D_M_EVICT,
	PNE_CORE2_L1D_M_REPL,
	PNE_CORE2_L1D_PEND_MISS,
	PNE_CORE2_L1D_PREFETCH_REQUESTS,
	PNE_CORE2_L1D_REPL,
	PNE_CORE2_L1D_SPLIT_LOADS,
	PNE_CORE2_L1D_SPLIT_STORES,
	PNE_CORE2_L1I_MISSES,
	PNE_CORE2_L1I_READS,
	PNE_CORE2_L2_ADS,
	PNE_CORE2_L2_DBUS_BUSY_RD,
	PNE_CORE2_L2_IFETCH,
	PNE_CORE2_L2_LD,
	PNE_CORE2_L2_LINES_IN,
	PNE_CORE2_L2_LINES_OUT,
	PNE_CORE2_L2_LOCK,
	PNE_CORE2_L2_M_LINES_IN,
	PNE_CORE2_L2_M_LINES_OUT,
	PNE_CORE2_L2_NO_REQ,
	PNE_CORE2_L2_REJECT_BUSQ,
	PNE_CORE2_L2_RQSTS,
	PNE_CORE2_L2_RQSTS_SELF_DEMAND_I_STATE,
	PNE_CORE2_L2_RQSTS_SELF_DEMAND_MESI,
	PNE_CORE2_L2_ST,
	PNE_CORE2_LOAD_BLOCK_L1D,
	PNE_CORE2_LOAD_BLOCK_OVERLAP_STORE,
	PNE_CORE2_LOAD_BLOCK_STA,
	PNE_CORE2_LOAD_BLOCK_STD,
	PNE_CORE2_LOAD_BLOCK_UNTIL_RETIRE,
	PNE_CORE2_LOAD_HIT_PRE,
	PNE_CORE2_MACHINE_NUKES_MEM_ORDER,
	PNE_CORE2_MACHINE_NUKES_SMC,
	PNE_CORE2_MACRO_INSTS_CISC_DECODED,
	PNE_CORE2_MACRO_INSTS_DECODED,
	PNE_CORE2_MEMORY_DISAMBIGUATION_RESET,
	PNE_CORE2_MEMORY_DISAMBIGUATION_SUCCESS,
	PNE_CORE2_MEM_LOAD_RETIRED_DTLB_MISS,
	PNE_CORE2_MEM_LOAD_RETIRED_L1D_LINE_MISS,
	PNE_CORE2_MEM_LOAD_RETIRED_L1D_MISS,
	PNE_CORE2_MEM_LOAD_RETIRED_L2_LINE_MISS,
	PNE_CORE2_MEM_LOAD_RETIRED_L2_MISS,
	PNE_CORE2_MUL,
	PNE_CORE2_PAGE_WALKS_COUNT,
	PNE_CORE2_PAGE_WALKS_CYCLES,
	PNE_CORE2_PREF_RQSTS_DN,
	PNE_CORE2_PREF_RQSTS_UP,
	PNE_CORE2_RAT_STALLS_ANY,
	PNE_CORE2_RAT_STALLS_FLAGS,
	PNE_CORE2_RAT_STALLS_FPSW,
	PNE_CORE2_RAT_STALLS_PARTIAL_CYCLES,
	PNE_CORE2_RAT_STALLS_ROB_READ_PORT,
	PNE_CORE2_RESOURCE_STALLS_ANY,
	PNE_CORE2_RESOURCE_STALLS_BR_MISS_CLEAR,
	PNE_CORE2_RESOURCE_STALLS_FPCW,
	PNE_CORE2_RESOURCE_STALLS_LD_ST,
	PNE_CORE2_RESOURCE_STALLS_ROB_FULL,
	PNE_CORE2_RESOURCE_STALLS_RS_FULL,
	PNE_CORE2_RS_UOPS_DISPATCHED,
	PNE_CORE2_RS_UOPS_DISPATCHED_PORT0,
	PNE_CORE2_RS_UOPS_DISPATCHED_PORT1,
	PNE_CORE2_RS_UOPS_DISPATCHED_PORT2,
	PNE_CORE2_RS_UOPS_DISPATCHED_PORT3,
	PNE_CORE2_RS_UOPS_DISPATCHED_PORT4,
	PNE_CORE2_RS_UOPS_DISPATCHED_PORT5,
	PNE_CORE2_SB_DRAIN_CYCLES,
	PNE_CORE2_SEGMENT_REG_LOADS,
	PNE_CORE2_SEG_REG_RENAMES_ANY,
	PNE_CORE2_SEG_REG_RENAMES_DS,
	PNE_CORE2_SEG_REG_RENAMES_ES,
	PNE_CORE2_SEG_REG_RENAMES_FS,
	PNE_CORE2_SEG_REG_RENAMES_GS,
	PNE_CORE2_SEG_RENAME_STALLS_ANY,
	PNE_CORE2_SEG_RENAME_STALLS_DS,
	PNE_CORE2_SEG_RENAME_STALLS_ES,
	PNE_CORE2_SEG_RENAME_STALLS_FS,
	PNE_CORE2_SEG_RENAME_STALLS_GS,
	PNE_CORE2_SIMD_ASSIST,
	PNE_CORE2_SIMD_COMP_INST_RETIRED_PACKED_DOUBLE,
	PNE_CORE2_SIMD_COMP_INST_RETIRED_PACKED_SINGLE,
	PNE_CORE2_SIMD_COMP_INST_RETIRED_SCALAR_DOUBLE,
	PNE_CORE2_SIMD_COMP_INST_RETIRED_SCALAR_SINGLE,
	PNE_CORE2_SIMD_INSTR_RETIRED,
	PNE_CORE2_SIMD_INST_RETIRED_ANY,
	PNE_CORE2_SIMD_INST_RETIRED_PACKED_DOUBLE,
	PNE_CORE2_SIMD_INST_RETIRED_PACKED_SINGLE,
	PNE_CORE2_SIMD_INST_RETIRED_SCALAR_DOUBLE,
	PNE_CORE2_SIMD_INST_RETIRED_SCALAR_SINGLE,
	PNE_CORE2_SIMD_INST_RETIRED_VECTOR,
	PNE_CORE2_SIMD_SAT_INSTR_RETIRED,
	PNE_CORE2_SIMD_SAT_UOP_EXEC,
	PNE_CORE2_SIMD_UOPS_EXEC,
	PNE_CORE2_SIMD_UOP_TYPE_EXEC_ARITHMETIC,
	PNE_CORE2_SIMD_UOP_TYPE_EXEC_LOGICAL,
	PNE_CORE2_SIMD_UOP_TYPE_EXEC_MUL,
	PNE_CORE2_SIMD_UOP_TYPE_EXEC_PACK,
	PNE_CORE2_SIMD_UOP_TYPE_EXEC_SHIFT,
	PNE_CORE2_SIMD_UOP_TYPE_EXEC_UNPACK,
	PNE_CORE2_SNOOP_STALL_DRV,
	PNE_CORE2_SSE_PRE_EXEC_L1,
	PNE_CORE2_SSE_PRE_EXEC_L2,
	PNE_CORE2_SSE_PRE_EXEC_NTA,
	PNE_CORE2_SSE_PRE_EXEC_STORES,
	PNE_CORE2_SSE_PRE_MISS_L1,
	PNE_CORE2_SSE_PRE_MISS_L2,
	PNE_CORE2_SSE_PRE_MISS_NTA,
	PNE_CORE2_STORE_BLOCK_ORDER,
	PNE_CORE2_STORE_BLOCK_SNOOP,
	PNE_CORE2_THERMAL_TRIP,
	PNE_CORE2_UOPS_RETIRED_ANY,
	PNE_CORE2_UOPS_RETIRED_FUSED,
	PNE_CORE2_UOPS_RETIRED_LD_IND_BR,
	PNE_CORE2_UOPS_RETIRED_MACRO_FUSION,
	PNE_CORE2_UOPS_RETIRED_NON_FUSED,
	PNE_CORE2_UOPS_RETIRED_STD_STA,
	PNE_CORE2_X87_OPS_RETIRED_ANY,
	PNE_CORE2_X87_OPS_RETIRED_FXCH,
	PNE_CORE2_NATNAME_GUARD
};

extern Native_Event_LabelDescription_t Core2Processor_info[];
extern hwi_search_t Core2Processor_map[];

#endif