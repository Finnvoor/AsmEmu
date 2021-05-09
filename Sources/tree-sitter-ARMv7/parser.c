#include <parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 357
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 76
#define ALIAS_COUNT 0
#define TOKEN_COUNT 52
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 17
#define MAX_ALIAS_SEQUENCE_LENGTH 11

enum {
  sym_label_definition = 1,
  sym_label_reference = 2,
  aux_sym_condition_token1 = 3,
  aux_sym_condition_token2 = 4,
  aux_sym_condition_token3 = 5,
  aux_sym_condition_token4 = 6,
  aux_sym_condition_token5 = 7,
  aux_sym_condition_token6 = 8,
  aux_sym_condition_token7 = 9,
  aux_sym_condition_token8 = 10,
  aux_sym_condition_token9 = 11,
  aux_sym_condition_token10 = 12,
  aux_sym_condition_token11 = 13,
  aux_sym_condition_token12 = 14,
  aux_sym_condition_token13 = 15,
  aux_sym_condition_token14 = 16,
  aux_sym_condition_token15 = 17,
  sym_register = 18,
  aux_sym_data_processing_instruction_token1 = 19,
  anon_sym_ = 20,
  anon_sym_COMMA = 21,
  aux_sym_data_processing_instruction_token2 = 22,
  aux_sym_data_processing_instruction_token3 = 23,
  anon_sym_POUND = 24,
  aux_sym_set_condition_flags_token1 = 25,
  aux_sym_multiply_instruction_token1 = 26,
  aux_sym_multiply_instruction_token2 = 27,
  aux_sym_multiply_long_instruction_token1 = 28,
  aux_sym_single_data_swap_instruction_token1 = 29,
  anon_sym_LBRACK = 30,
  anon_sym_RBRACK = 31,
  aux_sym_branch_exchange_instruction_token1 = 32,
  aux_sym_halfword_data_transfer_instruction_token1 = 33,
  aux_sym_halfword_data_transfer_instruction_token2 = 34,
  aux_sym_halfword_data_transfer_address_token1 = 35,
  aux_sym_byte_transfer_token1 = 36,
  sym_t_bit = 37,
  sym_write_back = 38,
  sym_link = 39,
  aux_sym_software_interrupt_instruction_token1 = 40,
  aux_sym_shift_token1 = 41,
  aux_sym_shift_token2 = 42,
  aux_sym_shift_token3 = 43,
  aux_sym_shift_token4 = 44,
  aux_sym_shift_token5 = 45,
  aux_sym_shift_token6 = 46,
  aux_sym_literal_token1 = 47,
  aux_sym_literal_token2 = 48,
  aux_sym_comment_token1 = 49,
  aux_sym_comment_token2 = 50,
  aux_sym_comment_token3 = 51,
  sym_source_file = 52,
  sym__source_section = 53,
  sym_symbol = 54,
  sym_instruction = 55,
  sym_condition = 56,
  sym_data_processing_instruction = 57,
  sym__data_processing_instruction_op2 = 58,
  sym_set_condition_flags = 59,
  sym_multiply_instruction = 60,
  sym_multiply_long_instruction = 61,
  sym_single_data_swap_instruction = 62,
  sym_branch_exchange_instruction = 63,
  sym_halfword_data_transfer_instruction = 64,
  sym_halfword_data_transfer_address = 65,
  sym_single_data_transfer_instruction = 66,
  sym_byte_transfer = 67,
  sym_single_data_transfer_address = 68,
  sym_branch_instruction = 69,
  sym_software_interrupt_instruction = 70,
  sym_shift = 71,
  sym_expression = 72,
  sym_literal = 73,
  sym_comment = 74,
  aux_sym_source_file_repeat1 = 75,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_label_definition] = "label_definition",
  [sym_label_reference] = "label_reference",
  [aux_sym_condition_token1] = "condition_token1",
  [aux_sym_condition_token2] = "condition_token2",
  [aux_sym_condition_token3] = "condition_token3",
  [aux_sym_condition_token4] = "condition_token4",
  [aux_sym_condition_token5] = "condition_token5",
  [aux_sym_condition_token6] = "condition_token6",
  [aux_sym_condition_token7] = "condition_token7",
  [aux_sym_condition_token8] = "condition_token8",
  [aux_sym_condition_token9] = "condition_token9",
  [aux_sym_condition_token10] = "condition_token10",
  [aux_sym_condition_token11] = "condition_token11",
  [aux_sym_condition_token12] = "condition_token12",
  [aux_sym_condition_token13] = "condition_token13",
  [aux_sym_condition_token14] = "condition_token14",
  [aux_sym_condition_token15] = "condition_token15",
  [sym_register] = "register",
  [aux_sym_data_processing_instruction_token1] = "data_processing_instruction_token1",
  [anon_sym_] = " ",
  [anon_sym_COMMA] = ",",
  [aux_sym_data_processing_instruction_token2] = "data_processing_instruction_token2",
  [aux_sym_data_processing_instruction_token3] = "data_processing_instruction_token3",
  [anon_sym_POUND] = "#",
  [aux_sym_set_condition_flags_token1] = "set_condition_flags_token1",
  [aux_sym_multiply_instruction_token1] = "multiply_instruction_token1",
  [aux_sym_multiply_instruction_token2] = "multiply_instruction_token2",
  [aux_sym_multiply_long_instruction_token1] = "multiply_long_instruction_token1",
  [aux_sym_single_data_swap_instruction_token1] = "single_data_swap_instruction_token1",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [aux_sym_branch_exchange_instruction_token1] = "branch_exchange_instruction_token1",
  [aux_sym_halfword_data_transfer_instruction_token1] = "halfword_data_transfer_instruction_token1",
  [aux_sym_halfword_data_transfer_instruction_token2] = "halfword_data_transfer_instruction_token2",
  [aux_sym_halfword_data_transfer_address_token1] = "halfword_data_transfer_address_token1",
  [aux_sym_byte_transfer_token1] = "byte_transfer_token1",
  [sym_t_bit] = "t_bit",
  [sym_write_back] = "write_back",
  [sym_link] = "link",
  [aux_sym_software_interrupt_instruction_token1] = "software_interrupt_instruction_token1",
  [aux_sym_shift_token1] = "shift_token1",
  [aux_sym_shift_token2] = "shift_token2",
  [aux_sym_shift_token3] = "shift_token3",
  [aux_sym_shift_token4] = "shift_token4",
  [aux_sym_shift_token5] = "shift_token5",
  [aux_sym_shift_token6] = "shift_token6",
  [aux_sym_literal_token1] = "literal_token1",
  [aux_sym_literal_token2] = "literal_token2",
  [aux_sym_comment_token1] = "comment_token1",
  [aux_sym_comment_token2] = "comment_token2",
  [aux_sym_comment_token3] = "comment_token3",
  [sym_source_file] = "source_file",
  [sym__source_section] = "_source_section",
  [sym_symbol] = "symbol",
  [sym_instruction] = "instruction",
  [sym_condition] = "condition",
  [sym_data_processing_instruction] = "data_processing_instruction",
  [sym__data_processing_instruction_op2] = "_data_processing_instruction_op2",
  [sym_set_condition_flags] = "set_condition_flags",
  [sym_multiply_instruction] = "multiply_instruction",
  [sym_multiply_long_instruction] = "multiply_long_instruction",
  [sym_single_data_swap_instruction] = "single_data_swap_instruction",
  [sym_branch_exchange_instruction] = "branch_exchange_instruction",
  [sym_halfword_data_transfer_instruction] = "halfword_data_transfer_instruction",
  [sym_halfword_data_transfer_address] = "halfword_data_transfer_address",
  [sym_single_data_transfer_instruction] = "single_data_transfer_instruction",
  [sym_byte_transfer] = "byte_transfer",
  [sym_single_data_transfer_address] = "single_data_transfer_address",
  [sym_branch_instruction] = "branch_instruction",
  [sym_software_interrupt_instruction] = "software_interrupt_instruction",
  [sym_shift] = "shift",
  [sym_expression] = "expression",
  [sym_literal] = "literal",
  [sym_comment] = "comment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_label_definition] = sym_label_definition,
  [sym_label_reference] = sym_label_reference,
  [aux_sym_condition_token1] = aux_sym_condition_token1,
  [aux_sym_condition_token2] = aux_sym_condition_token2,
  [aux_sym_condition_token3] = aux_sym_condition_token3,
  [aux_sym_condition_token4] = aux_sym_condition_token4,
  [aux_sym_condition_token5] = aux_sym_condition_token5,
  [aux_sym_condition_token6] = aux_sym_condition_token6,
  [aux_sym_condition_token7] = aux_sym_condition_token7,
  [aux_sym_condition_token8] = aux_sym_condition_token8,
  [aux_sym_condition_token9] = aux_sym_condition_token9,
  [aux_sym_condition_token10] = aux_sym_condition_token10,
  [aux_sym_condition_token11] = aux_sym_condition_token11,
  [aux_sym_condition_token12] = aux_sym_condition_token12,
  [aux_sym_condition_token13] = aux_sym_condition_token13,
  [aux_sym_condition_token14] = aux_sym_condition_token14,
  [aux_sym_condition_token15] = aux_sym_condition_token15,
  [sym_register] = sym_register,
  [aux_sym_data_processing_instruction_token1] = aux_sym_data_processing_instruction_token1,
  [anon_sym_] = anon_sym_,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_data_processing_instruction_token2] = aux_sym_data_processing_instruction_token2,
  [aux_sym_data_processing_instruction_token3] = aux_sym_data_processing_instruction_token3,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_set_condition_flags_token1] = aux_sym_set_condition_flags_token1,
  [aux_sym_multiply_instruction_token1] = aux_sym_multiply_instruction_token1,
  [aux_sym_multiply_instruction_token2] = aux_sym_multiply_instruction_token2,
  [aux_sym_multiply_long_instruction_token1] = aux_sym_multiply_long_instruction_token1,
  [aux_sym_single_data_swap_instruction_token1] = aux_sym_single_data_swap_instruction_token1,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym_branch_exchange_instruction_token1] = aux_sym_branch_exchange_instruction_token1,
  [aux_sym_halfword_data_transfer_instruction_token1] = aux_sym_halfword_data_transfer_instruction_token1,
  [aux_sym_halfword_data_transfer_instruction_token2] = aux_sym_halfword_data_transfer_instruction_token2,
  [aux_sym_halfword_data_transfer_address_token1] = aux_sym_halfword_data_transfer_address_token1,
  [aux_sym_byte_transfer_token1] = aux_sym_byte_transfer_token1,
  [sym_t_bit] = sym_t_bit,
  [sym_write_back] = sym_write_back,
  [sym_link] = sym_link,
  [aux_sym_software_interrupt_instruction_token1] = aux_sym_software_interrupt_instruction_token1,
  [aux_sym_shift_token1] = aux_sym_shift_token1,
  [aux_sym_shift_token2] = aux_sym_shift_token2,
  [aux_sym_shift_token3] = aux_sym_shift_token3,
  [aux_sym_shift_token4] = aux_sym_shift_token4,
  [aux_sym_shift_token5] = aux_sym_shift_token5,
  [aux_sym_shift_token6] = aux_sym_shift_token6,
  [aux_sym_literal_token1] = aux_sym_literal_token1,
  [aux_sym_literal_token2] = aux_sym_literal_token2,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
  [aux_sym_comment_token3] = aux_sym_comment_token3,
  [sym_source_file] = sym_source_file,
  [sym__source_section] = sym__source_section,
  [sym_symbol] = sym_symbol,
  [sym_instruction] = sym_instruction,
  [sym_condition] = sym_condition,
  [sym_data_processing_instruction] = sym_data_processing_instruction,
  [sym__data_processing_instruction_op2] = sym__data_processing_instruction_op2,
  [sym_set_condition_flags] = sym_set_condition_flags,
  [sym_multiply_instruction] = sym_multiply_instruction,
  [sym_multiply_long_instruction] = sym_multiply_long_instruction,
  [sym_single_data_swap_instruction] = sym_single_data_swap_instruction,
  [sym_branch_exchange_instruction] = sym_branch_exchange_instruction,
  [sym_halfword_data_transfer_instruction] = sym_halfword_data_transfer_instruction,
  [sym_halfword_data_transfer_address] = sym_halfword_data_transfer_address,
  [sym_single_data_transfer_instruction] = sym_single_data_transfer_instruction,
  [sym_byte_transfer] = sym_byte_transfer,
  [sym_single_data_transfer_address] = sym_single_data_transfer_address,
  [sym_branch_instruction] = sym_branch_instruction,
  [sym_software_interrupt_instruction] = sym_software_interrupt_instruction,
  [sym_shift] = sym_shift,
  [sym_expression] = sym_expression,
  [sym_literal] = sym_literal,
  [sym_comment] = sym_comment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_label_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_label_reference] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_condition_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_condition_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_condition_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_condition_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_condition_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_condition_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_condition_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_condition_token8] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_condition_token9] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_condition_token10] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_condition_token11] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_condition_token12] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_condition_token13] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_condition_token14] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_condition_token15] = {
    .visible = false,
    .named = false,
  },
  [sym_register] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_data_processing_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_data_processing_instruction_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_data_processing_instruction_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_set_condition_flags_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_multiply_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_multiply_instruction_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_multiply_long_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_single_data_swap_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_branch_exchange_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_halfword_data_transfer_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_halfword_data_transfer_instruction_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_halfword_data_transfer_address_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_byte_transfer_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_t_bit] = {
    .visible = true,
    .named = true,
  },
  [sym_write_back] = {
    .visible = true,
    .named = true,
  },
  [sym_link] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_software_interrupt_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shift_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shift_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shift_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shift_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shift_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shift_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_literal_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__source_section] = {
    .visible = false,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_data_processing_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym__data_processing_instruction_op2] = {
    .visible = false,
    .named = true,
  },
  [sym_set_condition_flags] = {
    .visible = true,
    .named = true,
  },
  [sym_multiply_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_multiply_long_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_single_data_swap_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_branch_exchange_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_halfword_data_transfer_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_halfword_data_transfer_address] = {
    .visible = true,
    .named = true,
  },
  [sym_single_data_transfer_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_byte_transfer] = {
    .visible = true,
    .named = true,
  },
  [sym_single_data_transfer_address] = {
    .visible = true,
    .named = true,
  },
  [sym_branch_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_software_interrupt_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_shift] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_Rd = 1,
  field_RdHi = 2,
  field_RdLo = 3,
  field_Rm = 4,
  field_Rn = 5,
  field_Rs = 6,
  field_byte_transfer = 7,
  field_condition = 8,
  field_expression = 9,
  field_label_reference = 10,
  field_link = 11,
  field_literal = 12,
  field_rs = 13,
  field_set_condition_flags = 14,
  field_shift = 15,
  field_t_bit = 16,
  field_write_back = 17,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_Rd] = "Rd",
  [field_RdHi] = "RdHi",
  [field_RdLo] = "RdLo",
  [field_Rm] = "Rm",
  [field_Rn] = "Rn",
  [field_Rs] = "Rs",
  [field_byte_transfer] = "byte_transfer",
  [field_condition] = "condition",
  [field_expression] = "expression",
  [field_label_reference] = "label_reference",
  [field_link] = "link",
  [field_literal] = "literal",
  [field_rs] = "rs",
  [field_set_condition_flags] = "set_condition_flags",
  [field_shift] = "shift",
  [field_t_bit] = "t_bit",
  [field_write_back] = "write_back",
};

