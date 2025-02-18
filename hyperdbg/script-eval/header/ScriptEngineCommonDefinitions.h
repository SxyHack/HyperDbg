#pragma once
#ifndef SCRIPT_ENGINE_COMMON_DEFINITIONS_H
#define SCRIPT_ENGINE_COMMON_DEFINITIONS_H
typedef struct SYMBOL {
	long long unsigned Type;
    long long unsigned Len;
	long long unsigned Value;
} SYMBOL, * PSYMBOL;
typedef struct SYMBOL_BUFFER {
	PSYMBOL Head;
	unsigned int Pointer;
	unsigned int Size;
	char* Message;
} SYMBOL_BUFFER, * PSYMBOL_BUFFER;
typedef struct SYMBOL_MAP
{
    char* Name;
    long long unsigned Type;
} SYMBOL_MAP, * PSYMBOL_MAP;
typedef struct ACTION_BUFFER {
  long long unsigned Tag;
  long long unsigned CurrentAction;
  char ImmediatelySendTheResults;
  long long unsigned Context;
  char CallingStage;
} ACTION_BUFFER, *PACTION_BUFFER;


#define SYMBOL_GLOBAL_ID_TYPE 0
#define SYMBOL_LOCAL_ID_TYPE 1
#define SYMBOL_NUM_TYPE 2
#define SYMBOL_REGISTER_TYPE 3
#define SYMBOL_PSEUDO_REG_TYPE 4
#define SYMBOL_SEMANTIC_RULE_TYPE 5
#define SYMBOL_TEMP_TYPE 6
#define SYMBOL_STRING_TYPE 7
#define SYMBOL_VARIABLE_COUNT_TYPE 8
#define SYMBOL_MEM_VALID_CHECK_MASK (1 << 31)
#define SYMBOL_INVALID 9
#define SYMBOL_WSTRING_TYPE 10
#define INVALID -999
#define LALR_ACCEPT 999



#ifndef FUNC_INC
#define FUNC_INC 0
#endif // !FUNC_INC

#ifndef FUNC_DEC
#define FUNC_DEC 1
#endif // !FUNC_DEC

#ifndef FUNC_REFERENCE
#define FUNC_REFERENCE 2
#endif // !FUNC_REFERENCE

#ifndef FUNC_DEREFERENCE
#define FUNC_DEREFERENCE 3
#endif // !FUNC_DEREFERENCE

#ifndef FUNC_OR
#define FUNC_OR 4
#endif // !FUNC_OR

#ifndef FUNC_XOR
#define FUNC_XOR 5
#endif // !FUNC_XOR

#ifndef FUNC_AND
#define FUNC_AND 6
#endif // !FUNC_AND

#ifndef FUNC_ASR
#define FUNC_ASR 7
#endif // !FUNC_ASR

#ifndef FUNC_ASL
#define FUNC_ASL 8
#endif // !FUNC_ASL

#ifndef FUNC_ADD
#define FUNC_ADD 9
#endif // !FUNC_ADD

#ifndef FUNC_SUB
#define FUNC_SUB 10
#endif // !FUNC_SUB

#ifndef FUNC_MUL
#define FUNC_MUL 11
#endif // !FUNC_MUL

#ifndef FUNC_DIV
#define FUNC_DIV 12
#endif // !FUNC_DIV

#ifndef FUNC_MOD
#define FUNC_MOD 13
#endif // !FUNC_MOD

#ifndef FUNC_GT
#define FUNC_GT 14
#endif // !FUNC_GT

#ifndef FUNC_LT
#define FUNC_LT 15
#endif // !FUNC_LT

#ifndef FUNC_EGT
#define FUNC_EGT 16
#endif // !FUNC_EGT

#ifndef FUNC_ELT
#define FUNC_ELT 17
#endif // !FUNC_ELT

#ifndef FUNC_EQUAL
#define FUNC_EQUAL 18
#endif // !FUNC_EQUAL

#ifndef FUNC_NEQ
#define FUNC_NEQ 19
#endif // !FUNC_NEQ

#ifndef FUNC_START_OF_IF
#define FUNC_START_OF_IF 20
#endif // !FUNC_START_OF_IF

#ifndef FUNC_JMP
#define FUNC_JMP 21
#endif // !FUNC_JMP

