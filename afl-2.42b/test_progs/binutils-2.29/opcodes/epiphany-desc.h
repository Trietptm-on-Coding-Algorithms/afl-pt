/* CPU data header for epiphany.

THIS FILE IS MACHINE GENERATED WITH CGEN.

Copyright (C) 1996-2017 Free Software Foundation, Inc.

This file is part of the GNU Binutils and/or GDB, the GNU debugger.

   This file is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3, or (at your option)
   any later version.

   It is distributed in the hope that it will be useful, but WITHOUT
   ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
   or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public
   License for more details.

   You should have received a copy of the GNU General Public License along
   with this program; if not, write to the Free Software Foundation, Inc.,
   51 Franklin Street - Fifth Floor, Boston, MA 02110-1301, USA.

*/

#ifndef EPIPHANY_CPU_H
#define EPIPHANY_CPU_H

#ifdef __cplusplus
extern "C" {
#endif

#define CGEN_ARCH epiphany

/* Given symbol S, return epiphany_cgen_<S>.  */
#define CGEN_SYM(s) epiphany##_cgen_##s


/* Selected cpu families.  */
#define HAVE_CPU_EPIPHANYBF
#define HAVE_CPU_EPIPHANYMF

#define CGEN_INSN_LSB0_P 1

/* Minimum size of any insn (in bytes).  */
#define CGEN_MIN_INSN_SIZE 2

/* Maximum size of any insn (in bytes).  */
#define CGEN_MAX_INSN_SIZE 4

#define CGEN_INT_INSN_P 1

/* Maximum number of syntax elements in an instruction.  */
#define CGEN_ACTUAL_MAX_SYNTAX_ELEMENTS 19

/* CGEN_MNEMONIC_OPERANDS is defined if mnemonics have operands.
   e.g. In "b,a foo" the ",a" is an operand.  If mnemonics have operands
   we can't hash on everything up to the space.  */
#define CGEN_MNEMONIC_OPERANDS

/* Maximum number of fields in an instruction.  */
#define CGEN_ACTUAL_MAX_IFMT_OPERANDS 10

/* Enums.  */

/* Enum declaration for opc enums.  */
typedef enum insn_opc {
  OP4_BRANCH16, OP4_LDSTR16X, OP4_FLOW16, OP4_IMM16
 , OP4_LDSTR16D, OP4_LDSTR16P, OP4_LSHIFT16, OP4_DSP16
 , OP4_BRANCH, OP4_LDSTRX, OP4_ALU16, OP4_IMM32
 , OP4_LDSTRD, OP4_LDSTRP, OP4_ASHIFT16, OP4_MISC
} INSN_OPC;

/* Enum declaration for memory access width.  */
typedef enum insn_wordsize {
  OPW_BYTE, OPW_SHORT, OPW_WORD, OPW_DOUBLE
} INSN_WORDSIZE;

/* Enum declaration for memory access direction.  */
typedef enum insn_memory_access {
  OP_LOAD, OP_STORE
} INSN_MEMORY_ACCESS;

/* Enum declaration for trap instruction dispatch code.  */
typedef enum trap_codes {
  TRAP_WRITE, TRAP_READ, TRAP_OPEN, TRAP_EXIT
 , TRAP_PASS, TRAP_FAIL, TRAP_CLOSE, TRAP_OTHER
} TRAP_CODES;

/* Enum declaration for branch conditions.  */
typedef enum insn_cond {
  OPC_EQ, OPC_NE, OPC_GTU, OPC_GTEU
 , OPC_LTEU, OPC_LTU, OPC_GT, OPC_GTE
 , OPC_LT, OPC_LTE, OPC_BEQ, OPC_BNE
 , OPC_BLT, OPC_BLTE, OPC_B, OPC_BL
} INSN_COND;

/* Enum declaration for binary operator subcodes.  */
typedef enum insn_bop {
  OPB_EOR, OPB_ADD, OPB_LSL, OPB_SUB
 , OPB_LSR, OPB_AND, OPB_ASR, OPB_ORR
} INSN_BOP;

/* Enum declaration for binary operator subcodes.  */
typedef enum insn_bopext {
  OPBE_FEXT, OPBE_FDEP, OPBE_LFSR
} INSN_BOPEXT;

/* Enum declaration for floating operators.  */
typedef enum insn_fop {
  OPF_ADD, OPF_SUB, OPF_MUL, OPF_MADD
 , OPF_MSUB, OPF_FLOAT, OPF_FIX, OPF_FABS
} INSN_FOP;

/* Enum declaration for extended floating operators.  */
typedef enum insn_fopexn {
  OPF_FRECIP, OPF_FSQRT
} INSN_FOPEXN;

/* Enum declaration for immediate operators.  */
typedef enum insn_immop {
  OPI_ADD = 1, OPI_SUB = 3, OPI_TRAP = 7
} INSN_IMMOP;

/* Enum declaration for don't cares.  */
typedef enum insn_dc_25_2 {
  OPI_25_2_MBZ
} INSN_DC_25_2;

/* Enum declaration for .  */
typedef enum gr_names {
  H_REGISTERS_FP = 11, H_REGISTERS_SP = 13, H_REGISTERS_LR = 14, H_REGISTERS_R0 = 0
 , H_REGISTERS_R1 = 1, H_REGISTERS_R2 = 2, H_REGISTERS_R3 = 3, H_REGISTERS_R4 = 4
 , H_REGISTERS_R5 = 5, H_REGISTERS_R6 = 6, H_REGISTERS_R7 = 7, H_REGISTERS_R8 = 8
 , H_REGISTERS_R9 = 9, H_REGISTERS_R10 = 10, H_REGISTERS_R11 = 11, H_REGISTERS_R12 = 12
 , H_REGISTERS_R13 = 13, H_REGISTERS_R14 = 14, H_REGISTERS_R15 = 15, H_REGISTERS_R16 = 16
 , H_REGISTERS_R17 = 17, H_REGISTERS_R18 = 18, H_REGISTERS_R19 = 19, H_REGISTERS_R20 = 20
 , H_REGISTERS_R21 = 21, H_REGISTERS_R22 = 22, H_REGISTERS_R23 = 23, H_REGISTERS_R24 = 24
 , H_REGISTERS_R25 = 25, H_REGISTERS_R26 = 26, H_REGISTERS_R27 = 27, H_REGISTERS_R28 = 28
 , H_REGISTERS_R29 = 29, H_REGISTERS_R30 = 30, H_REGISTERS_R31 = 31, H_REGISTERS_R32 = 32
 , H_REGISTERS_R33 = 33, H_REGISTERS_R34 = 34, H_REGISTERS_R35 = 35, H_REGISTERS_R36 = 36
 , H_REGISTERS_R37 = 37, H_REGISTERS_R38 = 38, H_REGISTERS_R39 = 39, H_REGISTERS_R40 = 40
 , H_REGISTERS_R41 = 41, H_REGISTERS_R42 = 42, H_REGISTERS_R43 = 43, H_REGISTERS_R44 = 44
 , H_REGISTERS_R45 = 45, H_REGISTERS_R46 = 46, H_REGISTERS_R47 = 47, H_REGISTERS_R48 = 48
 , H_REGISTERS_R49 = 49, H_REGISTERS_R50 = 50, H_REGISTERS_R51 = 51, H_REGISTERS_R52 = 52
 , H_REGISTERS_R53 = 53, H_REGISTERS_R54 = 54, H_REGISTERS_R55 = 55, H_REGISTERS_R56 = 56
 , H_REGISTERS_R57 = 57, H_REGISTERS_R58 = 58, H_REGISTERS_R59 = 59, H_REGISTERS_R60 = 60
 , H_REGISTERS_R61 = 61, H_REGISTERS_R62 = 62, H_REGISTERS_R63 = 63, H_REGISTERS_A1 = 0
 , H_REGISTERS_A2 = 1, H_REGISTERS_A3 = 2, H_REGISTERS_A4 = 3, H_REGISTERS_V1 = 4
 , H_REGISTERS_V2 = 5, H_REGISTERS_V3 = 6, H_REGISTERS_V4 = 7, H_REGISTERS_V5 = 8
 , H_REGISTERS_V6 = 9, H_REGISTERS_V7 = 10, H_REGISTERS_V8 = 11, H_REGISTERS_SB = 9
 , H_REGISTERS_SL = 10, H_REGISTERS_IP = 12
} GR_NAMES;

/* Enum declaration for +/- index register.  */
typedef enum post_index {
  DIR_POSTINC, DIR_POSTDEC
} POST_INDEX;

/* Enum declaration for postmodify displacement.  */
typedef enum disp_post_modify {
  PMOD_DISP, PMOD_POST
} DISP_POST_MODIFY;

/* Enum declaration for .  */
typedef enum cr_names {
  H_CORE_REGISTERS_CONFIG, H_CORE_REGISTERS_STATUS, H_CORE_REGISTERS_PC, H_CORE_REGISTERS_DEBUG
 , H_CORE_REGISTERS_IAB, H_CORE_REGISTERS_LC, H_CORE_REGISTERS_LS, H_CORE_REGISTERS_LE
 , H_CORE_REGISTERS_IRET, H_CORE_REGISTERS_IMASK, H_CORE_REGISTERS_ILAT, H_CORE_REGISTERS_ILATST
 , H_CORE_REGISTERS_ILATCL, H_CORE_REGISTERS_IPEND, H_CORE_REGISTERS_CTIMER0, H_CORE_REGISTERS_CTIMER1
 , H_CORE_REGISTERS_HSTATUS
} CR_NAMES;

/* Enum declaration for .  */
typedef enum crdma_names {
  H_COREDMA_REGISTERS_DMA0CONFIG, H_COREDMA_REGISTERS_DMA0STRIDE, H_COREDMA_REGISTERS_DMA0COUNT, H_COREDMA_REGISTERS_DMA0SRCADDR
 , H_COREDMA_REGISTERS_DMA0DSTADDR, H_COREDMA_REGISTERS_DMA0AUTO0, H_COREDMA_REGISTERS_DMA0AUTO1, H_COREDMA_REGISTERS_DMA0STATUS
 , H_COREDMA_REGISTERS_DMA1CONFIG, H_COREDMA_REGISTERS_DMA1STRIDE, H_COREDMA_REGISTERS_DMA1COUNT, H_COREDMA_REGISTERS_DMA1SRCADDR
 , H_COREDMA_REGISTERS_DMA1DSTADDR, H_COREDMA_REGISTERS_DMA1AUTO0, H_COREDMA_REGISTERS_DMA1AUTO1, H_COREDMA_REGISTERS_DMA1STATUS
} CRDMA_NAMES;

/* Enum declaration for .  */
typedef enum crmem_names {
  H_COREMEM_REGISTERS_MEMCONFIG, H_COREMEM_REGISTERS_MEMSTATUS, H_COREMEM_REGISTERS_MEMPROTECT, H_COREMEM_REGISTERS_MEMRESERVE
} CRMEM_NAMES;

/* Enum declaration for .  */
typedef enum crmesh_names {
  H_COREMESH_REGISTERS_MESHCONFIG, H_COREMESH_REGISTERS_COREID, H_COREMESH_REGISTERS_MESHMULTICAST, H_COREMESH_REGISTERS_SWRESET
} CRMESH_NAMES;

/* Attributes.  */

/* Enum declaration for machine type selection.  */
typedef enum mach_attr {
  MACH_BASE, MACH_EPIPHANY32, MACH_MAX
} MACH_ATTR;

/* Enum declaration for instruction set selection.  */
typedef enum isa_attr {
  ISA_EPIPHANY, ISA_MAX
} ISA_ATTR;

/* Number of architecture variants.  */
#define MAX_ISAS  1
#define MAX_MACHS ((int) MACH_MAX)

/* Ifield support.  */

/* Ifield attribute indices.  */

/* Enum declaration for cgen_ifld attrs.  */
typedef enum cgen_ifld_attr {
  CGEN_IFLD_VIRTUAL, CGEN_IFLD_PCREL_ADDR, CGEN_IFLD_ABS_ADDR, CGEN_IFLD_RESERVED
 , CGEN_IFLD_SIGN_OPT, CGEN_IFLD_SIGNED, CGEN_IFLD_RELOC, CGEN_IFLD_END_BOOLS
 , CGEN_IFLD_START_NBOOLS = 31, CGEN_IFLD_MACH, CGEN_IFLD_END_NBOOLS
} CGEN_IFLD_ATTR;

/* Number of non-boolean elements in cgen_ifld_attr.  */
#define CGEN_IFLD_NBOOL_ATTRS (CGEN_IFLD_END_NBOOLS - CGEN_IFLD_START_NBOOLS - 1)

/* cgen_ifld attribute accessor macros.  */
#define CGEN_ATTR_CGEN_IFLD_MACH_VALUE(attrs) ((attrs)->nonbool[CGEN_IFLD_MACH-CGEN_IFLD_START_NBOOLS-1].nonbitset)
#define CGEN_ATTR_CGEN_IFLD_VIRTUAL_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_IFLD_VIRTUAL)) != 0)
#define CGEN_ATTR_CGEN_IFLD_PCREL_ADDR_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_IFLD_PCREL_ADDR)) != 0)
#define CGEN_ATTR_CGEN_IFLD_ABS_ADDR_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_IFLD_ABS_ADDR)) != 0)
#define CGEN_ATTR_CGEN_IFLD_RESERVED_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_IFLD_RESERVED)) != 0)
#define CGEN_ATTR_CGEN_IFLD_SIGN_OPT_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_IFLD_SIGN_OPT)) != 0)
#define CGEN_ATTR_CGEN_IFLD_SIGNED_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_IFLD_SIGNED)) != 0)
#define CGEN_ATTR_CGEN_IFLD_RELOC_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_IFLD_RELOC)) != 0)

/* Enum declaration for epiphany ifield types.  */
typedef enum ifield_type {
  EPIPHANY_F_NIL, EPIPHANY_F_ANYOF, EPIPHANY_F_OPC, EPIPHANY_F_OPC_4_1
 , EPIPHANY_F_OPC_6_3, EPIPHANY_F_OPC_8_5, EPIPHANY_F_OPC_19_4, EPIPHANY_F_CONDCODE
 , EPIPHANY_F_SECONDARY_CCS, EPIPHANY_F_SHIFT, EPIPHANY_F_WORDSIZE, EPIPHANY_F_STORE
 , EPIPHANY_F_OPC_8_1, EPIPHANY_F_OPC_31_32, EPIPHANY_F_SIMM8, EPIPHANY_F_SIMM24
 , EPIPHANY_F_SDISP3, EPIPHANY_F_DISP3, EPIPHANY_F_DISP8, EPIPHANY_F_IMM8
 , EPIPHANY_F_IMM_27_8, EPIPHANY_F_ADDSUBX, EPIPHANY_F_SUBD, EPIPHANY_F_PM
 , EPIPHANY_F_RM, EPIPHANY_F_RN, EPIPHANY_F_RD, EPIPHANY_F_RM_X
 , EPIPHANY_F_RN_X, EPIPHANY_F_RD_X, EPIPHANY_F_DC_9_1, EPIPHANY_F_SN
 , EPIPHANY_F_SD, EPIPHANY_F_SN_X, EPIPHANY_F_SD_X, EPIPHANY_F_DC_7_4
 , EPIPHANY_F_TRAP_SWI_9_1, EPIPHANY_F_GIEN_GIDIS_9_1, EPIPHANY_F_DC_15_3, EPIPHANY_F_DC_15_7
 , EPIPHANY_F_DC_15_6, EPIPHANY_F_TRAP_NUM, EPIPHANY_F_DC_20_1, EPIPHANY_F_DC_21_1
 , EPIPHANY_F_DC_21_2, EPIPHANY_F_DC_22_3, EPIPHANY_F_DC_22_2, EPIPHANY_F_DC_22_1
 , EPIPHANY_F_DC_25_6, EPIPHANY_F_DC_25_4, EPIPHANY_F_DC_25_2, EPIPHANY_F_DC_25_1
 , EPIPHANY_F_DC_28_1, EPIPHANY_F_DC_31_3, EPIPHANY_F_DISP11, EPIPHANY_F_SDISP11
 , EPIPHANY_F_IMM16, EPIPHANY_F_RD6, EPIPHANY_F_RN6, EPIPHANY_F_RM6
 , EPIPHANY_F_SD6, EPIPHANY_F_SN6, EPIPHANY_F_MAX
} IFIELD_TYPE;

#define MAX_IFLD ((int) EPIPHANY_F_MAX)

/* Hardware attribute indices.  */

/* Enum declaration for cgen_hw attrs.  */
typedef enum cgen_hw_attr {
  CGEN_HW_VIRTUAL, CGEN_HW_CACHE_ADDR, CGEN_HW_PC, CGEN_HW_PROFILE
 , CGEN_HW_END_BOOLS, CGEN_HW_START_NBOOLS = 31, CGEN_HW_MACH, CGEN_HW_END_NBOOLS
} CGEN_HW_ATTR;

/* Number of non-boolean elements in cgen_hw_attr.  */
#define CGEN_HW_NBOOL_ATTRS (CGEN_HW_END_NBOOLS - CGEN_HW_START_NBOOLS - 1)

/* cgen_hw attribute accessor macros.  */
#define CGEN_ATTR_CGEN_HW_MACH_VALUE(attrs) ((attrs)->nonbool[CGEN_HW_MACH-CGEN_HW_START_NBOOLS-1].nonbitset)
#define CGEN_ATTR_CGEN_HW_VIRTUAL_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_HW_VIRTUAL)) != 0)
#define CGEN_ATTR_CGEN_HW_CACHE_ADDR_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_HW_CACHE_ADDR)) != 0)
#define CGEN_ATTR_CGEN_HW_PC_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_HW_PC)) != 0)
#define CGEN_ATTR_CGEN_HW_PROFILE_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_HW_PROFILE)) != 0)

/* Enum declaration for epiphany hardware types.  */
typedef enum cgen_hw_type {
  HW_H_MEMORY, HW_H_SINT, HW_H_UINT, HW_H_ADDR
 , HW_H_IADDR, HW_H_REGISTERS, HW_H_FPREGISTERS, HW_H_ZBIT
 , HW_H_NBIT, HW_H_CBIT, HW_H_VBIT, HW_H_VSBIT
 , HW_H_BZBIT, HW_H_BNBIT, HW_H_BVBIT, HW_H_BUBIT
 , HW_H_BIBIT, HW_H_BCBIT, HW_H_BVSBIT, HW_H_BISBIT
 , HW_H_BUSBIT, HW_H_EXPCAUSE0BIT, HW_H_EXPCAUSE1BIT, HW_H_EXPCAUSE2BIT
 , HW_H_EXTFSTALLBIT, HW_H_TRMBIT, HW_H_INVEXCENBIT, HW_H_OVFEXCENBIT
 , HW_H_UNEXCENBIT, HW_H_TIMER0BIT0, HW_H_TIMER0BIT1, HW_H_TIMER0BIT2
 , HW_H_TIMER0BIT3, HW_H_TIMER1BIT0, HW_H_TIMER1BIT1, HW_H_TIMER1BIT2
 , HW_H_TIMER1BIT3, HW_H_MBKPTENBIT, HW_H_CLOCKGATEENBIT, HW_H_CORECFGRESBIT12
 , HW_H_CORECFGRESBIT13, HW_H_CORECFGRESBIT14, HW_H_CORECFGRESBIT15, HW_H_CORECFGRESBIT16
 , HW_H_CORECFGRESBIT20, HW_H_CORECFGRESBIT21, HW_H_CORECFGRESBIT24, HW_H_CORECFGRESBIT25
 , HW_H_CORECFGRESBIT26, HW_H_CORECFGRESBIT27, HW_H_CORECFGRESBIT28, HW_H_CORECFGRESBIT29
 , HW_H_CORECFGRESBIT30, HW_H_CORECFGRESBIT31, HW_H_ARITHMETIC_MODEBIT0, HW_H_ARITHMETIC_MODEBIT1
 , HW_H_ARITHMETIC_MODEBIT2, HW_H_GIDISABLEBIT, HW_H_KMBIT, HW_H_CAIBIT
 , HW_H_SFLAGBIT, HW_H_PC, HW_H_MEMADDR, HW_H_CORE_REGISTERS
 , HW_H_COREDMA_REGISTERS, HW_H_COREMEM_REGISTERS, HW_H_COREMESH_REGISTERS, HW_MAX
} CGEN_HW_TYPE;

#define MAX_HW ((int) HW_MAX)

/* Operand attribute indices.  */

/* Enum declaration for cgen_operand attrs.  */
typedef enum cgen_operand_attr {
  CGEN_OPERAND_VIRTUAL, CGEN_OPERAND_PCREL_ADDR, CGEN_OPERAND_ABS_ADDR, CGEN_OPERAND_SIGN_OPT
 , CGEN_OPERAND_SIGNED, CGEN_OPERAND_NEGATIVE, CGEN_OPERAND_RELAX, CGEN_OPERAND_SEM_ONLY
 , CGEN_OPERAND_RELOC, CGEN_OPERAND_END_BOOLS, CGEN_OPERAND_START_NBOOLS = 31, CGEN_OPERAND_MACH
 , CGEN_OPERAND_END_NBOOLS
} CGEN_OPERAND_ATTR;

/* Number of non-boolean elements in cgen_operand_attr.  */
#define CGEN_OPERAND_NBOOL_ATTRS (CGEN_OPERAND_END_NBOOLS - CGEN_OPERAND_START_NBOOLS - 1)

/* cgen_operand attribute accessor macros.  */
#define CGEN_ATTR_CGEN_OPERAND_MACH_VALUE(attrs) ((attrs)->nonbool[CGEN_OPERAND_MACH-CGEN_OPERAND_START_NBOOLS-1].nonbitset)
#define CGEN_ATTR_CGEN_OPERAND_VIRTUAL_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_OPERAND_VIRTUAL)) != 0)
#define CGEN_ATTR_CGEN_OPERAND_PCREL_ADDR_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_OPERAND_PCREL_ADDR)) != 0)
#define CGEN_ATTR_CGEN_OPERAND_ABS_ADDR_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_OPERAND_ABS_ADDR)) != 0)
#define CGEN_ATTR_CGEN_OPERAND_SIGN_OPT_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_OPERAND_SIGN_OPT)) != 0)
#define CGEN_ATTR_CGEN_OPERAND_SIGNED_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_OPERAND_SIGNED)) != 0)
#define CGEN_ATTR_CGEN_OPERAND_NEGATIVE_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_OPERAND_NEGATIVE)) != 0)
#define CGEN_ATTR_CGEN_OPERAND_RELAX_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_OPERAND_RELAX)) != 0)
#define CGEN_ATTR_CGEN_OPERAND_SEM_ONLY_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_OPERAND_SEM_ONLY)) != 0)
#define CGEN_ATTR_CGEN_OPERAND_RELOC_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_OPERAND_RELOC)) != 0)

/* Enum declaration for epiphany operand types.  */
typedef enum cgen_operand_type {
  EPIPHANY_OPERAND_PC, EPIPHANY_OPERAND_ZBIT, EPIPHANY_OPERAND_NBIT, EPIPHANY_OPERAND_CBIT
 , EPIPHANY_OPERAND_VBIT, EPIPHANY_OPERAND_BZBIT, EPIPHANY_OPERAND_BNBIT, EPIPHANY_OPERAND_BVBIT
 , EPIPHANY_OPERAND_BCBIT, EPIPHANY_OPERAND_BUBIT, EPIPHANY_OPERAND_BIBIT, EPIPHANY_OPERAND_VSBIT
 , EPIPHANY_OPERAND_BVSBIT, EPIPHANY_OPERAND_BISBIT, EPIPHANY_OPERAND_BUSBIT, EPIPHANY_OPERAND_EXPCAUSE0BIT
 , EPIPHANY_OPERAND_EXPCAUSE1BIT, EPIPHANY_OPERAND_EXPCAUSE2BIT, EPIPHANY_OPERAND_EXTFSTALLBIT, EPIPHANY_OPERAND_TRMBIT
 , EPIPHANY_OPERAND_INVEXCENBIT, EPIPHANY_OPERAND_OVFEXCENBIT, EPIPHANY_OPERAND_UNEXCENBIT, EPIPHANY_OPERAND_TIMER0BIT0
 , EPIPHANY_OPERAND_TIMER0BIT1, EPIPHANY_OPERAND_TIMER0BIT2, EPIPHANY_OPERAND_TIMER0BIT3, EPIPHANY_OPERAND_TIMER1BIT0
 , EPIPHANY_OPERAND_TIMER1BIT1, EPIPHANY_OPERAND_TIMER1BIT2, EPIPHANY_OPERAND_TIMER1BIT3, EPIPHANY_OPERAND_MBKPTENBIT
 , EPIPHANY_OPERAND_CLOCKGATEENBIT, EPIPHANY_OPERAND_ARITHMETIC_MODEBIT0, EPIPHANY_OPERAND_ARITHMETIC_MODEBIT1, EPIPHANY_OPERAND_ARITHMETIC_MODEBIT2
 , EPIPHANY_OPERAND_CORECFGRESBIT12, EPIPHANY_OPERAND_CORECFGRESBIT13, EPIPHANY_OPERAND_CORECFGRESBIT14, EPIPHANY_OPERAND_CORECFGRESBIT15
 , EPIPHANY_OPERAND_CORECFGRESBIT16, EPIPHANY_OPERAND_CORECFGRESBIT20, EPIPHANY_OPERAND_CORECFGRESBIT21, EPIPHANY_OPERAND_CORECFGRESBIT24
 , EPIPHANY_OPERAND_CORECFGRESBIT25, EPIPHANY_OPERAND_CORECFGRESBIT26, EPIPHANY_OPERAND_CORECFGRESBIT27, EPIPHANY_OPERAND_CORECFGRESBIT28
 , EPIPHANY_OPERAND_CORECFGRESBIT29, EPIPHANY_OPERAND_CORECFGRESBIT30, EPIPHANY_OPERAND_CORECFGRESBIT31, EPIPHANY_OPERAND_GIDISABLEBIT
 , EPIPHANY_OPERAND_KMBIT, EPIPHANY_OPERAND_CAIBIT, EPIPHANY_OPERAND_SFLAGBIT, EPIPHANY_OPERAND_MEMADDR
 , EPIPHANY_OPERAND_SIMM24, EPIPHANY_OPERAND_SIMM8, EPIPHANY_OPERAND_RD, EPIPHANY_OPERAND_RN
 , EPIPHANY_OPERAND_RM, EPIPHANY_OPERAND_FRD, EPIPHANY_OPERAND_FRN, EPIPHANY_OPERAND_FRM
 , EPIPHANY_OPERAND_RD6, EPIPHANY_OPERAND_RN6, EPIPHANY_OPERAND_RM6, EPIPHANY_OPERAND_FRD6
 , EPIPHANY_OPERAND_FRN6, EPIPHANY_OPERAND_FRM6, EPIPHANY_OPERAND_SD, EPIPHANY_OPERAND_SN
 , EPIPHANY_OPERAND_SD6, EPIPHANY_OPERAND_SN6, EPIPHANY_OPERAND_SDDMA, EPIPHANY_OPERAND_SNDMA
 , EPIPHANY_OPERAND_SDMEM, EPIPHANY_OPERAND_SNMEM, EPIPHANY_OPERAND_SDMESH, EPIPHANY_OPERAND_SNMESH
 , EPIPHANY_OPERAND_SIMM3, EPIPHANY_OPERAND_SIMM11, EPIPHANY_OPERAND_DISP3, EPIPHANY_OPERAND_TRAPNUM6
 , EPIPHANY_OPERAND_SWI_NUM, EPIPHANY_OPERAND_DISP11, EPIPHANY_OPERAND_SHIFT, EPIPHANY_OPERAND_IMM16
 , EPIPHANY_OPERAND_IMM8, EPIPHANY_OPERAND_DIRECTION, EPIPHANY_OPERAND_DPMI, EPIPHANY_OPERAND_MAX
} CGEN_OPERAND_TYPE;

/* Number of operands types.  */
#define MAX_OPERANDS 91

/* Maximum number of operands referenced by any insn.  */
#define MAX_OPERAND_INSTANCES 8

/* Insn attribute indices.  */

/* Enum declaration for cgen_insn attrs.  */
typedef enum cgen_insn_attr {
  CGEN_INSN_ALIAS, CGEN_INSN_VIRTUAL, CGEN_INSN_UNCOND_CTI, CGEN_INSN_COND_CTI
 , CGEN_INSN_SKIP_CTI, CGEN_INSN_DELAY_SLOT, CGEN_INSN_RELAXABLE, CGEN_INSN_RELAXED
 , CGEN_INSN_NO_DIS, CGEN_INSN_PBB, CGEN_INSN_SHORT_INSN, CGEN_INSN_IMM3
 , CGEN_INSN_IMM8, CGEN_INSN_END_BOOLS, CGEN_INSN_START_NBOOLS = 31, CGEN_INSN_MACH
 , CGEN_INSN_END_NBOOLS
} CGEN_INSN_ATTR;

/* Number of non-boolean elements in cgen_insn_attr.  */
#define CGEN_INSN_NBOOL_ATTRS (CGEN_INSN_END_NBOOLS - CGEN_INSN_START_NBOOLS - 1)

/* cgen_insn attribute accessor macros.  */
#define CGEN_ATTR_CGEN_INSN_MACH_VALUE(attrs) ((attrs)->nonbool[CGEN_INSN_MACH-CGEN_INSN_START_NBOOLS-1].nonbitset)
#define CGEN_ATTR_CGEN_INSN_ALIAS_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_INSN_ALIAS)) != 0)
#define CGEN_ATTR_CGEN_INSN_VIRTUAL_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_INSN_VIRTUAL)) != 0)
#define CGEN_ATTR_CGEN_INSN_UNCOND_CTI_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_INSN_UNCOND_CTI)) != 0)
#define CGEN_ATTR_CGEN_INSN_COND_CTI_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_INSN_COND_CTI)) != 0)
#define CGEN_ATTR_CGEN_INSN_SKIP_CTI_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_INSN_SKIP_CTI)) != 0)
#define CGEN_ATTR_CGEN_INSN_DELAY_SLOT_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_INSN_DELAY_SLOT)) != 0)
#define CGEN_ATTR_CGEN_INSN_RELAXABLE_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_INSN_RELAXABLE)) != 0)
#define CGEN_ATTR_CGEN_INSN_RELAXED_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_INSN_RELAXED)) != 0)
#define CGEN_ATTR_CGEN_INSN_NO_DIS_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_INSN_NO_DIS)) != 0)
#define CGEN_ATTR_CGEN_INSN_PBB_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_INSN_PBB)) != 0)
#define CGEN_ATTR_CGEN_INSN_SHORT_INSN_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_INSN_SHORT_INSN)) != 0)
#define CGEN_ATTR_CGEN_INSN_IMM3_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_INSN_IMM3)) != 0)
#define CGEN_ATTR_CGEN_INSN_IMM8_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_INSN_IMM8)) != 0)

/* cgen.h uses things we just defined.  */
#include "opcode/cgen.h"

extern const struct cgen_ifld epiphany_cgen_ifld_table[];

/* Attributes.  */
extern const CGEN_ATTR_TABLE epiphany_cgen_hardware_attr_table[];
extern const CGEN_ATTR_TABLE epiphany_cgen_ifield_attr_table[];
extern const CGEN_ATTR_TABLE epiphany_cgen_operand_attr_table[];
extern const CGEN_ATTR_TABLE epiphany_cgen_insn_attr_table[];

/* Hardware decls.  */

extern CGEN_KEYWORD epiphany_cgen_opval_gr_names;
extern CGEN_KEYWORD epiphany_cgen_opval_gr_names;
extern CGEN_KEYWORD epiphany_cgen_opval_cr_names;
extern CGEN_KEYWORD epiphany_cgen_opval_crdma_names;
extern CGEN_KEYWORD epiphany_cgen_opval_crmem_names;
extern CGEN_KEYWORD epiphany_cgen_opval_crmesh_names;

extern const CGEN_HW_ENTRY epiphany_cgen_hw_table[];



   #ifdef __cplusplus
   }
   #endif

#endif /* EPIPHANY_CPU_H */