static const TSFieldMapSlice ts_field_map_slices[62] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 1},
  [6] = {.index = 5, .length = 1},
  [7] = {.index = 6, .length = 2},
  [8] = {.index = 8, .length = 2},
  [9] = {.index = 10, .length = 2},
  [10] = {.index = 12, .length = 1},
  [11] = {.index = 13, .length = 4},
  [12] = {.index = 17, .length = 4},
  [13] = {.index = 21, .length = 1},
  [14] = {.index = 22, .length = 3},
  [15] = {.index = 25, .length = 1},
  [16] = {.index = 26, .length = 5},
  [17] = {.index = 31, .length = 5},
  [18] = {.index = 36, .length = 5},
  [19] = {.index = 41, .length = 5},
  [20] = {.index = 46, .length = 1},
  [21] = {.index = 47, .length = 2},
  [22] = {.index = 49, .length = 2},
  [23] = {.index = 51, .length = 2},
  [24] = {.index = 53, .length = 2},
  [25] = {.index = 55, .length = 6},
  [26] = {.index = 61, .length = 6},
  [27] = {.index = 67, .length = 5},
  [28] = {.index = 72, .length = 3},
  [29] = {.index = 75, .length = 1},
  [30] = {.index = 76, .length = 2},
  [31] = {.index = 78, .length = 3},
  [32] = {.index = 81, .length = 3},
  [33] = {.index = 84, .length = 3},
  [34] = {.index = 87, .length = 1},
  [35] = {.index = 88, .length = 6},
  [36] = {.index = 94, .length = 6},
  [37] = {.index = 100, .length = 4},
  [38] = {.index = 104, .length = 4},
  [39] = {.index = 108, .length = 4},
  [40] = {.index = 112, .length = 7},
  [41] = {.index = 119, .length = 5},
  [42] = {.index = 124, .length = 4},
  [43] = {.index = 128, .length = 4},
  [44] = {.index = 132, .length = 3},
  [45] = {.index = 135, .length = 2},
  [46] = {.index = 137, .length = 2},
  [47] = {.index = 139, .length = 5},
  [48] = {.index = 144, .length = 5},
  [49] = {.index = 149, .length = 5},
  [50] = {.index = 154, .length = 5},
  [51] = {.index = 159, .length = 4},
  [52] = {.index = 163, .length = 4},
  [53] = {.index = 167, .length = 2},
  [54] = {.index = 169, .length = 6},
  [55] = {.index = 175, .length = 6},
  [56] = {.index = 181, .length = 5},
  [57] = {.index = 186, .length = 3},
  [58] = {.index = 189, .length = 2},
  [59] = {.index = 191, .length = 2},
  [60] = {.index = 193, .length = 3},
  [61] = {.index = 196, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_condition, 0},
  [1] =
    {field_set_condition_flags, 0},
  [2] =
    {field_Rn, 2},
  [3] =
    {field_label_reference, 0},
  [4] =
    {field_expression, 2},
  [5] =
    {field_literal, 0},
  [6] =
    {field_Rn, 3},
    {field_condition, 1},
  [8] =
    {field_expression, 3},
    {field_link, 1},
  [10] =
    {field_condition, 1},
    {field_expression, 3},
  [12] =
    {field_Rm, 0},
  [13] =
    {field_Rd, 2},
    {field_Rm, 4, .inherited = true},
    {field_literal, 4, .inherited = true},
    {field_shift, 4, .inherited = true},
  [17] =
    {field_Rm, 4, .inherited = true},
    {field_Rn, 2},
    {field_literal, 4, .inherited = true},
    {field_shift, 4, .inherited = true},
  [21] =
    {field_Rd, 2},
  [22] =
    {field_condition, 2},
    {field_expression, 4},
    {field_link, 1},
  [25] =
    {field_literal, 1},
  [26] =
    {field_Rd, 3},
    {field_Rm, 5, .inherited = true},
    {field_condition, 1},
    {field_literal, 5, .inherited = true},
    {field_shift, 5, .inherited = true},
  [31] =
    {field_Rd, 3},
    {field_Rm, 5, .inherited = true},
    {field_literal, 5, .inherited = true},
    {field_set_condition_flags, 1},
    {field_shift, 5, .inherited = true},
  [36] =
    {field_Rm, 5, .inherited = true},
    {field_Rn, 3},
    {field_condition, 1},
    {field_literal, 5, .inherited = true},
    {field_shift, 5, .inherited = true},
  [41] =
    {field_Rm, 5, .inherited = true},
    {field_Rn, 3},
    {field_literal, 5, .inherited = true},
    {field_set_condition_flags, 1},
    {field_shift, 5, .inherited = true},
  [46] =
    {field_Rd, 3},
  [47] =
    {field_Rd, 3},
    {field_t_bit, 1},
  [49] =
    {field_Rd, 3},
    {field_condition, 1},
  [51] =
    {field_Rd, 3},
    {field_byte_transfer, 1},
  [53] =
    {field_Rm, 0},
    {field_shift, 2},
  [55] =
    {field_Rd, 4},
    {field_Rm, 6, .inherited = true},
    {field_condition, 1},
    {field_literal, 6, .inherited = true},
    {field_set_condition_flags, 2},
    {field_shift, 6, .inherited = true},
  [61] =
    {field_Rm, 6, .inherited = true},
    {field_Rn, 4},
    {field_condition, 1},
    {field_literal, 6, .inherited = true},
    {field_set_condition_flags, 2},
    {field_shift, 6, .inherited = true},
  [67] =
    {field_Rd, 2},
    {field_Rm, 6, .inherited = true},
    {field_Rn, 4},
    {field_literal, 6, .inherited = true},
    {field_shift, 6, .inherited = true},
  [72] =
    {field_Rd, 2},
    {field_Rm, 4},
    {field_Rs, 6},
  [75] =
    {field_Rn, 1},
  [76] =
    {field_Rd, 4},
    {field_condition, 1},
  [78] =
    {field_Rd, 4},
    {field_condition, 1},
    {field_t_bit, 2},
  [81] =
    {field_Rd, 4},
    {field_byte_transfer, 2},
    {field_condition, 1},
  [84] =
    {field_Rd, 4},
    {field_byte_transfer, 1},
    {field_t_bit, 2},
  [87] =
    {field_rs, 1},
  [88] =
    {field_Rd, 3},
    {field_Rm, 7, .inherited = true},
    {field_Rn, 5},
    {field_condition, 1},
    {field_literal, 7, .inherited = true},
    {field_shift, 7, .inherited = true},
  [94] =
    {field_Rd, 3},
    {field_Rm, 7, .inherited = true},
    {field_Rn, 5},
    {field_literal, 7, .inherited = true},
    {field_set_condition_flags, 1},
    {field_shift, 7, .inherited = true},
  [100] =
    {field_Rd, 3},
    {field_Rm, 5},
    {field_Rs, 7},
    {field_condition, 1},
  [104] =
    {field_Rd, 3},
    {field_Rm, 5},
    {field_Rs, 7},
    {field_set_condition_flags, 1},
  [108] =
    {field_Rd, 5},
    {field_byte_transfer, 2},
    {field_condition, 1},
    {field_t_bit, 3},
  [112] =
    {field_Rd, 4},
    {field_Rm, 8, .inherited = true},
    {field_Rn, 6},
    {field_condition, 1},
    {field_literal, 8, .inherited = true},
    {field_set_condition_flags, 2},
    {field_shift, 8, .inherited = true},
  [119] =
    {field_Rd, 4},
    {field_Rm, 6},
    {field_Rs, 8},
    {field_condition, 1},
    {field_set_condition_flags, 2},
  [124] =
    {field_Rd, 2},
    {field_Rm, 4},
    {field_Rn, 8},
    {field_Rs, 6},
  [128] =
    {field_RdHi, 4},
    {field_RdLo, 2},
    {field_Rm, 6},
    {field_Rs, 8},
  [132] =
    {field_Rd, 2},
    {field_Rm, 4},
    {field_Rn, 7},
  [135] =
    {field_Rm, 3},
    {field_Rn, 1},
  [137] =
    {field_Rm, 4},
    {field_Rn, 1},
  [139] =
    {field_Rd, 3},
    {field_Rm, 5},
    {field_Rn, 9},
    {field_Rs, 7},
    {field_condition, 1},
  [144] =
    {field_Rd, 3},
    {field_Rm, 5},
    {field_Rn, 9},
    {field_Rs, 7},
    {field_set_condition_flags, 1},
  [149] =
    {field_RdHi, 5},
    {field_RdLo, 3},
    {field_Rm, 7},
    {field_Rs, 9},
    {field_condition, 1},
  [154] =
    {field_RdHi, 5},
    {field_RdLo, 3},
    {field_Rm, 7},
    {field_Rs, 9},
    {field_set_condition_flags, 1},
  [159] =
    {field_Rd, 3},
    {field_Rm, 5},
    {field_Rn, 8},
    {field_condition, 1},
  [163] =
    {field_Rd, 3},
    {field_Rm, 5},
    {field_Rn, 8},
    {field_byte_transfer, 1},
  [167] =
    {field_Rm, 5},
    {field_Rn, 1},
  [169] =
    {field_Rd, 4},
    {field_Rm, 6},
    {field_Rn, 10},
    {field_Rs, 8},
    {field_condition, 1},
    {field_set_condition_flags, 2},
  [175] =
    {field_RdHi, 6},
    {field_RdLo, 4},
    {field_Rm, 8},
    {field_Rs, 10},
    {field_condition, 1},
    {field_set_condition_flags, 2},
  [181] =
    {field_Rd, 4},
    {field_Rm, 6},
    {field_Rn, 9},
    {field_byte_transfer, 2},
    {field_condition, 1},
  [186] =
    {field_Rm, 3},
    {field_Rn, 1},
    {field_write_back, 5},
  [189] =
    {field_Rn, 1},
    {field_literal, 4},
  [191] =
    {field_Rn, 1},
    {field_literal, 5},
  [193] =
    {field_Rn, 1},
    {field_literal, 4},
    {field_write_back, 6},
  [196] =
    {field_Rm, 4},
    {field_Rn, 1},
    {field_write_back, 6},
};