#ifndef FUNC_JZ
#define FUNC_JZ 22
#endif // !FUNC_JZ

#ifndef FUNC_JNZ
#define FUNC_JNZ 23
#endif // !FUNC_JNZ

#ifndef FUNC_JMP_TO_END_AND_JZCOMPLETED
#define FUNC_JMP_TO_END_AND_JZCOMPLETED 24
#endif // !FUNC_JMP_TO_END_AND_JZCOMPLETED

#ifndef FUNC_END_OF_IF
#define FUNC_END_OF_IF 25
#endif // !FUNC_END_OF_IF

#ifndef FUNC_START_OF_WHILE
#define FUNC_START_OF_WHILE 26
#endif // !FUNC_START_OF_WHILE

#ifndef FUNC_END_OF_WHILE
#define FUNC_END_OF_WHILE 27
#endif // !FUNC_END_OF_WHILE

#ifndef FUNC_VARGSTART
#define FUNC_VARGSTART 28
#endif // !FUNC_VARGSTART

#ifndef FUNC_MOV
#define FUNC_MOV 29
#endif // !FUNC_MOV

#ifndef FUNC_START_OF_DO_WHILE
#define FUNC_START_OF_DO_WHILE 30
#endif // !FUNC_START_OF_DO_WHILE

#ifndef FUNC_
#define FUNC_ 31
#endif // !FUNC_

#ifndef FUNC_START_OF_DO_WHILE_COMMANDS
#define FUNC_START_OF_DO_WHILE_COMMANDS 32
#endif // !FUNC_START_OF_DO_WHILE_COMMANDS

#ifndef FUNC_END_OF_DO_WHILE
#define FUNC_END_OF_DO_WHILE 33
#endif // !FUNC_END_OF_DO_WHILE

#ifndef FUNC_START_OF_FOR
#define FUNC_START_OF_FOR 34
#endif // !FUNC_START_OF_FOR

#ifndef FUNC_FOR_INC_DEC
#define FUNC_FOR_INC_DEC 35
#endif // !FUNC_FOR_INC_DEC

#ifndef FUNC_START_OF_FOR_OMMANDS
#define FUNC_START_OF_FOR_OMMANDS 36
#endif // !FUNC_START_OF_FOR_OMMANDS

#ifndef FUNC_END_OF_IF
#define FUNC_END_OF_IF 37
#endif // !FUNC_END_OF_IF

#ifndef FUNC_IGNORE_LVALUE
#define FUNC_IGNORE_LVALUE 38
#endif // !FUNC_IGNORE_LVALUE

#ifndef FUNC_PRINT
#define FUNC_PRINT 39
#endif // !FUNC_PRINT

#ifndef FUNC_FORMATS
#define FUNC_FORMATS 40
#endif // !FUNC_FORMATS

#ifndef FUNC_EVENT_ENABLE
#define FUNC_EVENT_ENABLE 41
#endif // !FUNC_EVENT_ENABLE

#ifndef FUNC_EVENT_DISABLE
#define FUNC_EVENT_DISABLE 42
#endif // !FUNC_EVENT_DISABLE

#ifndef FUNC_EVENT_CLEAR
#define FUNC_EVENT_CLEAR 43
#endif // !FUNC_EVENT_CLEAR

#ifndef FUNC_TEST_STATEMENT
#define FUNC_TEST_STATEMENT 44
#endif // !FUNC_TEST_STATEMENT

#ifndef FUNC_SPINLOCK_LOCK
#define FUNC_SPINLOCK_LOCK 45
#endif // !FUNC_SPINLOCK_LOCK

#ifndef FUNC_SPINLOCK_UNLOCK
#define FUNC_SPINLOCK_UNLOCK 46
#endif // !FUNC_SPINLOCK_UNLOCK

#ifndef FUNC_EVENT_SC
#define FUNC_EVENT_SC 47
#endif // !FUNC_EVENT_SC

#ifndef FUNC_PRINTF
#define FUNC_PRINTF 48
#endif // !FUNC_PRINTF

#ifndef FUNC_PAUSE
#define FUNC_PAUSE 49
#endif // !FUNC_PAUSE

#ifndef FUNC_FLUSH
#define FUNC_FLUSH 50
#endif // !FUNC_FLUSH

