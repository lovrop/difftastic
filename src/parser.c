#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 28
#define SYMBOL_COUNT 19
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  anon_sym_LBRACE = 1,
  anon_sym_COMMA = 2,
  anon_sym_RBRACE = 3,
  anon_sym_COLON = 4,
  anon_sym_LBRACK = 5,
  anon_sym_RBRACK = 6,
  sym_string = 7,
  sym_number = 8,
  sym_true = 9,
  sym_false = 10,
  sym_null = 11,
  sym_value = 12,
  sym__value = 13,
  sym_object = 14,
  sym_pair = 15,
  sym_array = 16,
  aux_sym_object_repeat1 = 17,
  aux_sym_array_repeat1 = 18,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_string] = "string",
  [sym_number] = "number",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_null] = "null",
  [sym_value] = "value",
  [sym__value] = "_value",
  [sym_object] = "object",
  [sym_pair] = "pair",
  [sym_array] = "array",
  [aux_sym_object_repeat1] = "object_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
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
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_object_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == ',')
        ADVANCE(5);
      if (lookahead == '-')
        ADVANCE(6);
      if (lookahead == '0')
        ADVANCE(9);
      if (lookahead == ':')
        ADVANCE(12);
      if (lookahead == '[')
        ADVANCE(13);
      if (lookahead == ']')
        ADVANCE(14);
      if (lookahead == 'f')
        ADVANCE(15);
      if (lookahead == 'n')
        ADVANCE(20);
      if (lookahead == 't')
        ADVANCE(24);
      if (lookahead == '{')
        ADVANCE(28);
      if (lookahead == '}')
        ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(7);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '\\')
        ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 4:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 6:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(7);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.')
        ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.')
        ADVANCE(8);
      if (lookahead == 'x')
        ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(7);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(11);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 15:
      if (lookahead == 'a')
        ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == 'l')
        ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == 's')
        ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == 'e')
        ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 20:
      if (lookahead == 'u')
        ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == 'l')
        ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == 'l')
        ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 24:
      if (lookahead == 'r')
        ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == 'u')
        ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == 'e')
        ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 30:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(6);
      if (lookahead == '0')
        ADVANCE(9);
      if (lookahead == '[')
        ADVANCE(13);
      if (lookahead == ']')
        ADVANCE(14);
      if (lookahead == 'f')
        ADVANCE(15);
      if (lookahead == 'n')
        ADVANCE(20);
      if (lookahead == 't')
        ADVANCE(24);
      if (lookahead == '{')
        ADVANCE(28);
      if (lookahead == '}')
        ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(30);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(7);
      END_STATE();
    case 31:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ',')
        ADVANCE(5);
      if (lookahead == ':')
        ADVANCE(12);
      if (lookahead == ']')
        ADVANCE(14);
      if (lookahead == '}')
        ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(31);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 30},
  [2] = {.lex_state = 30},
  [3] = {.lex_state = 30},
  [4] = {.lex_state = 31},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 31},
  [8] = {.lex_state = 31},
  [9] = {.lex_state = 31},
  [10] = {.lex_state = 31},
  [11] = {.lex_state = 31},
  [12] = {.lex_state = 30},
  [13] = {.lex_state = 30},
  [14] = {.lex_state = 31},
  [15] = {.lex_state = 31},
  [16] = {.lex_state = 30},
  [17] = {.lex_state = 31},
  [18] = {.lex_state = 31},
  [19] = {.lex_state = 31},
  [20] = {.lex_state = 31},
  [21] = {.lex_state = 30},
  [22] = {.lex_state = 31},
  [23] = {.lex_state = 31},
  [24] = {.lex_state = 30},
  [25] = {.lex_state = 31},
  [26] = {.lex_state = 31},
  [27] = {.lex_state = 31},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_number] = ACTIONS(3),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
  },
  [1] = {
    [sym_value] = STATE(5),
    [sym__value] = STATE(6),
    [sym_object] = STATE(4),
    [sym_array] = STATE(4),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_string] = ACTIONS(9),
    [sym_number] = ACTIONS(11),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_null] = ACTIONS(9),
  },
  [2] = {
    [sym_pair] = STATE(9),
    [anon_sym_RBRACE] = ACTIONS(13),
    [sym_string] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
  },
  [3] = {
    [sym__value] = STATE(11),
    [sym_object] = STATE(4),
    [sym_array] = STATE(4),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(19),
    [sym_string] = ACTIONS(9),
    [sym_number] = ACTIONS(11),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_null] = ACTIONS(9),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(21),
    [anon_sym_RBRACE] = ACTIONS(21),
    [anon_sym_RBRACK] = ACTIONS(21),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(23),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(25),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(27),
  },
  [8] = {
    [anon_sym_COLON] = ACTIONS(29),
  },
  [9] = {
    [aux_sym_object_repeat1] = STATE(15),
    [anon_sym_COMMA] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(33),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(35),
    [anon_sym_COMMA] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(35),
  },
  [11] = {
    [aux_sym_array_repeat1] = STATE(18),
    [anon_sym_COMMA] = ACTIONS(37),
    [anon_sym_RBRACK] = ACTIONS(39),
  },
  [12] = {
    [sym__value] = STATE(19),
    [sym_object] = STATE(4),
    [sym_array] = STATE(4),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_string] = ACTIONS(9),
    [sym_number] = ACTIONS(11),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_null] = ACTIONS(9),
  },
  [13] = {
    [sym_pair] = STATE(20),
    [sym_string] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(41),
    [anon_sym_COMMA] = ACTIONS(41),
    [anon_sym_RBRACE] = ACTIONS(41),
    [anon_sym_RBRACK] = ACTIONS(41),
  },
  [15] = {
    [anon_sym_COMMA] = ACTIONS(43),
    [anon_sym_RBRACE] = ACTIONS(45),
  },
  [16] = {
    [sym__value] = STATE(23),
    [sym_object] = STATE(4),
    [sym_array] = STATE(4),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_string] = ACTIONS(9),
    [sym_number] = ACTIONS(11),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_null] = ACTIONS(9),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_RBRACE] = ACTIONS(47),
    [anon_sym_RBRACK] = ACTIONS(47),
  },
  [18] = {
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_RBRACK] = ACTIONS(51),
  },
  [19] = {
    [anon_sym_COMMA] = ACTIONS(53),
    [anon_sym_RBRACE] = ACTIONS(53),
  },
  [20] = {
    [anon_sym_COMMA] = ACTIONS(55),
    [anon_sym_RBRACE] = ACTIONS(55),
  },
  [21] = {
    [sym_pair] = STATE(26),
    [sym_string] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(57),
    [anon_sym_COMMA] = ACTIONS(57),
    [anon_sym_RBRACE] = ACTIONS(57),
    [anon_sym_RBRACK] = ACTIONS(57),
  },
  [23] = {
    [anon_sym_COMMA] = ACTIONS(59),
    [anon_sym_RBRACK] = ACTIONS(59),
  },
  [24] = {
    [sym__value] = STATE(27),
    [sym_object] = STATE(4),
    [sym_array] = STATE(4),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_string] = ACTIONS(9),
    [sym_number] = ACTIONS(11),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_null] = ACTIONS(9),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(61),
    [anon_sym_COMMA] = ACTIONS(61),
    [anon_sym_RBRACE] = ACTIONS(61),
    [anon_sym_RBRACK] = ACTIONS(61),
  },
  [26] = {
    [anon_sym_COMMA] = ACTIONS(63),
    [anon_sym_RBRACE] = ACTIONS(63),
  },
  [27] = {
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_RBRACK] = ACTIONS(65),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
  [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(),
  [5] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(2),
  [7] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(3),
  [9] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(4),
  [11] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
  [13] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(7),
  [15] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(8),
  [17] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(8),
  [19] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(10),
  [21] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__value, 1),
  [23] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [25] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_value, 1),
  [27] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_object, 2),
  [29] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(12),
  [31] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(13),
  [33] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(14),
  [35] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array, 2),
  [37] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(16),
  [39] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(17),
  [41] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_object, 3),
  [43] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(21),
  [45] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(22),
  [47] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array, 3),
  [49] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(24),
  [51] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(25),
  [53] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_pair, 3),
  [55] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_object_repeat1, 2),
  [57] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_object, 4),
  [59] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_array_repeat1, 2),
  [61] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array, 4),
  [63] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_object_repeat1, 3),
  [65] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_array_repeat1, 3),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_json() {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