static TSSymbol ts_alias_sequences[62][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(109);
      if (lookahead == '!') ADVANCE(224);
      if (lookahead == '#') ADVANCE(204);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(219);
      if (lookahead == ',') ADVANCE(201);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '0') ADVANCE(234);
      if (lookahead == '1') ADVANCE(235);
      if (lookahead == ';') ADVANCE(238);
      if (lookahead == '@') ADVANCE(239);
      if (lookahead == 'A') ADVANCE(120);
      if (lookahead == 'B') ADVANCE(128);
      if (lookahead == 'C') ADVANCE(116);
      if (lookahead == 'E') ADVANCE(135);
      if (lookahead == 'G') ADVANCE(122);
      if (lookahead == 'H') ADVANCE(127);
      if (lookahead == 'L') ADVANCE(121);
      if (lookahead == 'M') ADVANCE(125);
      if (lookahead == 'N') ADVANCE(123);
      if (lookahead == 'O') ADVANCE(139);
      if (lookahead == 'P') ADVANCE(115);
      if (lookahead == 'R') ADVANCE(136);
      if (lookahead == 'S') ADVANCE(114);
      if (lookahead == 'T') ADVANCE(124);
      if (lookahead == 'U') ADVANCE(133);
      if (lookahead == 'V') ADVANCE(117);
      if (lookahead == '[') ADVANCE(212);
      if (lookahead == ']') ADVANCE(213);
      if (lookahead == 'a') ADVANCE(152);
      if (lookahead == 'b') ADVANCE(160);
      if (lookahead == 'c') ADVANCE(148);
      if (lookahead == 'e') ADVANCE(167);
      if (lookahead == 'g') ADVANCE(154);
      if (lookahead == 'h') ADVANCE(159);
      if (lookahead == 'l') ADVANCE(153);
      if (lookahead == 'm') ADVANCE(157);
      if (lookahead == 'n') ADVANCE(155);
      if (lookahead == 'o') ADVANCE(171);
      if (lookahead == 'p') ADVANCE(147);
      if (lookahead == 'r') ADVANCE(168);
      if (lookahead == 's') ADVANCE(146);
      if (lookahead == 't') ADVANCE(156);
      if (lookahead == 'u') ADVANCE(165);
      if (lookahead == 'v') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(236);
      if (('D' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(200);
      if (lookahead == 'A') ADVANCE(74);
      if (lookahead == 'C') ADVANCE(67);
      if (lookahead == 'E') ADVANCE(80);
      if (lookahead == 'G') ADVANCE(69);
      if (lookahead == 'H') ADVANCE(72);
      if (lookahead == 'L') ADVANCE(70);
      if (lookahead == 'M') ADVANCE(73);
      if (lookahead == 'N') ADVANCE(71);
      if (lookahead == 'P') ADVANCE(75);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(205);
      if (lookahead == 'V') ADVANCE(68);
      if (lookahead == 'a') ADVANCE(93);
      if (lookahead == 'c') ADVANCE(86);
      if (lookahead == 'e') ADVANCE(99);
      if (lookahead == 'g') ADVANCE(88);
      if (lookahead == 'h') ADVANCE(91);
      if (lookahead == 'l') ADVANCE(89);
      if (lookahead == 'm') ADVANCE(92);
      if (lookahead == 'n') ADVANCE(90);
      if (lookahead == 'p') ADVANCE(94);
      if (lookahead == 'v') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(200);
      if (lookahead == 'A') ADVANCE(74);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(220);
      if (lookahead == 'C') ADVANCE(67);
      if (lookahead == 'E') ADVANCE(80);
      if (lookahead == 'G') ADVANCE(69);
      if (lookahead == 'H') ADVANCE(217);
      if (lookahead == 'L') ADVANCE(225);
      if (lookahead == 'M') ADVANCE(73);
      if (lookahead == 'N') ADVANCE(71);
      if (lookahead == 'P') ADVANCE(75);
      if (lookahead == 'S') ADVANCE(104);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(223);
      if (lookahead == 'V') ADVANCE(68);
      if (lookahead == 'a') ADVANCE(93);
      if (lookahead == 'c') ADVANCE(86);
      if (lookahead == 'e') ADVANCE(99);
      if (lookahead == 'g') ADVANCE(88);
      if (lookahead == 'h') ADVANCE(218);
      if (lookahead == 'l') ADVANCE(226);
      if (lookahead == 'm') ADVANCE(92);
      if (lookahead == 'n') ADVANCE(90);
      if (lookahead == 'p') ADVANCE(94);
      if (lookahead == 's') ADVANCE(105);
      if (lookahead == 'v') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(200);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(220);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(216);
      if (lookahead == 'S') ADVANCE(206);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(223);
      if (lookahead == 's') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(204);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(219);
      if (lookahead == '1') ADVANCE(106);
      if (lookahead == 'A') ADVANCE(83);
      if (lookahead == 'L') ADVANCE(81);
      if (lookahead == 'P') ADVANCE(66);
      if (lookahead == 'R') ADVANCE(78);
      if (lookahead == 'S') ADVANCE(79);
      if (lookahead == 'a') ADVANCE(102);
      if (lookahead == 'l') ADVANCE(100);
      if (lookahead == 'p') ADVANCE(85);
      if (lookahead == 'r') ADVANCE(97);
      if (lookahead == 's') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(240);
      END_STATE();
    case 6:
      if (lookahead == '0') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(236);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == 'A') ADVANCE(209);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 8:
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == 'A') ADVANCE(19);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == 'B') ADVANCE(11);
      if (lookahead == 'M') ADVANCE(20);
      if (lookahead == 'T') ADVANCE(28);
      if (lookahead == 'U') ADVANCE(10);
      if (lookahead == 'W') ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == 'B') ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == 'C') ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == 'D') ADVANCE(60);
      if (lookahead == 'N') ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == 'D') ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == 'D') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == 'E') ADVANCE(26);
      if (lookahead == 'S') ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == 'I') ADVANCE(227);
      if (lookahead == 'P') ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == 'L') ADVANCE(7);
      if (lookahead == 'O') ADVANCE(32);
      if (lookahead == 'U') ADVANCE(18);
      if (lookahead == 'V') ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == 'L') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == 'L') ADVANCE(210);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == 'L') ADVANCE(8);
      if (lookahead == 'U') ADVANCE(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == 'L') ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == 'M') ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == 'M') ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == 'N') ADVANCE(199);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == 'O') ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == 'Q') ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == 'R') ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == 'R') ADVANCE(215);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == 'R') ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == 'S') ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == 'T') ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == 'V') ADVANCE(199);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == 'a') ADVANCE(209);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == 'a') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == 'b') ADVANCE(37);
      if (lookahead == 'm') ADVANCE(46);
      if (lookahead == 't') ADVANCE(54);
      if (lookahead == 'u') ADVANCE(36);
      if (lookahead == 'w') ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == 'b') ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == 'c') ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 38:
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == 'd') ADVANCE(63);
      if (lookahead == 'n') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == 'd') ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == 'd') ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == 'e') ADVANCE(52);
      if (lookahead == 's') ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 42:
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == 'i') ADVANCE(227);
      if (lookahead == 'p') ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 43:
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == 'l') ADVANCE(33);
      if (lookahead == 'o') ADVANCE(58);
      if (lookahead == 'u') ADVANCE(44);
      if (lookahead == 'v') ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 44:
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == 'l') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 45:
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == 'l') ADVANCE(210);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 46:
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == 'l') ADVANCE(34);
      if (lookahead == 'u') ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 47:
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == 'l') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 48:
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == 'm') ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 49:
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == 'm') ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 50:
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == 'n') ADVANCE(199);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 51:
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == 'o') ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 52:
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == 'q') ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 53:
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == 'r') ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 54:
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == 'r') ADVANCE(215);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 55:
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == 'r') ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 56:
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == 's') ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 57:
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == 't') ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 58:
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == 'v') ADVANCE(199);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 59:
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == 'B' ||
          lookahead == 'C') ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 60:
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == 'C' ||
          lookahead == 'D') ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 61:
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == 'N' ||
          lookahead == 'P') ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 62:
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == 'b' ||
          lookahead == 'c') ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 63:
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == 'c' ||
          lookahead == 'd') ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 64:
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == 'n' ||
          lookahead == 'p') ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 65:
      if (lookahead == ':') ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 66:
      if (lookahead == 'C') ADVANCE(197);
      END_STATE();
    case 67:
      if (lookahead == 'C') ADVANCE(185);
      if (lookahead == 'S') ADVANCE(184);
      END_STATE();
    case 68:
      if (lookahead == 'C') ADVANCE(189);
      if (lookahead == 'S') ADVANCE(188);
      END_STATE();
    case 69:
      if (lookahead == 'E') ADVANCE(192);
      if (lookahead == 'T') ADVANCE(194);
      END_STATE();
    case 70:
      if (lookahead == 'E') ADVANCE(195);
      if (lookahead == 'S') ADVANCE(191);
      if (lookahead == 'T') ADVANCE(193);
      END_STATE();
    case 71:
      if (lookahead == 'E') ADVANCE(183);
      END_STATE();
    case 72:
      if (lookahead == 'I') ADVANCE(190);
      END_STATE();
    case 73:
      if (lookahead == 'I') ADVANCE(186);
      END_STATE();
    case 74:
      if (lookahead == 'L') ADVANCE(196);
      END_STATE();
    case 75:
      if (lookahead == 'L') ADVANCE(187);
      END_STATE();
    case 76:
      if (lookahead == 'L') ADVANCE(228);
      if (lookahead == 'R') ADVANCE(231);
      END_STATE();
    case 77:
      if (lookahead == 'L') ADVANCE(229);
      if (lookahead == 'R') ADVANCE(230);
      END_STATE();
    case 78:
      if (lookahead == 'O') ADVANCE(82);
      if (lookahead == 'R') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(197);
      END_STATE();
    case 79:
      if (lookahead == 'P') ADVANCE(197);
      END_STATE();
    case 80:
      if (lookahead == 'Q') ADVANCE(182);
      END_STATE();
    case 81:
      if (lookahead == 'R') ADVANCE(197);
      if (lookahead == 'S') ADVANCE(77);
      END_STATE();
    case 82:
      if (lookahead == 'R') ADVANCE(232);
      END_STATE();
    case 83:
      if (lookahead == 'S') ADVANCE(76);
      END_STATE();
    case 84:
      if (lookahead == 'X') ADVANCE(233);
      END_STATE();
    case 85:
      if (lookahead == 'c') ADVANCE(197);
      END_STATE();
    case 86:
      if (lookahead == 'c') ADVANCE(185);
      if (lookahead == 's') ADVANCE(184);
      END_STATE();
    case 87:
      if (lookahead == 'c') ADVANCE(189);
      if (lookahead == 's') ADVANCE(188);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(192);
      if (lookahead == 't') ADVANCE(194);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(195);
      if (lookahead == 's') ADVANCE(191);
      if (lookahead == 't') ADVANCE(193);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 91:
      if (lookahead == 'i') ADVANCE(190);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(186);
      END_STATE();
    case 93:
      if (lookahead == 'l') ADVANCE(196);
      END_STATE();
    case 94:
      if (lookahead == 'l') ADVANCE(187);
      END_STATE();
    case 95:
      if (lookahead == 'l') ADVANCE(228);
      if (lookahead == 'r') ADVANCE(231);
      END_STATE();
    case 96:
      if (lookahead == 'l') ADVANCE(229);
      if (lookahead == 'r') ADVANCE(230);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(101);
      if (lookahead == 'r') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(197);
      END_STATE();
    case 98:
      if (lookahead == 'p') ADVANCE(197);
      END_STATE();
    case 99:
      if (lookahead == 'q') ADVANCE(182);
      END_STATE();
    case 100:
      if (lookahead == 'r') ADVANCE(197);
      if (lookahead == 's') ADVANCE(96);
      END_STATE();
    case 101:
      if (lookahead == 'r') ADVANCE(232);
      END_STATE();
    case 102:
      if (lookahead == 's') ADVANCE(95);
      END_STATE();
    case 103:
      if (lookahead == 'x') ADVANCE(233);
      END_STATE();
    case 104:
      if (lookahead == 'B' ||
          lookahead == 'H') ADVANCE(216);
      END_STATE();
    case 105:
      if (lookahead == 'b' ||
          lookahead == 'h') ADVANCE(216);
      END_STATE();
    case 106:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(197);
      END_STATE();
    case 107:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(237);
      END_STATE();
    case 108:
      if (eof) ADVANCE(109);
      if (lookahead == '!') ADVANCE(224);
      if (lookahead == ',') ADVANCE(201);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '0') ADVANCE(234);
      if (lookahead == ';') ADVANCE(238);
      if (lookahead == '@') ADVANCE(239);
      if (lookahead == 'A') ADVANCE(12);
      if (lookahead == 'B') ADVANCE(221);
      if (lookahead == 'C') ADVANCE(22);
      if (lookahead == 'E') ADVANCE(25);
      if (lookahead == 'L') ADVANCE(14);
      if (lookahead == 'M') ADVANCE(17);
      if (lookahead == 'O') ADVANCE(29);
      if (lookahead == 'R') ADVANCE(30);
      if (lookahead == 'S') ADVANCE(9);
      if (lookahead == 'T') ADVANCE(15);
      if (lookahead == 'U') ADVANCE(23);
      if (lookahead == '[') ADVANCE(212);
      if (lookahead == ']') ADVANCE(213);
      if (lookahead == 'a') ADVANCE(38);
      if (lookahead == 'b') ADVANCE(222);
      if (lookahead == 'c') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(51);
      if (lookahead == 'l') ADVANCE(40);
      if (lookahead == 'm') ADVANCE(43);
      if (lookahead == 'o') ADVANCE(55);
      if (lookahead == 'r') ADVANCE(56);
      if (lookahead == 's') ADVANCE(35);
      if (lookahead == 't') ADVANCE(41);
      if (lookahead == 'u') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(108)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(236);
      if (('D' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_label_definition);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_label_reference);
      if (lookahead == 'A') ADVANCE(181);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_label_reference);
      if (lookahead == 'A') ADVANCE(130);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_label_reference);
      if (lookahead == 'B') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_label_reference);
      if (lookahead == 'B') ADVANCE(118);
      if (lookahead == 'H') ADVANCE(181);
      if (lookahead == 'M') ADVANCE(132);
      if (lookahead == 'P') ADVANCE(181);
      if (lookahead == 'T') ADVANCE(138);
      if (lookahead == 'U') ADVANCE(113);
      if (lookahead == 'W') ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_label_reference);
      if (lookahead == 'C') ADVANCE(181);
      if (lookahead == 'L') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_label_reference);
      if (lookahead == 'C') ADVANCE(181);
      if (lookahead == 'M') ADVANCE(177);
      if (lookahead == 'S') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_label_reference);
      if (lookahead == 'C') ADVANCE(181);
      if (lookahead == 'S') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_label_reference);
      if (lookahead == 'C') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_label_reference);
      if (lookahead == 'D') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_label_reference);
      if (lookahead == 'D') ADVANCE(176);
      if (lookahead == 'L') ADVANCE(181);
      if (lookahead == 'N') ADVANCE(119);
      if (lookahead == 'S') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_label_reference);
      if (lookahead == 'D') ADVANCE(138);
      if (lookahead == 'E') ADVANCE(181);
      if (lookahead == 'R') ADVANCE(181);
      if (lookahead == 'S') ADVANCE(129);
      if (lookahead == 'T') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_label_reference);
      if (lookahead == 'E') ADVANCE(181);
      if (lookahead == 'T') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_label_reference);
      if (lookahead == 'E') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_label_reference);
      if (lookahead == 'E') ADVANCE(137);
      if (lookahead == 'S') ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_label_reference);
      if (lookahead == 'I') ADVANCE(181);
      if (lookahead == 'L') ADVANCE(111);
      if (lookahead == 'O') ADVANCE(141);
      if (lookahead == 'U') ADVANCE(130);
      if (lookahead == 'V') ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_label_reference);
      if (lookahead == 'I') ADVANCE(181);
      if (lookahead == 'P') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_label_reference);
      if (lookahead == 'I') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_label_reference);
      if (lookahead == 'I') ADVANCE(118);
      if (lookahead == 'X') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_label_reference);
      if (lookahead == 'L') ADVANCE(181);
      if (lookahead == 'R') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_label_reference);
      if (lookahead == 'L') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_label_reference);
      if (lookahead == 'L') ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_label_reference);
      if (lookahead == 'L') ADVANCE(112);
      if (lookahead == 'U') ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_label_reference);
      if (lookahead == 'M') ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_label_reference);
      if (lookahead == 'N') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_label_reference);
      if (lookahead == 'O') ADVANCE(138);
      if (lookahead == 'Q') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_label_reference);
      if (lookahead == 'O') ADVANCE(138);
      if (lookahead == 'R') ADVANCE(142);
      if (lookahead == 'S') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(197);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_label_reference);
      if (lookahead == 'Q') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_label_reference);
      if (lookahead == 'R') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_label_reference);
      if (lookahead == 'R') ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_label_reference);
      if (lookahead == 'T') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_label_reference);
      if (lookahead == 'V') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_label_reference);
      if (lookahead == 'X') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_label_reference);
      if (lookahead == 'a') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_label_reference);
      if (lookahead == 'a') ADVANCE(162);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_label_reference);
      if (lookahead == 'b') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_label_reference);
      if (lookahead == 'b') ADVANCE(150);
      if (lookahead == 'h') ADVANCE(181);
      if (lookahead == 'm') ADVANCE(164);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 't') ADVANCE(170);
      if (lookahead == 'u') ADVANCE(145);
      if (lookahead == 'w') ADVANCE(158);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_label_reference);
      if (lookahead == 'c') ADVANCE(181);
      if (lookahead == 'l') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_label_reference);
      if (lookahead == 'c') ADVANCE(181);
      if (lookahead == 'm') ADVANCE(180);
      if (lookahead == 's') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_label_reference);
      if (lookahead == 'c') ADVANCE(181);
      if (lookahead == 's') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_label_reference);
      if (lookahead == 'c') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_label_reference);
      if (lookahead == 'd') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_label_reference);
      if (lookahead == 'd') ADVANCE(179);
      if (lookahead == 'l') ADVANCE(181);
      if (lookahead == 'n') ADVANCE(151);
      if (lookahead == 's') ADVANCE(161);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_label_reference);
      if (lookahead == 'd') ADVANCE(170);
      if (lookahead == 'e') ADVANCE(181);
      if (lookahead == 'r') ADVANCE(181);
      if (lookahead == 's') ADVANCE(161);
      if (lookahead == 't') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_label_reference);
      if (lookahead == 'e') ADVANCE(181);
      if (lookahead == 't') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_label_reference);
      if (lookahead == 'e') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_label_reference);
      if (lookahead == 'e') ADVANCE(169);
      if (lookahead == 's') ADVANCE(172);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_label_reference);
      if (lookahead == 'i') ADVANCE(181);
      if (lookahead == 'l') ADVANCE(143);
      if (lookahead == 'o') ADVANCE(173);
      if (lookahead == 'u') ADVANCE(162);
      if (lookahead == 'v') ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_label_reference);
      if (lookahead == 'i') ADVANCE(181);
      if (lookahead == 'p') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_label_reference);
      if (lookahead == 'i') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_label_reference);
      if (lookahead == 'i') ADVANCE(150);
      if (lookahead == 'x') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_label_reference);
      if (lookahead == 'l') ADVANCE(181);
      if (lookahead == 'r') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_label_reference);
      if (lookahead == 'l') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_label_reference);
      if (lookahead == 'l') ADVANCE(162);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_label_reference);
      if (lookahead == 'l') ADVANCE(144);
      if (lookahead == 'u') ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_label_reference);
      if (lookahead == 'm') ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_label_reference);
      if (lookahead == 'n') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_label_reference);
      if (lookahead == 'o') ADVANCE(170);
      if (lookahead == 'q') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_label_reference);
      if (lookahead == 'o') ADVANCE(170);
      if (lookahead == 'r') ADVANCE(174);
      if (lookahead == 's') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(197);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_label_reference);
      if (lookahead == 'q') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_label_reference);
      if (lookahead == 'r') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_label_reference);
      if (lookahead == 'r') ADVANCE(170);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_label_reference);
      if (lookahead == 't') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_label_reference);
      if (lookahead == 'v') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_label_reference);
      if (lookahead == 'x') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_label_reference);
      if (lookahead == 'B' ||
          lookahead == 'C') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_label_reference);
      if (lookahead == 'C' ||
          lookahead == 'D') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_label_reference);
      if (lookahead == 'N' ||
          lookahead == 'P') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_label_reference);
      if (lookahead == 'b' ||
          lookahead == 'c') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_label_reference);
      if (lookahead == 'c' ||
          lookahead == 'd') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_label_reference);
      if (lookahead == 'n' ||
          lookahead == 'p') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_label_reference);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_condition_token1);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_condition_token2);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_condition_token3);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_condition_token4);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_condition_token5);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_condition_token6);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_condition_token7);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_condition_token8);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_condition_token9);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_condition_token10);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_condition_token11);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_condition_token12);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_condition_token13);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_condition_token14);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_condition_token15);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_register);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(236);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_data_processing_instruction_token1);
      if (lookahead == ':') ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_data_processing_instruction_token2);
      if (lookahead == ':') ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_data_processing_instruction_token3);
      if (lookahead == ':') ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_set_condition_flags_token1);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_set_condition_flags_token1);
      if (lookahead == 'B' ||
          lookahead == 'H') ADVANCE(216);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_set_condition_flags_token1);
      if (lookahead == 'b' ||
          lookahead == 'h') ADVANCE(216);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_multiply_instruction_token1);
      if (lookahead == ':') ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_multiply_instruction_token2);
      if (lookahead == ':') ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_multiply_long_instruction_token1);
      if (lookahead == ':') ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_single_data_swap_instruction_token1);
      if (lookahead == ':') ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_branch_exchange_instruction_token1);
      if (lookahead == ':') ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_halfword_data_transfer_instruction_token1);
      if (lookahead == ':') ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_halfword_data_transfer_instruction_token2);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_halfword_data_transfer_instruction_token2);
      if (lookahead == 'I') ADVANCE(190);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_halfword_data_transfer_instruction_token2);
      if (lookahead == 'i') ADVANCE(190);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_halfword_data_transfer_address_token1);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_byte_transfer_token1);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_byte_transfer_token1);
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == 'I') ADVANCE(11);
      if (lookahead == 'X') ADVANCE(214);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_byte_transfer_token1);
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == 'i') ADVANCE(37);
      if (lookahead == 'x') ADVANCE(214);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_t_bit);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_write_back);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_link);
      if (lookahead == 'E') ADVANCE(195);
      if (lookahead == 'S') ADVANCE(191);
      if (lookahead == 'T') ADVANCE(193);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_link);
      if (lookahead == 'e') ADVANCE(195);
      if (lookahead == 's') ADVANCE(191);
      if (lookahead == 't') ADVANCE(193);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_software_interrupt_instruction_token1);
      if (lookahead == ':') ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_shift_token1);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_shift_token2);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_shift_token3);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_shift_token4);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_shift_token5);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_shift_token6);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == 'x') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(236);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(198);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(236);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_literal_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(238);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(239);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_comment_token3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(240);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 108},
  [2] = {.lex_state = 108},
  [3] = {.lex_state = 108},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 108},
  [14] = {.lex_state = 108},
  [15] = {.lex_state = 108},
  [16] = {.lex_state = 108},
  [17] = {.lex_state = 108},
  [18] = {.lex_state = 108},
  [19] = {.lex_state = 108},
  [20] = {.lex_state = 108},
  [21] = {.lex_state = 108},
  [22] = {.lex_state = 108},
  [23] = {.lex_state = 108},
  [24] = {.lex_state = 108},
  [25] = {.lex_state = 108},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 108},
  [28] = {.lex_state = 108},
  [29] = {.lex_state = 108},
  [30] = {.lex_state = 108},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 108},
  [34] = {.lex_state = 108},
  [35] = {.lex_state = 108},
  [36] = {.lex_state = 108},
  [37] = {.lex_state = 108},
  [38] = {.lex_state = 108},
  [39] = {.lex_state = 108},
  [40] = {.lex_state = 108},
  [41] = {.lex_state = 108},
  [42] = {.lex_state = 108},
  [43] = {.lex_state = 108},
  [44] = {.lex_state = 108},
  [45] = {.lex_state = 108},
  [46] = {.lex_state = 108},
  [47] = {.lex_state = 108},
  [48] = {.lex_state = 108},
  [49] = {.lex_state = 108},
  [50] = {.lex_state = 108},
  [51] = {.lex_state = 108},
  [52] = {.lex_state = 108},
  [53] = {.lex_state = 108},
  [54] = {.lex_state = 108},
  [55] = {.lex_state = 108},
  [56] = {.lex_state = 108},
  [57] = {.lex_state = 108},
  [58] = {.lex_state = 108},
  [59] = {.lex_state = 108},
  [60] = {.lex_state = 108},
  [61] = {.lex_state = 108},
  [62] = {.lex_state = 108},
  [63] = {.lex_state = 108},
  [64] = {.lex_state = 108},
  [65] = {.lex_state = 108},
  [66] = {.lex_state = 108},
  [67] = {.lex_state = 108},
  [68] = {.lex_state = 108},
  [69] = {.lex_state = 108},
  [70] = {.lex_state = 108},
  [71] = {.lex_state = 108},
  [72] = {.lex_state = 108},
  [73] = {.lex_state = 108},
  [74] = {.lex_state = 108},
  [75] = {.lex_state = 108},
  [76] = {.lex_state = 108},
  [77] = {.lex_state = 108},
  [78] = {.lex_state = 108},
  [79] = {.lex_state = 108},
  [80] = {.lex_state = 108},
  [81] = {.lex_state = 108},
  [82] = {.lex_state = 108},
  [83] = {.lex_state = 108},
  [84] = {.lex_state = 108},
  [85] = {.lex_state = 108},
  [86] = {.lex_state = 108},
  [87] = {.lex_state = 108},
  [88] = {.lex_state = 108},
  [89] = {.lex_state = 108},
  [90] = {.lex_state = 108},
  [91] = {.lex_state = 108},
  [92] = {.lex_state = 108},
  [93] = {.lex_state = 108},
  [94] = {.lex_state = 108},
  [95] = {.lex_state = 108},
  [96] = {.lex_state = 108},
  [97] = {.lex_state = 108},
  [98] = {.lex_state = 108},
  [99] = {.lex_state = 108},
  [100] = {.lex_state = 108},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 108},
  [107] = {.lex_state = 108},
  [108] = {.lex_state = 108},
  [109] = {.lex_state = 6},
  [110] = {.lex_state = 2},
  [111] = {.lex_state = 6},
  [112] = {.lex_state = 108},
  [113] = {.lex_state = 6},
  [114] = {.lex_state = 6},
  [115] = {.lex_state = 6},
  [116] = {.lex_state = 6},
  [117] = {.lex_state = 3},
  [118] = {.lex_state = 108},
  [119] = {.lex_state = 108},
  [120] = {.lex_state = 108},
  [121] = {.lex_state = 108},
  [122] = {.lex_state = 108},
  [123] = {.lex_state = 108},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 2},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 4},
  [129] = {.lex_state = 108},
  [130] = {.lex_state = 108},
  [131] = {.lex_state = 4},
  [132] = {.lex_state = 4},
  [133] = {.lex_state = 4},
  [134] = {.lex_state = 1},
  [135] = {.lex_state = 108},
  [136] = {.lex_state = 4},
  [137] = {.lex_state = 4},
  [138] = {.lex_state = 4},
  [139] = {.lex_state = 108},
  [140] = {.lex_state = 108},
  [141] = {.lex_state = 4},
  [142] = {.lex_state = 4},
  [143] = {.lex_state = 4},
  [144] = {.lex_state = 4},
  [145] = {.lex_state = 1},
  [146] = {.lex_state = 1},
  [147] = {.lex_state = 108},
  [148] = {.lex_state = 4},
  [149] = {.lex_state = 4},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 4},
  [152] = {.lex_state = 4},
  [153] = {.lex_state = 2},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 2},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 2},
  [160] = {.lex_state = 4},
  [161] = {.lex_state = 2},
  [162] = {.lex_state = 4},
  [163] = {.lex_state = 4},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 4},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 4},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 4},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 4},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 4},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 4},
  [176] = {.lex_state = 4},
  [177] = {.lex_state = 4},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 4},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 4},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 4},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 4},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 2},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 2},
  [195] = {.lex_state = 4},
  [196] = {.lex_state = 4},
  [197] = {.lex_state = 4},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 4},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 4},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 4},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 4},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 4},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 4},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 4},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 4},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 4},
  [218] = {.lex_state = 4},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 4},
  [224] = {.lex_state = 4},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 4},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 4},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 4},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 4},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 4},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 4},
  [239] = {.lex_state = 4},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 4},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 4},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 4},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 4},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 4},
  [250] = {.lex_state = 4},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 4},
  [256] = {.lex_state = 4},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 4},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 2},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 4},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 2},
  [267] = {.lex_state = 2},
  [268] = {.lex_state = 4},
  [269] = {.lex_state = 4},
  [270] = {.lex_state = 4},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 4},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 4},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 4},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 4},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 4},
  [282] = {.lex_state = 2},
  [283] = {.lex_state = 2},
  [284] = {.lex_state = 4},
  [285] = {.lex_state = 4},
  [286] = {.lex_state = 4},
  [287] = {.lex_state = 4},
  [288] = {.lex_state = 4},
  [289] = {.lex_state = 2},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 4},
  [292] = {.lex_state = 4},
  [293] = {.lex_state = 4},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 4},
  [296] = {.lex_state = 2},
  [297] = {.lex_state = 4},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 4},
  [300] = {.lex_state = 4},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 4},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 4},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 2},
  [308] = {.lex_state = 4},
  [309] = {.lex_state = 4},
  [310] = {.lex_state = 4},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 4},
  [314] = {.lex_state = 4},
  [315] = {.lex_state = 2},
  [316] = {.lex_state = 4},
  [317] = {.lex_state = 4},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 4},
  [320] = {.lex_state = 4},
  [321] = {.lex_state = 2},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 4},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 2},
  [327] = {.lex_state = 4},
  [328] = {.lex_state = 2},
  [329] = {.lex_state = 4},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 2},
  [332] = {.lex_state = 4},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 4},
  [336] = {.lex_state = 2},
  [337] = {.lex_state = 4},
  [338] = {.lex_state = 4},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 4},
  [341] = {.lex_state = 2},
  [342] = {.lex_state = 4},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 2},
  [346] = {.lex_state = 2},
  [347] = {.lex_state = 2},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 2},
  [350] = {.lex_state = 4},
  [351] = {.lex_state = 2},
  [352] = {.lex_state = 4},
  [353] = {.lex_state = 2},
  [354] = {.lex_state = 4},
  [355] = {.lex_state = 2},
  [356] = {.lex_state = 4},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_label_reference] = ACTIONS(1),
    [aux_sym_condition_token1] = ACTIONS(1),
    [aux_sym_condition_token2] = ACTIONS(1),
    [aux_sym_condition_token3] = ACTIONS(1),
    [aux_sym_condition_token4] = ACTIONS(1),
    [aux_sym_condition_token5] = ACTIONS(1),
    [aux_sym_condition_token6] = ACTIONS(1),
    [aux_sym_condition_token7] = ACTIONS(1),
    [aux_sym_condition_token8] = ACTIONS(1),
    [aux_sym_condition_token9] = ACTIONS(1),
    [aux_sym_condition_token10] = ACTIONS(1),
    [aux_sym_condition_token11] = ACTIONS(1),
    [aux_sym_condition_token12] = ACTIONS(1),
    [aux_sym_condition_token13] = ACTIONS(1),
    [aux_sym_condition_token14] = ACTIONS(1),
    [aux_sym_condition_token15] = ACTIONS(1),
    [sym_register] = ACTIONS(1),
    [aux_sym_data_processing_instruction_token1] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_data_processing_instruction_token2] = ACTIONS(1),
    [aux_sym_data_processing_instruction_token3] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [aux_sym_set_condition_flags_token1] = ACTIONS(1),
    [aux_sym_multiply_instruction_token1] = ACTIONS(1),
    [aux_sym_multiply_instruction_token2] = ACTIONS(1),
    [aux_sym_multiply_long_instruction_token1] = ACTIONS(1),
    [aux_sym_single_data_swap_instruction_token1] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [aux_sym_branch_exchange_instruction_token1] = ACTIONS(1),
    [aux_sym_halfword_data_transfer_instruction_token1] = ACTIONS(1),
    [aux_sym_halfword_data_transfer_instruction_token2] = ACTIONS(1),
    [aux_sym_halfword_data_transfer_address_token1] = ACTIONS(1),
    [aux_sym_byte_transfer_token1] = ACTIONS(1),
    [sym_t_bit] = ACTIONS(1),
    [sym_write_back] = ACTIONS(1),
    [sym_link] = ACTIONS(1),
    [aux_sym_software_interrupt_instruction_token1] = ACTIONS(1),
    [aux_sym_shift_token1] = ACTIONS(1),
    [aux_sym_shift_token2] = ACTIONS(1),
    [aux_sym_shift_token3] = ACTIONS(1),
    [aux_sym_shift_token4] = ACTIONS(1),
    [aux_sym_shift_token5] = ACTIONS(1),
    [aux_sym_shift_token6] = ACTIONS(1),
    [aux_sym_literal_token1] = ACTIONS(1),
    [aux_sym_literal_token2] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(1),
    [aux_sym_comment_token2] = ACTIONS(1),
    [aux_sym_comment_token3] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(348),
    [sym__source_section] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym_instruction] = STATE(2),
    [sym_data_processing_instruction] = STATE(48),
    [sym_multiply_instruction] = STATE(48),
    [sym_multiply_long_instruction] = STATE(48),
    [sym_single_data_swap_instruction] = STATE(48),
    [sym_branch_exchange_instruction] = STATE(48),
    [sym_halfword_data_transfer_instruction] = STATE(48),
    [sym_single_data_transfer_instruction] = STATE(48),
    [sym_branch_instruction] = STATE(48),
    [sym_software_interrupt_instruction] = STATE(48),
    [sym_comment] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_label_definition] = ACTIONS(5),
    [aux_sym_data_processing_instruction_token1] = ACTIONS(7),
    [aux_sym_data_processing_instruction_token2] = ACTIONS(9),
    [aux_sym_data_processing_instruction_token3] = ACTIONS(11),
    [aux_sym_multiply_instruction_token1] = ACTIONS(13),
    [aux_sym_multiply_instruction_token2] = ACTIONS(15),
    [aux_sym_multiply_long_instruction_token1] = ACTIONS(17),
    [aux_sym_single_data_swap_instruction_token1] = ACTIONS(19),
    [aux_sym_branch_exchange_instruction_token1] = ACTIONS(21),
    [aux_sym_halfword_data_transfer_instruction_token1] = ACTIONS(23),
    [aux_sym_byte_transfer_token1] = ACTIONS(25),
    [aux_sym_software_interrupt_instruction_token1] = ACTIONS(27),
    [aux_sym_comment_token1] = ACTIONS(29),
    [aux_sym_comment_token2] = ACTIONS(29),
    [aux_sym_comment_token3] = ACTIONS(29),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(5), 1,
      sym_label_definition,
    ACTIONS(7), 1,
      aux_sym_data_processing_instruction_token1,
    ACTIONS(9), 1,
      aux_sym_data_processing_instruction_token2,
    ACTIONS(11), 1,
      aux_sym_data_processing_instruction_token3,
    ACTIONS(13), 1,
      aux_sym_multiply_instruction_token1,
    ACTIONS(15), 1,
      aux_sym_multiply_instruction_token2,
    ACTIONS(17), 1,
      aux_sym_multiply_long_instruction_token1,
    ACTIONS(19), 1,
      aux_sym_single_data_swap_instruction_token1,
    ACTIONS(21), 1,
      aux_sym_branch_exchange_instruction_token1,
    ACTIONS(23), 1,
      aux_sym_halfword_data_transfer_instruction_token1,
    ACTIONS(25), 1,
      aux_sym_byte_transfer_token1,
    ACTIONS(27), 1,
      aux_sym_software_interrupt_instruction_token1,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 3,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    STATE(3), 5,
      sym__source_section,
      sym_symbol,
      sym_instruction,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(48), 9,
      sym_data_processing_instruction,
      sym_multiply_instruction,
      sym_multiply_long_instruction,
      sym_single_data_swap_instruction,
      sym_branch_exchange_instruction,
      sym_halfword_data_transfer_instruction,
      sym_single_data_transfer_instruction,
      sym_branch_instruction,
      sym_software_interrupt_instruction,
  [63] = 16,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      sym_label_definition,
    ACTIONS(38), 1,
      aux_sym_data_processing_instruction_token1,
    ACTIONS(41), 1,
      aux_sym_data_processing_instruction_token2,
    ACTIONS(44), 1,
      aux_sym_data_processing_instruction_token3,
    ACTIONS(47), 1,
      aux_sym_multiply_instruction_token1,
    ACTIONS(50), 1,
      aux_sym_multiply_instruction_token2,
    ACTIONS(53), 1,
      aux_sym_multiply_long_instruction_token1,
    ACTIONS(56), 1,
      aux_sym_single_data_swap_instruction_token1,
    ACTIONS(59), 1,
      aux_sym_branch_exchange_instruction_token1,
    ACTIONS(62), 1,
      aux_sym_halfword_data_transfer_instruction_token1,
    ACTIONS(65), 1,
      aux_sym_byte_transfer_token1,
    ACTIONS(68), 1,
      aux_sym_software_interrupt_instruction_token1,
    ACTIONS(71), 3,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    STATE(3), 5,
      sym__source_section,
      sym_symbol,
      sym_instruction,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(48), 9,
      sym_data_processing_instruction,
      sym_multiply_instruction,
      sym_multiply_long_instruction,
      sym_single_data_swap_instruction,
      sym_branch_exchange_instruction,
      sym_halfword_data_transfer_instruction,
      sym_single_data_transfer_instruction,
      sym_branch_instruction,
      sym_software_interrupt_instruction,
  [126] = 7,
    ACTIONS(76), 1,
      anon_sym_,
    ACTIONS(78), 1,
      aux_sym_halfword_data_transfer_instruction_token2,
    ACTIONS(80), 1,
      aux_sym_byte_transfer_token1,
    ACTIONS(82), 1,
      sym_t_bit,
    STATE(110), 1,
      sym_condition,
    STATE(153), 1,
      sym_byte_transfer,
    ACTIONS(74), 15,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token3,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_condition_token8,
      aux_sym_condition_token9,
      aux_sym_condition_token10,
      aux_sym_condition_token11,
      aux_sym_condition_token12,
      aux_sym_condition_token13,
      aux_sym_condition_token14,
      aux_sym_condition_token15,
  [162] = 5,
    ACTIONS(84), 1,
      anon_sym_,
    ACTIONS(86), 1,
      aux_sym_set_condition_flags_token1,
    STATE(134), 1,
      sym_condition,
    STATE(326), 1,
      sym_set_condition_flags,
    ACTIONS(74), 15,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token3,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_condition_token8,
      aux_sym_condition_token9,
      aux_sym_condition_token10,
      aux_sym_condition_token11,
      aux_sym_condition_token12,
      aux_sym_condition_token13,
      aux_sym_condition_token14,
      aux_sym_condition_token15,
  [192] = 5,
    ACTIONS(86), 1,
      aux_sym_set_condition_flags_token1,
    ACTIONS(88), 1,
      anon_sym_,
    STATE(127), 1,
      sym_condition,
    STATE(289), 1,
      sym_set_condition_flags,
    ACTIONS(74), 15,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token3,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_condition_token8,
      aux_sym_condition_token9,
      aux_sym_condition_token10,
      aux_sym_condition_token11,
      aux_sym_condition_token12,
      aux_sym_condition_token13,
      aux_sym_condition_token14,
      aux_sym_condition_token15,
  [222] = 5,
    ACTIONS(86), 1,
      aux_sym_set_condition_flags_token1,
    ACTIONS(90), 1,
      anon_sym_,
    STATE(150), 1,
      sym_condition,
    STATE(262), 1,
      sym_set_condition_flags,
    ACTIONS(74), 15,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token3,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_condition_token8,
      aux_sym_condition_token9,
      aux_sym_condition_token10,
      aux_sym_condition_token11,
      aux_sym_condition_token12,
      aux_sym_condition_token13,
      aux_sym_condition_token14,
      aux_sym_condition_token15,
  [252] = 5,
    ACTIONS(86), 1,
      aux_sym_set_condition_flags_token1,
    ACTIONS(92), 1,
      anon_sym_,
    STATE(146), 1,
      sym_condition,
    STATE(194), 1,
      sym_set_condition_flags,
    ACTIONS(74), 15,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token3,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_condition_token8,
      aux_sym_condition_token9,
      aux_sym_condition_token10,
      aux_sym_condition_token11,
      aux_sym_condition_token12,
      aux_sym_condition_token13,
      aux_sym_condition_token14,
      aux_sym_condition_token15,
  [282] = 5,
    ACTIONS(86), 1,
      aux_sym_set_condition_flags_token1,
    ACTIONS(94), 1,
      anon_sym_,
    STATE(145), 1,
      sym_condition,
    STATE(161), 1,
      sym_set_condition_flags,
    ACTIONS(74), 15,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token3,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_condition_token8,
      aux_sym_condition_token9,
      aux_sym_condition_token10,
      aux_sym_condition_token11,
      aux_sym_condition_token12,
      aux_sym_condition_token13,
      aux_sym_condition_token14,
      aux_sym_condition_token15,
  [312] = 5,
    ACTIONS(86), 1,
      aux_sym_set_condition_flags_token1,
    ACTIONS(96), 1,
      anon_sym_,
    STATE(126), 1,
      sym_condition,
    STATE(355), 1,
      sym_set_condition_flags,
    ACTIONS(74), 15,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token3,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_condition_token8,
      aux_sym_condition_token9,
      aux_sym_condition_token10,
      aux_sym_condition_token11,
      aux_sym_condition_token12,
      aux_sym_condition_token13,
      aux_sym_condition_token14,
      aux_sym_condition_token15,
  [342] = 5,
    ACTIONS(80), 1,
      aux_sym_byte_transfer_token1,
    ACTIONS(98), 1,
      anon_sym_,
    STATE(125), 1,
      sym_condition,
    STATE(353), 1,
      sym_byte_transfer,
    ACTIONS(74), 15,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token3,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_condition_token8,
      aux_sym_condition_token9,
      aux_sym_condition_token10,
      aux_sym_condition_token11,
      aux_sym_condition_token12,
      aux_sym_condition_token13,
      aux_sym_condition_token14,
      aux_sym_condition_token15,
  [372] = 4,
    ACTIONS(100), 1,
      anon_sym_,
    ACTIONS(102), 1,
      sym_link,
    STATE(346), 1,
      sym_condition,
    ACTIONS(74), 15,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token3,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_condition_token8,
      aux_sym_condition_token9,
      aux_sym_condition_token10,
      aux_sym_condition_token11,
      aux_sym_condition_token12,
      aux_sym_condition_token13,
      aux_sym_condition_token14,
      aux_sym_condition_token15,
  [399] = 3,
    ACTIONS(108), 1,
      sym_write_back,
    ACTIONS(104), 5,
      ts_builtin_sym_end,
      sym_label_definition,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(106), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [423] = 3,
    ACTIONS(114), 1,
      sym_write_back,
    ACTIONS(110), 5,
      ts_builtin_sym_end,
      sym_label_definition,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(112), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [447] = 3,
    ACTIONS(120), 1,
      sym_write_back,
    ACTIONS(116), 5,
      ts_builtin_sym_end,
      sym_label_definition,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(118), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [471] = 2,
    ACTIONS(122), 6,
      ts_builtin_sym_end,
      sym_label_definition,
      anon_sym_RBRACK,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(124), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [493] = 3,
    ACTIONS(130), 1,
      sym_write_back,
    ACTIONS(126), 5,
      ts_builtin_sym_end,
      sym_label_definition,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(128), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [517] = 3,
    ACTIONS(136), 1,
      sym_write_back,
    ACTIONS(132), 5,
      ts_builtin_sym_end,
      sym_label_definition,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(134), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [541] = 3,
    ACTIONS(142), 1,
      anon_sym_COMMA,
    ACTIONS(138), 5,
      ts_builtin_sym_end,
      sym_label_definition,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(140), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [565] = 3,
    ACTIONS(148), 1,
      sym_write_back,
    ACTIONS(144), 5,
      ts_builtin_sym_end,
      sym_label_definition,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(146), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [589] = 3,
    ACTIONS(154), 1,
      sym_write_back,
    ACTIONS(150), 5,
      ts_builtin_sym_end,
      sym_label_definition,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(152), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [613] = 3,
    ACTIONS(160), 1,
      anon_sym_COMMA,
    ACTIONS(156), 5,
      ts_builtin_sym_end,
      sym_label_definition,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(158), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [637] = 3,
    ACTIONS(166), 1,
      sym_write_back,
    ACTIONS(162), 5,
      ts_builtin_sym_end,
      sym_label_definition,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(164), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [661] = 2,
    ACTIONS(168), 6,
      ts_builtin_sym_end,
      sym_label_definition,
      anon_sym_RBRACK,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(170), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [683] = 3,
    ACTIONS(176), 1,
      anon_sym_COMMA,
    ACTIONS(172), 5,
      ts_builtin_sym_end,
      sym_label_definition,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(174), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [707] = 3,
    ACTIONS(178), 1,
      anon_sym_,
    STATE(345), 1,
      sym_condition,
    ACTIONS(74), 15,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token3,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_condition_token8,
      aux_sym_condition_token9,
      aux_sym_condition_token10,
      aux_sym_condition_token11,
      aux_sym_condition_token12,
      aux_sym_condition_token13,
      aux_sym_condition_token14,
      aux_sym_condition_token15,
  [731] = 2,
    ACTIONS(180), 6,
      ts_builtin_sym_end,
      sym_label_definition,
      anon_sym_RBRACK,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(182), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [753] = 3,
    ACTIONS(188), 1,
      anon_sym_COMMA,
    ACTIONS(184), 5,
      ts_builtin_sym_end,
      sym_label_definition,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(186), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [777] = 2,
    ACTIONS(190), 6,
      ts_builtin_sym_end,
      sym_label_definition,
      anon_sym_RBRACK,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(192), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [799] = 3,
    ACTIONS(198), 1,
      anon_sym_COMMA,
    ACTIONS(194), 5,
      ts_builtin_sym_end,
      sym_label_definition,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(196), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [823] = 3,
    ACTIONS(200), 1,
      anon_sym_,
    STATE(351), 1,
      sym_condition,
    ACTIONS(74), 15,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token3,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_condition_token8,
      aux_sym_condition_token9,
      aux_sym_condition_token10,
      aux_sym_condition_token11,
      aux_sym_condition_token12,
      aux_sym_condition_token13,
      aux_sym_condition_token14,
      aux_sym_condition_token15,
  [847] = 3,
    ACTIONS(202), 1,
      anon_sym_,
    STATE(266), 1,
      sym_condition,
    ACTIONS(74), 15,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token3,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_condition_token8,
      aux_sym_condition_token9,
      aux_sym_condition_token10,
      aux_sym_condition_token11,
      aux_sym_condition_token12,
      aux_sym_condition_token13,
      aux_sym_condition_token14,
      aux_sym_condition_token15,
  [871] = 2,
    ACTIONS(204), 5,
      ts_builtin_sym_end,
      sym_label_definition,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(206), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [892] = 2,
    ACTIONS(208), 5,
      ts_builtin_sym_end,
      sym_label_definition,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(210), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [913] = 2,
    ACTIONS(212), 5,
      ts_builtin_sym_end,
      sym_label_definition,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(214), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [934] = 2,
    ACTIONS(216), 5,
      ts_builtin_sym_end,
      sym_label_definition,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(218), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [955] = 2,
    ACTIONS(220), 5,
      ts_builtin_sym_end,
      sym_label_definition,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(222), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [976] = 2,
    ACTIONS(224), 5,
      ts_builtin_sym_end,
      sym_label_definition,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(226), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [997] = 2,
    ACTIONS(228), 5,
      ts_builtin_sym_end,
      sym_label_definition,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(230), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [1018] = 2,
    ACTIONS(232), 5,
      ts_builtin_sym_end,
      sym_label_definition,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(234), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [1039] = 2,
    ACTIONS(236), 5,
      ts_builtin_sym_end,
      sym_label_definition,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(238), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [1060] = 2,
    ACTIONS(240), 5,
      ts_builtin_sym_end,
      sym_label_definition,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(242), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [1081] = 2,
    ACTIONS(244), 5,
      ts_builtin_sym_end,
      sym_label_definition,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(246), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [1102] = 2,
    ACTIONS(248), 5,
      ts_builtin_sym_end,
      sym_label_definition,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(250), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [1123] = 2,
    ACTIONS(252), 5,
      ts_builtin_sym_end,
      sym_label_definition,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(254), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [1144] = 2,
    ACTIONS(256), 5,
      ts_builtin_sym_end,
      sym_label_definition,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(258), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [1165] = 2,
    ACTIONS(260), 5,
      ts_builtin_sym_end,
      sym_label_definition,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(262), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [1186] = 2,
    ACTIONS(264), 5,
      ts_builtin_sym_end,
      sym_label_definition,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(266), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [1207] = 2,
    ACTIONS(268), 5,
      ts_builtin_sym_end,
      sym_label_definition,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(270), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [1228] = 2,
    ACTIONS(272), 5,
      ts_builtin_sym_end,
      sym_label_definition,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(274), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [1249] = 2,
    ACTIONS(276), 5,
      ts_builtin_sym_end,
      sym_label_definition,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(278), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [1270] = 2,
    ACTIONS(280), 5,
      ts_builtin_sym_end,
      sym_label_definition,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(282), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [1291] = 2,
    ACTIONS(284), 5,
      ts_builtin_sym_end,
      sym_label_definition,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(286), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [1312] = 2,
    ACTIONS(288), 5,
      ts_builtin_sym_end,
      sym_label_definition,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(290), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [1333] = 2,
    ACTIONS(292), 5,
      ts_builtin_sym_end,
      sym_label_definition,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(294), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [1354] = 2,
    ACTIONS(296), 5,
      ts_builtin_sym_end,
      sym_label_definition,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(298), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [1375] = 2,
    ACTIONS(300), 5,
      ts_builtin_sym_end,
      sym_label_definition,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(302), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [1396] = 2,
    ACTIONS(304), 5,
      ts_builtin_sym_end,
      sym_label_definition,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(306), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [1417] = 2,
    ACTIONS(308), 5,
      ts_builtin_sym_end,
      sym_label_definition,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(310), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [1438] = 2,
    ACTIONS(312), 5,
      ts_builtin_sym_end,
      sym_label_definition,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(314), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [1459] = 2,
    ACTIONS(316), 5,
      ts_builtin_sym_end,
      sym_label_definition,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(318), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [1480] = 2,
    ACTIONS(320), 5,
      ts_builtin_sym_end,
      sym_label_definition,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(322), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [1501] = 2,
    ACTIONS(150), 5,
      ts_builtin_sym_end,
      sym_label_definition,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(152), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [1522] = 2,
    ACTIONS(324), 5,
      ts_builtin_sym_end,
      sym_label_definition,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(326), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [1543] = 2,
    ACTIONS(328), 5,
      ts_builtin_sym_end,
      sym_label_definition,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(330), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [1564] = 2,
    ACTIONS(332), 5,
      ts_builtin_sym_end,
      sym_label_definition,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(334), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [1585] = 2,
    ACTIONS(336), 5,
      ts_builtin_sym_end,
      sym_label_definition,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(338), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [1606] = 2,
    ACTIONS(340), 5,
      ts_builtin_sym_end,
      sym_label_definition,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(342), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [1627] = 2,
    ACTIONS(344), 5,
      ts_builtin_sym_end,
      sym_label_definition,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(346), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [1648] = 2,
    ACTIONS(348), 5,
      ts_builtin_sym_end,
      sym_label_definition,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(350), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [1669] = 2,
    ACTIONS(352), 5,
      ts_builtin_sym_end,
      sym_label_definition,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(354), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [1690] = 2,
    ACTIONS(356), 5,
      ts_builtin_sym_end,
      sym_label_definition,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(358), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [1711] = 2,
    ACTIONS(360), 5,
      ts_builtin_sym_end,
      sym_label_definition,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(362), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [1732] = 2,
    ACTIONS(364), 5,
      ts_builtin_sym_end,
      sym_label_definition,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(366), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [1753] = 2,
    ACTIONS(368), 5,
      ts_builtin_sym_end,
      sym_label_definition,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(370), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [1774] = 2,
    ACTIONS(372), 5,
      ts_builtin_sym_end,
      sym_label_definition,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(374), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [1795] = 2,
    ACTIONS(376), 5,
      ts_builtin_sym_end,
      sym_label_definition,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(378), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [1816] = 2,
    ACTIONS(380), 5,
      ts_builtin_sym_end,
      sym_label_definition,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(382), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [1837] = 2,
    ACTIONS(384), 5,
      ts_builtin_sym_end,
      sym_label_definition,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(386), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [1858] = 2,
    ACTIONS(388), 5,
      ts_builtin_sym_end,
      sym_label_definition,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(390), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [1879] = 2,
    ACTIONS(392), 5,
      ts_builtin_sym_end,
      sym_label_definition,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(394), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [1900] = 2,
    ACTIONS(396), 5,
      ts_builtin_sym_end,
      sym_label_definition,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(398), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [1921] = 2,
    ACTIONS(400), 5,
      ts_builtin_sym_end,
      sym_label_definition,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(402), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [1942] = 2,
    ACTIONS(404), 5,
      ts_builtin_sym_end,
      sym_label_definition,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(406), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [1963] = 2,
    ACTIONS(408), 5,
      ts_builtin_sym_end,
      sym_label_definition,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(410), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [1984] = 2,
    ACTIONS(412), 5,
      ts_builtin_sym_end,
      sym_label_definition,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(414), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [2005] = 2,
    ACTIONS(416), 5,
      ts_builtin_sym_end,
      sym_label_definition,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(418), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [2026] = 2,
    ACTIONS(420), 5,
      ts_builtin_sym_end,
      sym_label_definition,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(422), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [2047] = 2,
    ACTIONS(424), 5,
      ts_builtin_sym_end,
      sym_label_definition,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(426), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [2068] = 2,
    ACTIONS(428), 5,
      ts_builtin_sym_end,
      sym_label_definition,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(430), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [2089] = 2,
    ACTIONS(432), 5,
      ts_builtin_sym_end,
      sym_label_definition,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(434), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [2110] = 2,
    ACTIONS(436), 5,
      ts_builtin_sym_end,
      sym_label_definition,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(438), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [2131] = 2,
    ACTIONS(440), 5,
      ts_builtin_sym_end,
      sym_label_definition,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(442), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [2152] = 2,
    ACTIONS(444), 5,
      ts_builtin_sym_end,
      sym_label_definition,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(446), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [2173] = 2,
    ACTIONS(448), 5,
      ts_builtin_sym_end,
      sym_label_definition,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(450), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [2194] = 2,
    ACTIONS(452), 5,
      ts_builtin_sym_end,
      sym_label_definition,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(454), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [2215] = 2,
    ACTIONS(456), 5,
      ts_builtin_sym_end,
      sym_label_definition,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(458), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [2236] = 2,
    ACTIONS(460), 5,
      ts_builtin_sym_end,
      sym_label_definition,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(462), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [2257] = 2,
    ACTIONS(464), 5,
      ts_builtin_sym_end,
      sym_label_definition,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(466), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [2278] = 2,
    ACTIONS(468), 5,
      ts_builtin_sym_end,
      sym_label_definition,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(470), 11,
      aux_sym_data_processing_instruction_token1,
      aux_sym_data_processing_instruction_token2,
      aux_sym_data_processing_instruction_token3,
      aux_sym_multiply_instruction_token1,
      aux_sym_multiply_instruction_token2,
      aux_sym_multiply_long_instruction_token1,
      aux_sym_single_data_swap_instruction_token1,
      aux_sym_branch_exchange_instruction_token1,
      aux_sym_halfword_data_transfer_instruction_token1,
      aux_sym_byte_transfer_token1,
      aux_sym_software_interrupt_instruction_token1,
  [2299] = 3,
    ACTIONS(474), 1,
      aux_sym_shift_token6,
    STATE(343), 1,
      sym_shift,
    ACTIONS(472), 5,
      aux_sym_shift_token1,
      aux_sym_shift_token2,
      aux_sym_shift_token3,
      aux_sym_shift_token4,
      aux_sym_shift_token5,
  [2313] = 3,
    ACTIONS(474), 1,
      aux_sym_shift_token6,
    STATE(41), 1,
      sym_shift,
    ACTIONS(472), 5,
      aux_sym_shift_token1,
      aux_sym_shift_token2,
      aux_sym_shift_token3,
      aux_sym_shift_token4,
      aux_sym_shift_token5,
  [2327] = 3,
    ACTIONS(474), 1,
      aux_sym_shift_token6,
    STATE(324), 1,
      sym_shift,
    ACTIONS(472), 5,
      aux_sym_shift_token1,
      aux_sym_shift_token2,
      aux_sym_shift_token3,
      aux_sym_shift_token4,
      aux_sym_shift_token5,
  [2341] = 3,
    ACTIONS(474), 1,
      aux_sym_shift_token6,
    STATE(55), 1,
      sym_shift,
    ACTIONS(472), 5,
      aux_sym_shift_token1,
      aux_sym_shift_token2,
      aux_sym_shift_token3,
      aux_sym_shift_token4,
      aux_sym_shift_token5,
  [2355] = 3,
    ACTIONS(474), 1,
      aux_sym_shift_token6,
    STATE(79), 1,
      sym_shift,
    ACTIONS(472), 5,
      aux_sym_shift_token1,
      aux_sym_shift_token2,
      aux_sym_shift_token3,
      aux_sym_shift_token4,
      aux_sym_shift_token5,
  [2369] = 5,
    ACTIONS(476), 1,
      anon_sym_LBRACK,
    ACTIONS(478), 1,
      aux_sym_literal_token1,
    ACTIONS(480), 1,
      aux_sym_literal_token2,
    STATE(39), 1,
      sym_literal,
    STATE(77), 1,
      sym_single_data_transfer_address,
  [2385] = 5,
    ACTIONS(478), 1,
      aux_sym_literal_token1,
    ACTIONS(480), 1,
      aux_sym_literal_token2,
    ACTIONS(482), 1,
      anon_sym_LBRACK,
    STATE(65), 1,
      sym_literal,
    STATE(92), 1,
      sym_halfword_data_transfer_address,
  [2401] = 5,
    ACTIONS(476), 1,
      anon_sym_LBRACK,
    ACTIONS(478), 1,
      aux_sym_literal_token1,
    ACTIONS(480), 1,
      aux_sym_literal_token2,
    STATE(39), 1,
      sym_literal,
    STATE(86), 1,
      sym_single_data_transfer_address,
  [2417] = 5,
    ACTIONS(478), 1,
      aux_sym_literal_token1,
    ACTIONS(480), 1,
      aux_sym_literal_token2,
    ACTIONS(484), 1,
      sym_label_reference,
    STATE(53), 1,
      sym_expression,
    STATE(97), 1,
      sym_literal,
  [2433] = 5,
    ACTIONS(80), 1,
      aux_sym_byte_transfer_token1,
    ACTIONS(486), 1,
      anon_sym_,
    ACTIONS(488), 1,
      aux_sym_halfword_data_transfer_instruction_token2,
    ACTIONS(490), 1,
      sym_t_bit,
    STATE(155), 1,
      sym_byte_transfer,
  [2449] = 5,
    ACTIONS(478), 1,
      aux_sym_literal_token1,
    ACTIONS(480), 1,
      aux_sym_literal_token2,
    ACTIONS(484), 1,
      sym_label_reference,
    STATE(96), 1,
      sym_expression,
    STATE(97), 1,
      sym_literal,
  [2465] = 5,
    ACTIONS(478), 1,
      aux_sym_literal_token1,
    ACTIONS(480), 1,
      aux_sym_literal_token2,
    ACTIONS(482), 1,
      anon_sym_LBRACK,
    STATE(64), 1,
      sym_halfword_data_transfer_address,
    STATE(65), 1,
      sym_literal,
  [2481] = 5,
    ACTIONS(478), 1,
      aux_sym_literal_token1,
    ACTIONS(480), 1,
      aux_sym_literal_token2,
    ACTIONS(484), 1,
      sym_label_reference,
    STATE(43), 1,
      sym_expression,
    STATE(97), 1,
      sym_literal,
  [2497] = 5,
    ACTIONS(478), 1,
      aux_sym_literal_token1,
    ACTIONS(480), 1,
      aux_sym_literal_token2,
    ACTIONS(484), 1,
      sym_label_reference,
    STATE(97), 1,
      sym_literal,
    STATE(98), 1,
      sym_expression,
  [2513] = 5,
    ACTIONS(478), 1,
      aux_sym_literal_token1,
    ACTIONS(480), 1,
      aux_sym_literal_token2,
    ACTIONS(484), 1,
      sym_label_reference,
    STATE(52), 1,
      sym_expression,
    STATE(97), 1,
      sym_literal,
  [2529] = 5,
    ACTIONS(478), 1,
      aux_sym_literal_token1,
    ACTIONS(480), 1,
      aux_sym_literal_token2,
    ACTIONS(484), 1,
      sym_label_reference,
    STATE(51), 1,
      sym_expression,
    STATE(97), 1,
      sym_literal,
  [2545] = 2,
    ACTIONS(492), 1,
      anon_sym_,
    ACTIONS(494), 4,
      aux_sym_set_condition_flags_token1,
      aux_sym_halfword_data_transfer_instruction_token2,
      aux_sym_byte_transfer_token1,
      sym_t_bit,
  [2555] = 5,
    ACTIONS(476), 1,
      anon_sym_LBRACK,
    ACTIONS(478), 1,
      aux_sym_literal_token1,
    ACTIONS(480), 1,
      aux_sym_literal_token2,
    STATE(39), 1,
      sym_literal,
    STATE(75), 1,
      sym_single_data_transfer_address,
  [2571] = 5,
    ACTIONS(476), 1,
      anon_sym_LBRACK,
    ACTIONS(478), 1,
      aux_sym_literal_token1,
    ACTIONS(480), 1,
      aux_sym_literal_token2,
    STATE(36), 1,
      sym_single_data_transfer_address,
    STATE(39), 1,
      sym_literal,
  [2587] = 5,
    ACTIONS(476), 1,
      anon_sym_LBRACK,
    ACTIONS(478), 1,
      aux_sym_literal_token1,
    ACTIONS(480), 1,
      aux_sym_literal_token2,
    STATE(39), 1,
      sym_literal,
    STATE(66), 1,
      sym_single_data_transfer_address,
  [2603] = 5,
    ACTIONS(476), 1,
      anon_sym_LBRACK,
    ACTIONS(478), 1,
      aux_sym_literal_token1,
    ACTIONS(480), 1,
      aux_sym_literal_token2,
    STATE(39), 1,
      sym_literal,
    STATE(74), 1,
      sym_single_data_transfer_address,
  [2619] = 5,
    ACTIONS(476), 1,
      anon_sym_LBRACK,
    ACTIONS(478), 1,
      aux_sym_literal_token1,
    ACTIONS(480), 1,
      aux_sym_literal_token2,
    STATE(39), 1,
      sym_literal,
    STATE(93), 1,
      sym_single_data_transfer_address,
  [2635] = 5,
    ACTIONS(476), 1,
      anon_sym_LBRACK,
    ACTIONS(478), 1,
      aux_sym_literal_token1,
    ACTIONS(480), 1,
      aux_sym_literal_token2,
    STATE(39), 1,
      sym_literal,
    STATE(100), 1,
      sym_single_data_transfer_address,
  [2651] = 3,
    ACTIONS(496), 1,
      sym_register,
    ACTIONS(498), 1,
      anon_sym_POUND,
    STATE(99), 1,
      sym__data_processing_instruction_op2,
  [2661] = 3,
    ACTIONS(80), 1,
      aux_sym_byte_transfer_token1,
    ACTIONS(500), 1,
      anon_sym_,
    STATE(296), 1,
      sym_byte_transfer,
  [2671] = 3,
    ACTIONS(86), 1,
      aux_sym_set_condition_flags_token1,
    ACTIONS(502), 1,
      anon_sym_,
    STATE(307), 1,
      sym_set_condition_flags,
  [2681] = 3,
    ACTIONS(86), 1,
      aux_sym_set_condition_flags_token1,
    ACTIONS(504), 1,
      anon_sym_,
    STATE(336), 1,
      sym_set_condition_flags,
  [2691] = 3,
    ACTIONS(496), 1,
      sym_register,
    ACTIONS(498), 1,
      anon_sym_POUND,
    STATE(85), 1,
      sym__data_processing_instruction_op2,
  [2701] = 3,
    ACTIONS(478), 1,
      aux_sym_literal_token1,
    ACTIONS(480), 1,
      aux_sym_literal_token2,
    STATE(63), 1,
      sym_literal,
  [2711] = 3,
    ACTIONS(478), 1,
      aux_sym_literal_token1,
    ACTIONS(480), 1,
      aux_sym_literal_token2,
    STATE(333), 1,
      sym_literal,
  [2721] = 3,
    ACTIONS(506), 1,
      sym_register,
    ACTIONS(508), 1,
      anon_sym_POUND,
    ACTIONS(510), 1,
      aux_sym_halfword_data_transfer_address_token1,
  [2731] = 3,
    ACTIONS(496), 1,
      sym_register,
    ACTIONS(498), 1,
      anon_sym_POUND,
    STATE(50), 1,
      sym__data_processing_instruction_op2,
  [2741] = 3,
    ACTIONS(496), 1,
      sym_register,
    ACTIONS(498), 1,
      anon_sym_POUND,
    STATE(88), 1,
      sym__data_processing_instruction_op2,
  [2751] = 3,
    ACTIONS(86), 1,
      aux_sym_set_condition_flags_token1,
    ACTIONS(512), 1,
      anon_sym_,
    STATE(341), 1,
      sym_set_condition_flags,
  [2761] = 3,
    ACTIONS(478), 1,
      aux_sym_literal_token1,
    ACTIONS(480), 1,
      aux_sym_literal_token2,
    STATE(24), 1,
      sym_literal,
  [2771] = 3,
    ACTIONS(496), 1,
      sym_register,
    ACTIONS(498), 1,
      anon_sym_POUND,
    STATE(89), 1,
      sym__data_processing_instruction_op2,
  [2781] = 3,
    ACTIONS(514), 1,
      sym_register,
    ACTIONS(516), 1,
      anon_sym_POUND,
    ACTIONS(518), 1,
      aux_sym_halfword_data_transfer_address_token1,
  [2791] = 3,
    ACTIONS(496), 1,
      sym_register,
    ACTIONS(498), 1,
      anon_sym_POUND,
    STATE(87), 1,
      sym__data_processing_instruction_op2,
  [2801] = 3,
    ACTIONS(478), 1,
      aux_sym_literal_token1,
    ACTIONS(480), 1,
      aux_sym_literal_token2,
    STATE(47), 1,
      sym_literal,
  [2811] = 3,
    ACTIONS(478), 1,
      aux_sym_literal_token1,
    ACTIONS(480), 1,
      aux_sym_literal_token2,
    STATE(306), 1,
      sym_literal,
  [2821] = 3,
    ACTIONS(496), 1,
      sym_register,
    ACTIONS(498), 1,
      anon_sym_POUND,
    STATE(42), 1,
      sym__data_processing_instruction_op2,
  [2831] = 3,
    ACTIONS(496), 1,
      sym_register,
    ACTIONS(498), 1,
      anon_sym_POUND,
    STATE(94), 1,
      sym__data_processing_instruction_op2,
  [2841] = 3,
    ACTIONS(496), 1,
      sym_register,
    ACTIONS(498), 1,
      anon_sym_POUND,
    STATE(61), 1,
      sym__data_processing_instruction_op2,
  [2851] = 3,
    ACTIONS(520), 1,
      sym_register,
    ACTIONS(522), 1,
      anon_sym_POUND,
    ACTIONS(524), 1,
      aux_sym_halfword_data_transfer_address_token1,
  [2861] = 3,
    ACTIONS(86), 1,
      aux_sym_set_condition_flags_token1,
    ACTIONS(526), 1,
      anon_sym_,
    STATE(315), 1,
      sym_set_condition_flags,
  [2871] = 3,
    ACTIONS(86), 1,
      aux_sym_set_condition_flags_token1,
    ACTIONS(528), 1,
      anon_sym_,
    STATE(321), 1,
      sym_set_condition_flags,
  [2881] = 3,
    ACTIONS(478), 1,
      aux_sym_literal_token1,
    ACTIONS(480), 1,
      aux_sym_literal_token2,
    STATE(54), 1,
      sym_literal,
  [2891] = 3,
    ACTIONS(496), 1,
      sym_register,
    ACTIONS(498), 1,
      anon_sym_POUND,
    STATE(37), 1,
      sym__data_processing_instruction_op2,
  [2901] = 3,
    ACTIONS(496), 1,
      sym_register,
    ACTIONS(498), 1,
      anon_sym_POUND,
    STATE(57), 1,
      sym__data_processing_instruction_op2,
  [2911] = 3,
    ACTIONS(86), 1,
      aux_sym_set_condition_flags_token1,
    ACTIONS(530), 1,
      anon_sym_,
    STATE(328), 1,
      sym_set_condition_flags,
  [2921] = 3,
    ACTIONS(496), 1,
      sym_register,
    ACTIONS(498), 1,
      anon_sym_POUND,
    STATE(76), 1,
      sym__data_processing_instruction_op2,
  [2931] = 3,
    ACTIONS(532), 1,
      sym_register,
    ACTIONS(534), 1,
      anon_sym_POUND,
    ACTIONS(536), 1,
      aux_sym_halfword_data_transfer_address_token1,
  [2941] = 2,
    ACTIONS(538), 1,
      anon_sym_,
    ACTIONS(540), 1,
      sym_t_bit,
  [2948] = 2,
    ACTIONS(542), 1,
      anon_sym_COMMA,
    ACTIONS(544), 1,
      anon_sym_RBRACK,
  [2955] = 2,
    ACTIONS(546), 1,
      anon_sym_,
    ACTIONS(548), 1,
      sym_t_bit,
  [2962] = 2,
    ACTIONS(550), 1,
      anon_sym_COMMA,
    ACTIONS(552), 1,
      anon_sym_RBRACK,
  [2969] = 2,
    ACTIONS(554), 1,
      anon_sym_COMMA,
    ACTIONS(556), 1,
      anon_sym_RBRACK,
  [2976] = 2,
    ACTIONS(558), 1,
      anon_sym_COMMA,
    ACTIONS(560), 1,
      anon_sym_RBRACK,
  [2983] = 2,
    ACTIONS(562), 1,
      anon_sym_,
    ACTIONS(564), 1,
      sym_t_bit,
  [2990] = 2,
    ACTIONS(566), 1,
      sym_register,
    ACTIONS(568), 1,
      anon_sym_POUND,
  [2997] = 1,
    ACTIONS(570), 1,
      anon_sym_,
  [3001] = 1,
    ACTIONS(572), 1,
      sym_register,
  [3005] = 1,
    ACTIONS(574), 1,
      sym_register,
  [3009] = 1,
    ACTIONS(576), 1,
      anon_sym_COMMA,
  [3013] = 1,
    ACTIONS(578), 1,
      sym_register,
  [3017] = 1,
    ACTIONS(580), 1,
      anon_sym_COMMA,
  [3021] = 1,
    ACTIONS(582), 1,
      sym_register,
  [3025] = 1,
    ACTIONS(584), 1,
      anon_sym_COMMA,
  [3029] = 1,
    ACTIONS(586), 1,
      sym_register,
  [3033] = 1,
    ACTIONS(588), 1,
      anon_sym_COMMA,
  [3037] = 1,
    ACTIONS(590), 1,
      sym_register,
  [3041] = 1,
    ACTIONS(592), 1,
      anon_sym_COMMA,
  [3045] = 1,
    ACTIONS(594), 1,
      sym_register,
  [3049] = 1,
    ACTIONS(596), 1,
      anon_sym_COMMA,
  [3053] = 1,
    ACTIONS(598), 1,
      sym_register,
  [3057] = 1,
    ACTIONS(600), 1,
      sym_register,
  [3061] = 1,
    ACTIONS(602), 1,
      sym_register,
  [3065] = 1,
    ACTIONS(604), 1,
      anon_sym_COMMA,
  [3069] = 1,
    ACTIONS(606), 1,
      sym_register,
  [3073] = 1,
    ACTIONS(608), 1,
      anon_sym_COMMA,
  [3077] = 1,
    ACTIONS(610), 1,
      sym_register,
  [3081] = 1,
    ACTIONS(612), 1,
      anon_sym_COMMA,
  [3085] = 1,
    ACTIONS(614), 1,
      anon_sym_COMMA,
  [3089] = 1,
    ACTIONS(616), 1,
      anon_sym_COMMA,
  [3093] = 1,
    ACTIONS(618), 1,
      sym_register,
  [3097] = 1,
    ACTIONS(620), 1,
      anon_sym_COMMA,
  [3101] = 1,
    ACTIONS(622), 1,
      anon_sym_COMMA,
  [3105] = 1,
    ACTIONS(624), 1,
      anon_sym_COMMA,
  [3109] = 1,
    ACTIONS(626), 1,
      anon_sym_COMMA,
  [3113] = 1,
    ACTIONS(628), 1,
      sym_register,
  [3117] = 1,
    ACTIONS(630), 1,
      anon_sym_COMMA,
  [3121] = 1,
    ACTIONS(632), 1,
      anon_sym_,
  [3125] = 1,
    ACTIONS(634), 1,
      anon_sym_COMMA,
  [3129] = 1,
    ACTIONS(636), 1,
      anon_sym_,
  [3133] = 1,
    ACTIONS(638), 1,
      sym_register,
  [3137] = 1,
    ACTIONS(640), 1,
      sym_register,
  [3141] = 1,
    ACTIONS(642), 1,
      sym_register,
  [3145] = 1,
    ACTIONS(644), 1,
      anon_sym_COMMA,
  [3149] = 1,
    ACTIONS(646), 1,
      sym_register,
  [3153] = 1,
    ACTIONS(648), 1,
      anon_sym_COMMA,
  [3157] = 1,
    ACTIONS(650), 1,
      sym_register,
  [3161] = 1,
    ACTIONS(652), 1,
      anon_sym_COMMA,
  [3165] = 1,
    ACTIONS(654), 1,
      sym_register,
  [3169] = 1,
    ACTIONS(656), 1,
      anon_sym_COMMA,
  [3173] = 1,
    ACTIONS(658), 1,
      sym_register,
  [3177] = 1,
    ACTIONS(660), 1,
      anon_sym_COMMA,
  [3181] = 1,
    ACTIONS(662), 1,
      sym_register,
  [3185] = 1,
    ACTIONS(664), 1,
      anon_sym_COMMA,
  [3189] = 1,
    ACTIONS(666), 1,
      sym_register,
  [3193] = 1,
    ACTIONS(668), 1,
      anon_sym_COMMA,
  [3197] = 1,
    ACTIONS(670), 1,
      sym_register,
  [3201] = 1,
    ACTIONS(672), 1,
      anon_sym_COMMA,
  [3205] = 1,
    ACTIONS(674), 1,
      anon_sym_LBRACK,
  [3209] = 1,
    ACTIONS(676), 1,
      anon_sym_COMMA,
  [3213] = 1,
    ACTIONS(678), 1,
      sym_register,
  [3217] = 1,
    ACTIONS(680), 1,
      anon_sym_COMMA,
  [3221] = 1,
    ACTIONS(682), 1,
      sym_register,
  [3225] = 1,
    ACTIONS(684), 1,
      sym_register,
  [3229] = 1,
    ACTIONS(686), 1,
      anon_sym_COMMA,
  [3233] = 1,
    ACTIONS(688), 1,
      anon_sym_COMMA,
  [3237] = 1,
    ACTIONS(690), 1,
      anon_sym_COMMA,
  [3241] = 1,
    ACTIONS(692), 1,
      anon_sym_COMMA,
  [3245] = 1,
    ACTIONS(694), 1,
      sym_register,
  [3249] = 1,
    ACTIONS(696), 1,
      sym_register,
  [3253] = 1,
    ACTIONS(698), 1,
      anon_sym_COMMA,
  [3257] = 1,
    ACTIONS(700), 1,
      anon_sym_COMMA,
  [3261] = 1,
    ACTIONS(702), 1,
      sym_register,
  [3265] = 1,
    ACTIONS(704), 1,
      anon_sym_COMMA,
  [3269] = 1,
    ACTIONS(706), 1,
      sym_register,
  [3273] = 1,
    ACTIONS(708), 1,
      anon_sym_COMMA,
  [3277] = 1,
    ACTIONS(710), 1,
      sym_register,
  [3281] = 1,
    ACTIONS(712), 1,
      anon_sym_COMMA,
  [3285] = 1,
    ACTIONS(714), 1,
      sym_register,
  [3289] = 1,
    ACTIONS(716), 1,
      anon_sym_COMMA,
  [3293] = 1,
    ACTIONS(718), 1,
      sym_register,
  [3297] = 1,
    ACTIONS(720), 1,
      anon_sym_COMMA,
  [3301] = 1,
    ACTIONS(722), 1,
      anon_sym_COMMA,
  [3305] = 1,
    ACTIONS(724), 1,
      sym_register,
  [3309] = 1,
    ACTIONS(726), 1,
      sym_register,
  [3313] = 1,
    ACTIONS(728), 1,
      anon_sym_COMMA,
  [3317] = 1,
    ACTIONS(730), 1,
      sym_register,
  [3321] = 1,
    ACTIONS(732), 1,
      anon_sym_COMMA,
  [3325] = 1,
    ACTIONS(734), 1,
      sym_register,
  [3329] = 1,
    ACTIONS(736), 1,
      anon_sym_COMMA,
  [3333] = 1,
    ACTIONS(738), 1,
      sym_register,
  [3337] = 1,
    ACTIONS(740), 1,
      anon_sym_COMMA,
  [3341] = 1,
    ACTIONS(742), 1,
      sym_register,
  [3345] = 1,
    ACTIONS(744), 1,
      anon_sym_COMMA,
  [3349] = 1,
    ACTIONS(746), 1,
      sym_register,
  [3353] = 1,
    ACTIONS(748), 1,
      sym_register,
  [3357] = 1,
    ACTIONS(750), 1,
      anon_sym_LBRACK,
  [3361] = 1,
    ACTIONS(752), 1,
      anon_sym_COMMA,
  [3365] = 1,
    ACTIONS(754), 1,
      anon_sym_LBRACK,
  [3369] = 1,
    ACTIONS(756), 1,
      anon_sym_COMMA,
  [3373] = 1,
    ACTIONS(758), 1,
      sym_register,
  [3377] = 1,
    ACTIONS(760), 1,
      sym_register,
  [3381] = 1,
    ACTIONS(762), 1,
      anon_sym_COMMA,
  [3385] = 1,
    ACTIONS(764), 1,
      anon_sym_COMMA,
  [3389] = 1,
    ACTIONS(766), 1,
      anon_sym_COMMA,
  [3393] = 1,
    ACTIONS(768), 1,
      sym_register,
  [3397] = 1,
    ACTIONS(770), 1,
      anon_sym_COMMA,
  [3401] = 1,
    ACTIONS(772), 1,
      anon_sym_,
  [3405] = 1,
    ACTIONS(774), 1,
      anon_sym_COMMA,
  [3409] = 1,
    ACTIONS(776), 1,
      sym_register,
  [3413] = 1,
    ACTIONS(778), 1,
      anon_sym_COMMA,
  [3417] = 1,
    ACTIONS(780), 1,
      anon_sym_,
  [3421] = 1,
    ACTIONS(782), 1,
      anon_sym_,
  [3425] = 1,
    ACTIONS(784), 1,
      sym_register,
  [3429] = 1,
    ACTIONS(786), 1,
      sym_register,
  [3433] = 1,
    ACTIONS(788), 1,
      sym_register,
  [3437] = 1,
    ACTIONS(790), 1,
      anon_sym_COMMA,
  [3441] = 1,
    ACTIONS(792), 1,
      sym_register,
  [3445] = 1,
    ACTIONS(794), 1,
      anon_sym_COMMA,
  [3449] = 1,
    ACTIONS(796), 1,
      sym_register,
  [3453] = 1,
    ACTIONS(798), 1,
      anon_sym_COMMA,
  [3457] = 1,
    ACTIONS(800), 1,
      sym_register,
  [3461] = 1,
    ACTIONS(802), 1,
      anon_sym_COMMA,
  [3465] = 1,
    ACTIONS(804), 1,
      anon_sym_RBRACK,
  [3469] = 1,
    ACTIONS(806), 1,
      sym_register,
  [3473] = 1,
    ACTIONS(808), 1,
      anon_sym_LBRACK,
  [3477] = 1,
    ACTIONS(810), 1,
      sym_register,
  [3481] = 1,
    ACTIONS(812), 1,
      anon_sym_,
  [3485] = 1,
    ACTIONS(814), 1,
      anon_sym_,
  [3489] = 1,
    ACTIONS(816), 1,
      sym_register,
  [3493] = 1,
    ACTIONS(818), 1,
      sym_register,
  [3497] = 1,
    ACTIONS(820), 1,
      sym_register,
  [3501] = 1,
    ACTIONS(822), 1,
      sym_register,
  [3505] = 1,
    ACTIONS(824), 1,
      sym_register,
  [3509] = 1,
    ACTIONS(826), 1,
      anon_sym_,
  [3513] = 1,
    ACTIONS(828), 1,
      anon_sym_COMMA,
  [3517] = 1,
    ACTIONS(830), 1,
      sym_register,
  [3521] = 1,
    ACTIONS(832), 1,
      sym_register,
  [3525] = 1,
    ACTIONS(834), 1,
      sym_register,
  [3529] = 1,
    ACTIONS(836), 1,
      anon_sym_COMMA,
  [3533] = 1,
    ACTIONS(838), 1,
      sym_register,
  [3537] = 1,
    ACTIONS(840), 1,
      anon_sym_,
  [3541] = 1,
    ACTIONS(842), 1,
      sym_register,
  [3545] = 1,
    ACTIONS(844), 1,
      anon_sym_COMMA,
  [3549] = 1,
    ACTIONS(846), 1,
      sym_register,
  [3553] = 1,
    ACTIONS(848), 1,
      sym_register,
  [3557] = 1,
    ACTIONS(850), 1,
      anon_sym_RBRACK,
  [3561] = 1,
    ACTIONS(852), 1,
      sym_register,
  [3565] = 1,
    ACTIONS(854), 1,
      anon_sym_RBRACK,
  [3569] = 1,
    ACTIONS(856), 1,
      anon_sym_COMMA,
  [3573] = 1,
    ACTIONS(858), 1,
      sym_register,
  [3577] = 1,
    ACTIONS(860), 1,
      anon_sym_RBRACK,
  [3581] = 1,
    ACTIONS(862), 1,
      anon_sym_,
  [3585] = 1,
    ACTIONS(864), 1,
      sym_register,
  [3589] = 1,
    ACTIONS(866), 1,
      sym_register,
  [3593] = 1,
    ACTIONS(868), 1,
      sym_register,
  [3597] = 1,
    ACTIONS(870), 1,
      anon_sym_RBRACK,
  [3601] = 1,
    ACTIONS(872), 1,
      anon_sym_COMMA,
  [3605] = 1,
    ACTIONS(874), 1,
      sym_register,
  [3609] = 1,
    ACTIONS(876), 1,
      sym_register,
  [3613] = 1,
    ACTIONS(878), 1,
      anon_sym_,
  [3617] = 1,
    ACTIONS(880), 1,
      sym_register,
  [3621] = 1,
    ACTIONS(882), 1,
      sym_register,
  [3625] = 1,
    ACTIONS(884), 1,
      anon_sym_COMMA,
  [3629] = 1,
    ACTIONS(886), 1,
      sym_register,
  [3633] = 1,
    ACTIONS(888), 1,
      sym_register,
  [3637] = 1,
    ACTIONS(890), 1,
      anon_sym_,
  [3641] = 1,
    ACTIONS(892), 1,
      anon_sym_RBRACK,
  [3645] = 1,
    ACTIONS(894), 1,
      sym_register,
  [3649] = 1,
    ACTIONS(896), 1,
      anon_sym_RBRACK,
  [3653] = 1,
    ACTIONS(898), 1,
      anon_sym_COMMA,
  [3657] = 1,
    ACTIONS(900), 1,
      anon_sym_,
  [3661] = 1,
    ACTIONS(902), 1,
      sym_register,
  [3665] = 1,
    ACTIONS(904), 1,
      anon_sym_,
  [3669] = 1,
    ACTIONS(906), 1,
      sym_register,
  [3673] = 1,
    ACTIONS(908), 1,
      anon_sym_COMMA,
  [3677] = 1,
    ACTIONS(910), 1,
      anon_sym_,
  [3681] = 1,
    ACTIONS(912), 1,
      sym_register,
  [3685] = 1,
    ACTIONS(914), 1,
      anon_sym_RBRACK,
  [3689] = 1,
    ACTIONS(916), 1,
      anon_sym_RBRACK,
  [3693] = 1,
    ACTIONS(918), 1,
      sym_register,
  [3697] = 1,
    ACTIONS(920), 1,
      anon_sym_,
  [3701] = 1,
    ACTIONS(922), 1,
      sym_register,
  [3705] = 1,
    ACTIONS(924), 1,
      sym_register,
  [3709] = 1,
    ACTIONS(926), 1,
      anon_sym_COMMA,
  [3713] = 1,
    ACTIONS(928), 1,
      sym_register,
  [3717] = 1,
    ACTIONS(930), 1,
      anon_sym_,
  [3721] = 1,
    ACTIONS(932), 1,
      sym_register,
  [3725] = 1,
    ACTIONS(934), 1,
      anon_sym_RBRACK,
  [3729] = 1,
    ACTIONS(936), 1,
      anon_sym_COMMA,
  [3733] = 1,
    ACTIONS(938), 1,
      anon_sym_,
  [3737] = 1,
    ACTIONS(940), 1,
      anon_sym_,
  [3741] = 1,
    ACTIONS(942), 1,
      anon_sym_,
  [3745] = 1,
    ACTIONS(944), 1,
      ts_builtin_sym_end,
  [3749] = 1,
    ACTIONS(946), 1,
      anon_sym_,
  [3753] = 1,
    ACTIONS(948), 1,
      sym_register,
  [3757] = 1,
    ACTIONS(950), 1,
      anon_sym_,
  [3761] = 1,
    ACTIONS(952), 1,
      sym_register,
  [3765] = 1,
    ACTIONS(954), 1,
      anon_sym_,
  [3769] = 1,
    ACTIONS(956), 1,
      sym_register,
  [3773] = 1,
    ACTIONS(958), 1,
      anon_sym_,
  [3777] = 1,
    ACTIONS(960), 1,
      sym_register,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 63,
  [SMALL_STATE(4)] = 126,
  [SMALL_STATE(5)] = 162,
  [SMALL_STATE(6)] = 192,
  [SMALL_STATE(7)] = 222,
  [SMALL_STATE(8)] = 252,
  [SMALL_STATE(9)] = 282,
  [SMALL_STATE(10)] = 312,
  [SMALL_STATE(11)] = 342,
  [SMALL_STATE(12)] = 372,
  [SMALL_STATE(13)] = 399,
  [SMALL_STATE(14)] = 423,
  [SMALL_STATE(15)] = 447,
  [SMALL_STATE(16)] = 471,
  [SMALL_STATE(17)] = 493,
  [SMALL_STATE(18)] = 517,
  [SMALL_STATE(19)] = 541,
  [SMALL_STATE(20)] = 565,
  [SMALL_STATE(21)] = 589,
  [SMALL_STATE(22)] = 613,
  [SMALL_STATE(23)] = 637,
  [SMALL_STATE(24)] = 661,
  [SMALL_STATE(25)] = 683,
  [SMALL_STATE(26)] = 707,
  [SMALL_STATE(27)] = 731,
  [SMALL_STATE(28)] = 753,
  [SMALL_STATE(29)] = 777,
  [SMALL_STATE(30)] = 799,
  [SMALL_STATE(31)] = 823,
  [SMALL_STATE(32)] = 847,
  [SMALL_STATE(33)] = 871,
  [SMALL_STATE(34)] = 892,
  [SMALL_STATE(35)] = 913,
  [SMALL_STATE(36)] = 934,
  [SMALL_STATE(37)] = 955,
  [SMALL_STATE(38)] = 976,
  [SMALL_STATE(39)] = 997,
  [SMALL_STATE(40)] = 1018,
  [SMALL_STATE(41)] = 1039,
  [SMALL_STATE(42)] = 1060,
  [SMALL_STATE(43)] = 1081,
  [SMALL_STATE(44)] = 1102,
  [SMALL_STATE(45)] = 1123,
  [SMALL_STATE(46)] = 1144,
  [SMALL_STATE(47)] = 1165,
  [SMALL_STATE(48)] = 1186,
  [SMALL_STATE(49)] = 1207,
  [SMALL_STATE(50)] = 1228,
  [SMALL_STATE(51)] = 1249,
  [SMALL_STATE(52)] = 1270,
  [SMALL_STATE(53)] = 1291,
  [SMALL_STATE(54)] = 1312,
  [SMALL_STATE(55)] = 1333,
  [SMALL_STATE(56)] = 1354,
  [SMALL_STATE(57)] = 1375,
  [SMALL_STATE(58)] = 1396,
  [SMALL_STATE(59)] = 1417,
  [SMALL_STATE(60)] = 1438,
  [SMALL_STATE(61)] = 1459,
  [SMALL_STATE(62)] = 1480,
  [SMALL_STATE(63)] = 1501,
  [SMALL_STATE(64)] = 1522,
  [SMALL_STATE(65)] = 1543,
  [SMALL_STATE(66)] = 1564,
  [SMALL_STATE(67)] = 1585,
  [SMALL_STATE(68)] = 1606,
  [SMALL_STATE(69)] = 1627,
  [SMALL_STATE(70)] = 1648,
  [SMALL_STATE(71)] = 1669,
  [SMALL_STATE(72)] = 1690,
  [SMALL_STATE(73)] = 1711,
  [SMALL_STATE(74)] = 1732,
  [SMALL_STATE(75)] = 1753,
  [SMALL_STATE(76)] = 1774,
  [SMALL_STATE(77)] = 1795,
  [SMALL_STATE(78)] = 1816,
  [SMALL_STATE(79)] = 1837,
  [SMALL_STATE(80)] = 1858,
  [SMALL_STATE(81)] = 1879,
  [SMALL_STATE(82)] = 1900,
  [SMALL_STATE(83)] = 1921,
  [SMALL_STATE(84)] = 1942,
  [SMALL_STATE(85)] = 1963,
  [SMALL_STATE(86)] = 1984,
  [SMALL_STATE(87)] = 2005,
  [SMALL_STATE(88)] = 2026,
  [SMALL_STATE(89)] = 2047,
  [SMALL_STATE(90)] = 2068,
  [SMALL_STATE(91)] = 2089,
  [SMALL_STATE(92)] = 2110,
  [SMALL_STATE(93)] = 2131,
  [SMALL_STATE(94)] = 2152,
  [SMALL_STATE(95)] = 2173,
  [SMALL_STATE(96)] = 2194,
  [SMALL_STATE(97)] = 2215,
  [SMALL_STATE(98)] = 2236,
  [SMALL_STATE(99)] = 2257,
  [SMALL_STATE(100)] = 2278,
  [SMALL_STATE(101)] = 2299,
  [SMALL_STATE(102)] = 2313,
  [SMALL_STATE(103)] = 2327,
  [SMALL_STATE(104)] = 2341,
  [SMALL_STATE(105)] = 2355,
  [SMALL_STATE(106)] = 2369,
  [SMALL_STATE(107)] = 2385,
  [SMALL_STATE(108)] = 2401,
  [SMALL_STATE(109)] = 2417,
  [SMALL_STATE(110)] = 2433,
  [SMALL_STATE(111)] = 2449,
  [SMALL_STATE(112)] = 2465,
  [SMALL_STATE(113)] = 2481,
  [SMALL_STATE(114)] = 2497,
  [SMALL_STATE(115)] = 2513,
  [SMALL_STATE(116)] = 2529,
  [SMALL_STATE(117)] = 2545,
  [SMALL_STATE(118)] = 2555,
  [SMALL_STATE(119)] = 2571,
  [SMALL_STATE(120)] = 2587,
  [SMALL_STATE(121)] = 2603,
  [SMALL_STATE(122)] = 2619,
  [SMALL_STATE(123)] = 2635,
  [SMALL_STATE(124)] = 2651,
  [SMALL_STATE(125)] = 2661,
  [SMALL_STATE(126)] = 2671,
  [SMALL_STATE(127)] = 2681,
  [SMALL_STATE(128)] = 2691,
  [SMALL_STATE(129)] = 2701,
  [SMALL_STATE(130)] = 2711,
  [SMALL_STATE(131)] = 2721,
  [SMALL_STATE(132)] = 2731,
  [SMALL_STATE(133)] = 2741,
  [SMALL_STATE(134)] = 2751,
  [SMALL_STATE(135)] = 2761,
  [SMALL_STATE(136)] = 2771,
  [SMALL_STATE(137)] = 2781,
  [SMALL_STATE(138)] = 2791,
  [SMALL_STATE(139)] = 2801,
  [SMALL_STATE(140)] = 2811,
  [SMALL_STATE(141)] = 2821,
  [SMALL_STATE(142)] = 2831,
  [SMALL_STATE(143)] = 2841,
  [SMALL_STATE(144)] = 2851,
  [SMALL_STATE(145)] = 2861,
  [SMALL_STATE(146)] = 2871,
  [SMALL_STATE(147)] = 2881,
  [SMALL_STATE(148)] = 2891,
  [SMALL_STATE(149)] = 2901,
  [SMALL_STATE(150)] = 2911,
  [SMALL_STATE(151)] = 2921,
  [SMALL_STATE(152)] = 2931,
  [SMALL_STATE(153)] = 2941,
  [SMALL_STATE(154)] = 2948,
  [SMALL_STATE(155)] = 2955,
  [SMALL_STATE(156)] = 2962,
  [SMALL_STATE(157)] = 2969,
  [SMALL_STATE(158)] = 2976,
  [SMALL_STATE(159)] = 2983,
  [SMALL_STATE(160)] = 2990,
  [SMALL_STATE(161)] = 2997,
  [SMALL_STATE(162)] = 3001,
  [SMALL_STATE(163)] = 3005,
  [SMALL_STATE(164)] = 3009,
  [SMALL_STATE(165)] = 3013,
  [SMALL_STATE(166)] = 3017,
  [SMALL_STATE(167)] = 3021,
  [SMALL_STATE(168)] = 3025,
  [SMALL_STATE(169)] = 3029,
  [SMALL_STATE(170)] = 3033,
  [SMALL_STATE(171)] = 3037,
  [SMALL_STATE(172)] = 3041,
  [SMALL_STATE(173)] = 3045,
  [SMALL_STATE(174)] = 3049,
  [SMALL_STATE(175)] = 3053,
  [SMALL_STATE(176)] = 3057,
  [SMALL_STATE(177)] = 3061,
  [SMALL_STATE(178)] = 3065,
  [SMALL_STATE(179)] = 3069,
  [SMALL_STATE(180)] = 3073,
  [SMALL_STATE(181)] = 3077,
  [SMALL_STATE(182)] = 3081,
  [SMALL_STATE(183)] = 3085,
  [SMALL_STATE(184)] = 3089,
  [SMALL_STATE(185)] = 3093,
  [SMALL_STATE(186)] = 3097,
  [SMALL_STATE(187)] = 3101,
  [SMALL_STATE(188)] = 3105,
  [SMALL_STATE(189)] = 3109,
  [SMALL_STATE(190)] = 3113,
  [SMALL_STATE(191)] = 3117,
  [SMALL_STATE(192)] = 3121,
  [SMALL_STATE(193)] = 3125,
  [SMALL_STATE(194)] = 3129,
  [SMALL_STATE(195)] = 3133,
  [SMALL_STATE(196)] = 3137,
  [SMALL_STATE(197)] = 3141,
  [SMALL_STATE(198)] = 3145,
  [SMALL_STATE(199)] = 3149,
  [SMALL_STATE(200)] = 3153,
  [SMALL_STATE(201)] = 3157,
  [SMALL_STATE(202)] = 3161,
  [SMALL_STATE(203)] = 3165,
  [SMALL_STATE(204)] = 3169,
  [SMALL_STATE(205)] = 3173,
  [SMALL_STATE(206)] = 3177,
  [SMALL_STATE(207)] = 3181,
  [SMALL_STATE(208)] = 3185,
  [SMALL_STATE(209)] = 3189,
  [SMALL_STATE(210)] = 3193,
  [SMALL_STATE(211)] = 3197,
  [SMALL_STATE(212)] = 3201,
  [SMALL_STATE(213)] = 3205,
  [SMALL_STATE(214)] = 3209,
  [SMALL_STATE(215)] = 3213,
  [SMALL_STATE(216)] = 3217,
  [SMALL_STATE(217)] = 3221,
  [SMALL_STATE(218)] = 3225,
  [SMALL_STATE(219)] = 3229,
  [SMALL_STATE(220)] = 3233,
  [SMALL_STATE(221)] = 3237,
  [SMALL_STATE(222)] = 3241,
  [SMALL_STATE(223)] = 3245,
  [SMALL_STATE(224)] = 3249,
  [SMALL_STATE(225)] = 3253,
  [SMALL_STATE(226)] = 3257,
  [SMALL_STATE(227)] = 3261,
  [SMALL_STATE(228)] = 3265,
  [SMALL_STATE(229)] = 3269,
  [SMALL_STATE(230)] = 3273,
  [SMALL_STATE(231)] = 3277,
  [SMALL_STATE(232)] = 3281,
  [SMALL_STATE(233)] = 3285,
  [SMALL_STATE(234)] = 3289,
  [SMALL_STATE(235)] = 3293,
  [SMALL_STATE(236)] = 3297,
  [SMALL_STATE(237)] = 3301,
  [SMALL_STATE(238)] = 3305,
  [SMALL_STATE(239)] = 3309,
  [SMALL_STATE(240)] = 3313,
  [SMALL_STATE(241)] = 3317,
  [SMALL_STATE(242)] = 3321,
  [SMALL_STATE(243)] = 3325,
  [SMALL_STATE(244)] = 3329,
  [SMALL_STATE(245)] = 3333,
  [SMALL_STATE(246)] = 3337,
  [SMALL_STATE(247)] = 3341,
  [SMALL_STATE(248)] = 3345,
  [SMALL_STATE(249)] = 3349,
  [SMALL_STATE(250)] = 3353,
  [SMALL_STATE(251)] = 3357,
  [SMALL_STATE(252)] = 3361,
  [SMALL_STATE(253)] = 3365,
  [SMALL_STATE(254)] = 3369,
  [SMALL_STATE(255)] = 3373,
  [SMALL_STATE(256)] = 3377,
  [SMALL_STATE(257)] = 3381,
  [SMALL_STATE(258)] = 3385,
  [SMALL_STATE(259)] = 3389,
  [SMALL_STATE(260)] = 3393,
  [SMALL_STATE(261)] = 3397,
  [SMALL_STATE(262)] = 3401,
  [SMALL_STATE(263)] = 3405,
  [SMALL_STATE(264)] = 3409,
  [SMALL_STATE(265)] = 3413,
  [SMALL_STATE(266)] = 3417,
  [SMALL_STATE(267)] = 3421,
  [SMALL_STATE(268)] = 3425,
  [SMALL_STATE(269)] = 3429,
  [SMALL_STATE(270)] = 3433,
  [SMALL_STATE(271)] = 3437,
  [SMALL_STATE(272)] = 3441,
  [SMALL_STATE(273)] = 3445,
  [SMALL_STATE(274)] = 3449,
  [SMALL_STATE(275)] = 3453,
  [SMALL_STATE(276)] = 3457,
  [SMALL_STATE(277)] = 3461,
  [SMALL_STATE(278)] = 3465,
  [SMALL_STATE(279)] = 3469,
  [SMALL_STATE(280)] = 3473,
  [SMALL_STATE(281)] = 3477,
  [SMALL_STATE(282)] = 3481,
  [SMALL_STATE(283)] = 3485,
  [SMALL_STATE(284)] = 3489,
  [SMALL_STATE(285)] = 3493,
  [SMALL_STATE(286)] = 3497,
  [SMALL_STATE(287)] = 3501,
  [SMALL_STATE(288)] = 3505,
  [SMALL_STATE(289)] = 3509,
  [SMALL_STATE(290)] = 3513,
  [SMALL_STATE(291)] = 3517,
  [SMALL_STATE(292)] = 3521,
  [SMALL_STATE(293)] = 3525,
  [SMALL_STATE(294)] = 3529,
  [SMALL_STATE(295)] = 3533,
  [SMALL_STATE(296)] = 3537,
  [SMALL_STATE(297)] = 3541,
  [SMALL_STATE(298)] = 3545,
  [SMALL_STATE(299)] = 3549,
  [SMALL_STATE(300)] = 3553,
  [SMALL_STATE(301)] = 3557,
  [SMALL_STATE(302)] = 3561,
  [SMALL_STATE(303)] = 3565,
  [SMALL_STATE(304)] = 3569,
  [SMALL_STATE(305)] = 3573,
  [SMALL_STATE(306)] = 3577,
  [SMALL_STATE(307)] = 3581,
  [SMALL_STATE(308)] = 3585,
  [SMALL_STATE(309)] = 3589,
  [SMALL_STATE(310)] = 3593,
  [SMALL_STATE(311)] = 3597,
  [SMALL_STATE(312)] = 3601,
  [SMALL_STATE(313)] = 3605,
  [SMALL_STATE(314)] = 3609,
  [SMALL_STATE(315)] = 3613,
  [SMALL_STATE(316)] = 3617,
  [SMALL_STATE(317)] = 3621,
  [SMALL_STATE(318)] = 3625,
  [SMALL_STATE(319)] = 3629,
  [SMALL_STATE(320)] = 3633,
  [SMALL_STATE(321)] = 3637,
  [SMALL_STATE(322)] = 3641,
  [SMALL_STATE(323)] = 3645,
  [SMALL_STATE(324)] = 3649,
  [SMALL_STATE(325)] = 3653,
  [SMALL_STATE(326)] = 3657,
  [SMALL_STATE(327)] = 3661,
  [SMALL_STATE(328)] = 3665,
  [SMALL_STATE(329)] = 3669,
  [SMALL_STATE(330)] = 3673,
  [SMALL_STATE(331)] = 3677,
  [SMALL_STATE(332)] = 3681,
  [SMALL_STATE(333)] = 3685,
  [SMALL_STATE(334)] = 3689,
  [SMALL_STATE(335)] = 3693,
  [SMALL_STATE(336)] = 3697,
  [SMALL_STATE(337)] = 3701,
  [SMALL_STATE(338)] = 3705,
  [SMALL_STATE(339)] = 3709,
  [SMALL_STATE(340)] = 3713,
  [SMALL_STATE(341)] = 3717,
  [SMALL_STATE(342)] = 3721,
  [SMALL_STATE(343)] = 3725,
  [SMALL_STATE(344)] = 3729,
  [SMALL_STATE(345)] = 3733,
  [SMALL_STATE(346)] = 3737,
  [SMALL_STATE(347)] = 3741,
  [SMALL_STATE(348)] = 3745,
  [SMALL_STATE(349)] = 3749,
  [SMALL_STATE(350)] = 3753,
  [SMALL_STATE(351)] = 3757,
  [SMALL_STATE(352)] = 3761,
  [SMALL_STATE(353)] = 3765,
  [SMALL_STATE(354)] = 3769,
  [SMALL_STATE(355)] = 3773,
  [SMALL_STATE(356)] = 3777,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(78),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(31),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(44),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_data_transfer_address, 7, .production_id = 45),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_data_transfer_address, 7, .production_id = 45),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halfword_data_transfer_address, 6, .production_id = 46),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_halfword_data_transfer_address, 6, .production_id = 46),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halfword_data_transfer_address, 6, .production_id = 58),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_halfword_data_transfer_address, 6, .production_id = 58),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_data_transfer_address, 8, .production_id = 46),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_data_transfer_address, 8, .production_id = 46),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halfword_data_transfer_address, 5, .production_id = 45),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_halfword_data_transfer_address, 5, .production_id = 45),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_data_transfer_address, 6, .production_id = 53),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_data_transfer_address, 6, .production_id = 53),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_data_transfer_address, 6, .production_id = 46),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_data_transfer_address, 6, .production_id = 46),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_data_transfer_address, 6, .production_id = 29),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_data_transfer_address, 6, .production_id = 29),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_data_transfer_address, 5, .production_id = 46),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_data_transfer_address, 5, .production_id = 46),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_data_transfer_address, 5, .production_id = 45),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_data_transfer_address, 5, .production_id = 45),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shift, 3),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shift, 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halfword_data_transfer_address, 3, .production_id = 29),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_halfword_data_transfer_address, 3, .production_id = 29),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shift, 2, .production_id = 34),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shift, 2, .production_id = 34),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_data_transfer_address, 3, .production_id = 29),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_data_transfer_address, 3, .production_id = 29),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shift, 1),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shift, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_processing_instruction_op2, 1, .production_id = 10),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__data_processing_instruction_op2, 1, .production_id = 10),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiply_instruction, 8, .production_id = 37),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiply_instruction, 8, .production_id = 37),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch_exchange_instruction, 4, .production_id = 7),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch_exchange_instruction, 4, .production_id = 7),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_data_transfer_address, 9, .production_id = 46),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_data_transfer_address, 9, .production_id = 46),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_data_transfer_instruction, 5, .production_id = 13),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_data_transfer_instruction, 5, .production_id = 13),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_processing_instruction, 6, .production_id = 18),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_processing_instruction, 6, .production_id = 18),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halfword_data_transfer_address, 7, .production_id = 61),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_halfword_data_transfer_address, 7, .production_id = 61),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_data_transfer_address, 1, .production_id = 6),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_data_transfer_address, 1, .production_id = 6),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halfword_data_transfer_address, 7, .production_id = 60),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_halfword_data_transfer_address, 7, .production_id = 60),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_data_transfer_address, 8, .production_id = 53),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_data_transfer_address, 8, .production_id = 53),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_processing_instruction, 5, .production_id = 12),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_processing_instruction, 5, .production_id = 12),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch_instruction, 5, .production_id = 14),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch_instruction, 5, .production_id = 14),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_data_transfer_address, 8, .production_id = 45),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_data_transfer_address, 8, .production_id = 45),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halfword_data_transfer_address, 6, .production_id = 53),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_halfword_data_transfer_address, 6, .production_id = 53),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halfword_data_transfer_address, 6, .production_id = 59),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_halfword_data_transfer_address, 6, .production_id = 59),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halfword_data_transfer_address, 6, .production_id = 57),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_halfword_data_transfer_address, 6, .production_id = 57),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_processing_instruction, 5, .production_id = 11),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_processing_instruction, 5, .production_id = 11),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_software_interrupt_instruction, 4, .production_id = 9),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_software_interrupt_instruction, 4, .production_id = 9),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch_instruction, 4, .production_id = 9),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch_instruction, 4, .production_id = 9),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch_instruction, 4, .production_id = 8),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch_instruction, 4, .production_id = 8),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_processing_instruction_op2, 2, .production_id = 15),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__data_processing_instruction_op2, 2, .production_id = 15),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_data_transfer_address, 7, .production_id = 46),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_data_transfer_address, 7, .production_id = 46),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_data_transfer_address, 7, .production_id = 29),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_data_transfer_address, 7, .production_id = 29),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_processing_instruction, 6, .production_id = 16),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_processing_instruction, 6, .production_id = 16),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_data_swap_instruction, 11, .production_id = 56),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_data_swap_instruction, 11, .production_id = 56),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiply_long_instruction, 11, .production_id = 55),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiply_long_instruction, 11, .production_id = 55),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiply_instruction, 11, .production_id = 54),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiply_instruction, 11, .production_id = 54),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_processing_instruction, 6, .production_id = 19),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_processing_instruction, 6, .production_id = 19),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halfword_data_transfer_address, 5, .production_id = 46),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_halfword_data_transfer_address, 5, .production_id = 46),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halfword_data_transfer_instruction, 6, .production_id = 20),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_halfword_data_transfer_instruction, 6, .production_id = 20),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halfword_data_transfer_address, 1, .production_id = 6),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_halfword_data_transfer_address, 1, .production_id = 6),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_data_transfer_instruction, 7, .production_id = 32),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_data_transfer_instruction, 7, .production_id = 32),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_data_transfer_address, 6, .production_id = 45),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_data_transfer_address, 6, .production_id = 45),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_data_swap_instruction, 10, .production_id = 52),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_data_swap_instruction, 10, .production_id = 52),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_data_swap_instruction, 10, .production_id = 51),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_data_swap_instruction, 10, .production_id = 51),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiply_long_instruction, 10, .production_id = 50),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiply_long_instruction, 10, .production_id = 50),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiply_long_instruction, 10, .production_id = 49),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiply_long_instruction, 10, .production_id = 49),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiply_instruction, 10, .production_id = 48),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiply_instruction, 10, .production_id = 48),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiply_instruction, 10, .production_id = 47),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiply_instruction, 10, .production_id = 47),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_data_transfer_instruction, 6, .production_id = 21),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_data_transfer_instruction, 6, .production_id = 21),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_data_transfer_instruction, 6, .production_id = 22),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_data_transfer_instruction, 6, .production_id = 22),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_processing_instruction, 6, .production_id = 17),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_processing_instruction, 6, .production_id = 17),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_data_transfer_instruction, 6, .production_id = 23),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_data_transfer_instruction, 6, .production_id = 23),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_processing_instruction_op2, 3, .production_id = 24),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__data_processing_instruction_op2, 3, .production_id = 24),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_data_swap_instruction, 9, .production_id = 44),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_data_swap_instruction, 9, .production_id = 44),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiply_long_instruction, 9, .production_id = 43),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiply_long_instruction, 9, .production_id = 43),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiply_instruction, 9, .production_id = 42),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiply_instruction, 9, .production_id = 42),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiply_instruction, 9, .production_id = 41),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiply_instruction, 9, .production_id = 41),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch_exchange_instruction, 3, .production_id = 3),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch_exchange_instruction, 3, .production_id = 3),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_processing_instruction, 9, .production_id = 40),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_processing_instruction, 9, .production_id = 40),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_data_transfer_instruction, 8, .production_id = 39),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_data_transfer_instruction, 8, .production_id = 39),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_processing_instruction, 7, .production_id = 25),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_processing_instruction, 7, .production_id = 25),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_processing_instruction, 7, .production_id = 26),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_processing_instruction, 7, .production_id = 26),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_processing_instruction, 7, .production_id = 27),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_processing_instruction, 7, .production_id = 27),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiply_instruction, 7, .production_id = 28),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiply_instruction, 7, .production_id = 28),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiply_instruction, 8, .production_id = 38),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiply_instruction, 8, .production_id = 38),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halfword_data_transfer_instruction, 7, .production_id = 30),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_halfword_data_transfer_instruction, 7, .production_id = 30),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_data_transfer_instruction, 7, .production_id = 31),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_data_transfer_instruction, 7, .production_id = 31),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_processing_instruction, 8, .production_id = 36),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_processing_instruction, 8, .production_id = 36),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, .production_id = 4),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, .production_id = 4),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch_instruction, 3, .production_id = 5),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch_instruction, 3, .production_id = 5),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, .production_id = 6),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, .production_id = 6),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_software_interrupt_instruction, 3, .production_id = 5),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_software_interrupt_instruction, 3, .production_id = 5),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_processing_instruction, 8, .production_id = 35),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_processing_instruction, 8, .production_id = 35),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_data_transfer_instruction, 7, .production_id = 33),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_data_transfer_instruction, 7, .production_id = 33),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 1, .production_id = 1),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 1, .production_id = 1),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_transfer, 1),
  [564] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_byte_transfer, 1),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_condition_flags, 1, .production_id = 2),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [944] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_ARMv7(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const uint16_t *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .field_count = FIELD_COUNT,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .field_names = ts_field_names,
    .large_state_count = LARGE_STATE_COUNT,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .state_count = STATE_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