#ifndef FUNC_EVENT_TRACE_STEP
#define FUNC_EVENT_TRACE_STEP 51
#endif // !FUNC_EVENT_TRACE_STEP

#ifndef FUNC_EVENT_TRACE_STEP_IN
#define FUNC_EVENT_TRACE_STEP_IN 52
#endif // !FUNC_EVENT_TRACE_STEP_IN

#ifndef FUNC_EVENT_TRACE_STEP_OUT
#define FUNC_EVENT_TRACE_STEP_OUT 53
#endif // !FUNC_EVENT_TRACE_STEP_OUT

#ifndef FUNC_EVENT_TRACE_INSTRUMENTATION_STEP
#define FUNC_EVENT_TRACE_INSTRUMENTATION_STEP 54
#endif // !FUNC_EVENT_TRACE_INSTRUMENTATION_STEP

#ifndef FUNC_EVENT_TRACE_INSTRUMENTATION_STEP_IN
#define FUNC_EVENT_TRACE_INSTRUMENTATION_STEP_IN 55
#endif // !FUNC_EVENT_TRACE_INSTRUMENTATION_STEP_IN

#ifndef FUNC_SPINLOCK_LOCK_CUSTOM_WAIT
#define FUNC_SPINLOCK_LOCK_CUSTOM_WAIT 56
#endif // !FUNC_SPINLOCK_LOCK_CUSTOM_WAIT

#ifndef FUNC_EVENT_INJECT
#define FUNC_EVENT_INJECT 57
#endif // !FUNC_EVENT_INJECT

#ifndef FUNC_POI
#define FUNC_POI 58
#endif // !FUNC_POI

#ifndef FUNC_DB
#define FUNC_DB 59
#endif // !FUNC_DB

#ifndef FUNC_DD
#define FUNC_DD 60
#endif // !FUNC_DD

#ifndef FUNC_DW
#define FUNC_DW 61
#endif // !FUNC_DW

#ifndef FUNC_DQ
#define FUNC_DQ 62
#endif // !FUNC_DQ

#ifndef FUNC_NEG
#define FUNC_NEG 63
#endif // !FUNC_NEG

#ifndef FUNC_HI
#define FUNC_HI 64
#endif // !FUNC_HI

#ifndef FUNC_LOW
#define FUNC_LOW 65
#endif // !FUNC_LOW

#ifndef FUNC_NOT
#define FUNC_NOT 66
#endif // !FUNC_NOT

#ifndef FUNC_CHECK_ADDRESS
#define FUNC_CHECK_ADDRESS 67
#endif // !FUNC_CHECK_ADDRESS

#ifndef FUNC_DISASSEMBLE_LEN
#define FUNC_DISASSEMBLE_LEN 68
#endif // !FUNC_DISASSEMBLE_LEN

#ifndef FUNC_DISASSEMBLE_LEN32
#define FUNC_DISASSEMBLE_LEN32 69
#endif // !FUNC_DISASSEMBLE_LEN32

#ifndef FUNC_DISASSEMBLE_LEN64
#define FUNC_DISASSEMBLE_LEN64 70
#endif // !FUNC_DISASSEMBLE_LEN64

#ifndef FUNC_INTERLOCKED_INCREMENT
#define FUNC_INTERLOCKED_INCREMENT 71
#endif // !FUNC_INTERLOCKED_INCREMENT

#ifndef FUNC_INTERLOCKED_DECREMENT
#define FUNC_INTERLOCKED_DECREMENT 72
#endif // !FUNC_INTERLOCKED_DECREMENT

#ifndef FUNC_REFERENCE
#define FUNC_REFERENCE 73
#endif // !FUNC_REFERENCE

#ifndef FUNC_PHYSICAL_TO_VIRTUAL
#define FUNC_PHYSICAL_TO_VIRTUAL 74
#endif // !FUNC_PHYSICAL_TO_VIRTUAL

#ifndef FUNC_VIRTUAL_TO_PHYSICAL
#define FUNC_VIRTUAL_TO_PHYSICAL 75
#endif // !FUNC_VIRTUAL_TO_PHYSICAL

#ifndef FUNC_ED
#define FUNC_ED 76
#endif // !FUNC_ED

#ifndef FUNC_EB
#define FUNC_EB 77
#endif // !FUNC_EB

#ifndef FUNC_EQ
#define FUNC_EQ 78
#endif // !FUNC_EQ

#ifndef FUNC_INTERLOCKED_EXCHANGE
#define FUNC_INTERLOCKED_EXCHANGE 79
#endif // !FUNC_INTERLOCKED_EXCHANGE

#ifndef FUNC_INTERLOCKED_EXCHANGE_ADD
#define FUNC_INTERLOCKED_EXCHANGE_ADD 80
#endif // !FUNC_INTERLOCKED_EXCHANGE_ADD

#ifndef FUNC_INTERLOCKED_COMPARE_EXCHANGE
#define FUNC_INTERLOCKED_COMPARE_EXCHANGE 81
#endif // !FUNC_INTERLOCKED_COMPARE_EXCHANGE

#ifndef FUNC_STRLEN
#define FUNC_STRLEN 82
#endif // !FUNC_STRLEN

#ifndef FUNC_STRCMP
#define FUNC_STRCMP 83
#endif // !FUNC_STRCMP

#ifndef FUNC_MEMCMP
#define FUNC_MEMCMP 84
#endif // !FUNC_MEMCMP

#ifndef FUNC_WCSLEN
#define FUNC_WCSLEN 85
#endif // !FUNC_WCSLEN

#ifndef FUNC_WCSCMP
#define FUNC_WCSCMP 86
#endif // !FUNC_WCSCMP

#ifndef FUNC_EVENT_INJECT_ERROR_CODE
#define FUNC_EVENT_INJECT_ERROR_CODE 87
#endif // !FUNC_EVENT_INJECT_ERROR_CODE

#ifndef FUNC_MEMCPY
#define FUNC_MEMCPY 88
#endif // !FUNC_MEMCPY

#ifndef FUNC_POI
#define FUNC_POI 89
#endif // !FUNC_POI

#ifndef FUNC_DB
#define FUNC_DB 90
#endif // !FUNC_DB

#ifndef FUNC_DD
#define FUNC_DD 91
#endif // !FUNC_DD

#ifndef FUNC_DW
#define FUNC_DW 92
#endif // !FUNC_DW

#ifndef FUNC_DQ
#define FUNC_DQ 93
#endif // !FUNC_DQ

#ifndef FUNC_NEG
#define FUNC_NEG 94
#endif // !FUNC_NEG

#ifndef FUNC_HI
#define FUNC_HI 95
#endif // !FUNC_HI

#ifndef FUNC_LOW
#define FUNC_LOW 96
#endif // !FUNC_LOW

#ifndef FUNC_NOT
#define FUNC_NOT 97
#endif // !FUNC_NOT

#ifndef FUNC_CHECK_ADDRESS
#define FUNC_CHECK_ADDRESS 98
#endif // !FUNC_CHECK_ADDRESS

#ifndef FUNC_DISASSEMBLE_LEN
#define FUNC_DISASSEMBLE_LEN 99
#endif // !FUNC_DISASSEMBLE_LEN

#ifndef FUNC_DISASSEMBLE_LEN32
#define FUNC_DISASSEMBLE_LEN32 100
#endif // !FUNC_DISASSEMBLE_LEN32

#ifndef FUNC_DISASSEMBLE_LEN64
#define FUNC_DISASSEMBLE_LEN64 101
#endif // !FUNC_DISASSEMBLE_LEN64

#ifndef FUNC_INTERLOCKED_INCREMENT
#define FUNC_INTERLOCKED_INCREMENT 102
#endif // !FUNC_INTERLOCKED_INCREMENT

#ifndef FUNC_INTERLOCKED_DECREMENT
#define FUNC_INTERLOCKED_DECREMENT 103
#endif // !FUNC_INTERLOCKED_DECREMENT

#ifndef FUNC_REFERENCE
#define FUNC_REFERENCE 104
#endif // !FUNC_REFERENCE

#ifndef FUNC_PHYSICAL_TO_VIRTUAL
#define FUNC_PHYSICAL_TO_VIRTUAL 105
#endif // !FUNC_PHYSICAL_TO_VIRTUAL

#ifndef FUNC_VIRTUAL_TO_PHYSICAL
#define FUNC_VIRTUAL_TO_PHYSICAL 106
#endif // !FUNC_VIRTUAL_TO_PHYSICAL

#ifndef FUNC_ED
#define FUNC_ED 107
#endif // !FUNC_ED

#ifndef FUNC_EB
#define FUNC_EB 108
#endif // !FUNC_EB

#ifndef FUNC_EQ
#define FUNC_EQ 109
#endif // !FUNC_EQ

#ifndef FUNC_INTERLOCKED_EXCHANGE
#define FUNC_INTERLOCKED_EXCHANGE 110
#endif // !FUNC_INTERLOCKED_EXCHANGE

#ifndef FUNC_INTERLOCKED_EXCHANGE_ADD
#define FUNC_INTERLOCKED_EXCHANGE_ADD 111
#endif // !FUNC_INTERLOCKED_EXCHANGE_ADD

#ifndef FUNC_INTERLOCKED_COMPARE_EXCHANGE
#define FUNC_INTERLOCKED_COMPARE_EXCHANGE 112
#endif // !FUNC_INTERLOCKED_COMPARE_EXCHANGE

#ifndef FUNC_STRLEN
#define FUNC_STRLEN 113
#endif // !FUNC_STRLEN

#ifndef FUNC_STRCMP
#define FUNC_STRCMP 114
#endif // !FUNC_STRCMP

#ifndef FUNC_MEMCMP
#define FUNC_MEMCMP 115
#endif // !FUNC_MEMCMP

#ifndef FUNC_WCSLEN
#define FUNC_WCSLEN 116
#endif // !FUNC_WCSLEN

#ifndef FUNC_WCSCMP
#define FUNC_WCSCMP 117
#endif // !FUNC_WCSCMP

typedef enum REGS_ENUM {
	REGISTER_RAX = 0,
	REGISTER_EAX = 1,
	REGISTER_AX = 2,
	REGISTER_AH = 3,
	REGISTER_AL = 4,
	REGISTER_RCX = 5,
	REGISTER_ECX = 6,
	REGISTER_CX = 7,
	REGISTER_CH = 8,
	REGISTER_CL = 9,
	REGISTER_RDX = 10,
	REGISTER_EDX = 11,
	REGISTER_DX = 12,
	REGISTER_DH = 13,
	REGISTER_DL = 14,
	REGISTER_RBX = 15,
	REGISTER_EBX = 16,
	REGISTER_BX = 17,
	REGISTER_BH = 18,
	REGISTER_BL = 19,
	REGISTER_RSP = 20,
	REGISTER_ESP = 21,
	REGISTER_SP = 22,
	REGISTER_SPL = 23,
	REGISTER_RBP = 24,
	REGISTER_EBP = 25,
	REGISTER_BP = 26,
	REGISTER_BPL = 27,
	REGISTER_RSI = 28,
	REGISTER_ESI = 29,
	REGISTER_SI = 30,
	REGISTER_SIL = 31,
	REGISTER_RDI = 32,
	REGISTER_EDI = 33,
	REGISTER_DI = 34,
	REGISTER_DIL = 35,
	REGISTER_R8 = 36,
	REGISTER_R8D = 37,
	REGISTER_R8W = 38,
	REGISTER_R8H = 39,
	REGISTER_R8L = 40,
	REGISTER_R9 = 41,
	REGISTER_R9D = 42,
	REGISTER_R9W = 43,
	REGISTER_R9H = 44,
	REGISTER_R9L = 45,
	REGISTER_R10 = 46,
	REGISTER_R10D = 47,
	REGISTER_R10W = 48,
	REGISTER_R10H = 49,
	REGISTER_R10L = 50,
	REGISTER_R11 = 51,
	REGISTER_R11D = 52,
	REGISTER_R11W = 53,
	REGISTER_R11H = 54,
	REGISTER_R11L = 55,
	REGISTER_R12 = 56,
	REGISTER_R12D = 57,
	REGISTER_R12W = 58,
	REGISTER_R12H = 59,
	REGISTER_R12L = 60,
	REGISTER_R13 = 61,
	REGISTER_R13D = 62,
	REGISTER_R13W = 63,
	REGISTER_R13H = 64,
	REGISTER_R13L = 65,
	REGISTER_R14 = 66,
	REGISTER_R14D = 67,
	REGISTER_R14W = 68,
	REGISTER_R14H = 69,
	REGISTER_R14L = 70,
	REGISTER_R15 = 71,
	REGISTER_R15D = 72,
	REGISTER_R15W = 73,
	REGISTER_R15H = 74,
	REGISTER_R15L = 75,
	REGISTER_DS = 76,
	REGISTER_ES = 77,
	REGISTER_FS = 78,
	REGISTER_GS = 79,
	REGISTER_CS = 80,
	REGISTER_SS = 81,
	REGISTER_RFLAGS = 82,
	REGISTER_EFLAGS = 83,
	REGISTER_FLAGS = 84,
	REGISTER_CF = 85,
	REGISTER_PF = 86,
	REGISTER_AF = 87,
	REGISTER_ZF = 88,
	REGISTER_SF = 89,
	REGISTER_TF = 90,
	REGISTER_IF = 91,
	REGISTER_DF = 92,
	REGISTER_OF = 93,
	REGISTER_IOPL = 94,
	REGISTER_NT = 95,
	REGISTER_RF = 96,
	REGISTER_VM = 97,
	REGISTER_AC = 98,
	REGISTER_VIF = 99,
	REGISTER_VIP = 100,
	REGISTER_ID = 101,
	REGISTER_RIP = 102,
	REGISTER_EIP = 103,
	REGISTER_IP = 104,
	REGISTER_IDTR = 105,
	REGISTER_LDTR = 106,
	REGISTER_GDTR = 107,
	REGISTER_TR = 108,
	REGISTER_CR0 = 109,
	REGISTER_CR2 = 110,
	REGISTER_CR3 = 111,
	REGISTER_CR4 = 112,
	REGISTER_CR8 = 113,
	REGISTER_DR0 = 114,
	REGISTER_DR1 = 115,
	REGISTER_DR2 = 116,
	REGISTER_DR3 = 117,
	REGISTER_DR6 = 118,
	REGISTER_DR7 = 119

} REGS_ENUM;

static const char *const RegistersNames[] = {
"rax", "eax", "ax", "ah", "al", "rcx", "ecx", "cx",
"ch", "cl", "rdx", "edx", "dx", "dh", "dl", "rbx",
"ebx", "bx", "bh", "bl", "rsp", "esp", "sp", "spl",
"rbp", "ebp", "bp", "bpl", "rsi", "esi", "si", "sil",
"rdi", "edi", "di", "dil", "r8", "r8d", "r8w", "r8h",
"r8l", "r9", "r9d", "r9w", "r9h", "r9l", "r10", "r10d",
"r10w", "r10h", "r10l", "r11", "r11d", "r11w", "r11h", "r11l",
"r12", "r12d", "r12w", "r12h", "r12l", "r13", "r13d", "r13w",
"r13h", "r13l", "r14", "r14d", "r14w", "r14h", "r14l", "r15",
"r15d", "r15w", "r15h", "r15l", "ds", "es", "fs", "gs",
"cs", "ss", "rflags", "eflags", "flags", "cf", "pf", "af",
"zf", "sf", "tf", "if", "df", "of", "iopl", "nt",
"rf", "vm", "ac", "vif", "vip", "id", "rip", "eip",
"ip", "idtr", "ldtr", "gdtr", "tr", "cr0", "cr2", "cr3",
"cr4", "cr8", "dr0", "dr1", "dr2", "dr3", "dr6", 	"dr7"
};

#define PSEUDO_REGISTER_PID 0
#define PSEUDO_REGISTER_TID 1
#define PSEUDO_REGISTER_PNAME 2
#define PSEUDO_REGISTER_CORE 3
#define PSEUDO_REGISTER_PROC 4
#define PSEUDO_REGISTER_THREAD 5
#define PSEUDO_REGISTER_PEB 6
#define PSEUDO_REGISTER_TEB 7
#define PSEUDO_REGISTER_IP 8
#define PSEUDO_REGISTER_BUFFER 9
#define PSEUDO_REGISTER_CONTEXT 10
#define PSEUDO_REGISTER_EVENT_TAG 11
#define PSEUDO_REGISTER_EVENT_ID 12
#define PSEUDO_REGISTER_EVENT_STAGE 13

#endif
