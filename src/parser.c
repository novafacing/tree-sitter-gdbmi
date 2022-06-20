#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 122
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 79
#define ALIAS_COUNT 0
#define TOKEN_COUNT 52
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LPARENgdb_RPAREN = 1,
  anon_sym_LF = 2,
  anon_sym_CARET = 3,
  anon_sym_COMMA = 4,
  anon_sym_STAR = 5,
  anon_sym_PLUS = 6,
  anon_sym_EQ = 7,
  anon_sym_done = 8,
  anon_sym_running = 9,
  anon_sym_connected = 10,
  anon_sym_error = 11,
  anon_sym_exit = 12,
  anon_sym_stopped = 13,
  anon_sym_breakpoint_DASHcreated = 14,
  anon_sym_breakpoint_DASHdeleted = 15,
  anon_sym_breakpoint_DASHmodified = 16,
  anon_sym_cmd_DASHparam_DASHchanged = 17,
  anon_sym_library_DASHloaded = 18,
  anon_sym_library_DASHunloaded = 19,
  anon_sym_memory_DASHchanged = 20,
  anon_sym_record_DASHstarted = 21,
  anon_sym_record_DASHstopped = 22,
  anon_sym_thread_DASHcreated = 23,
  anon_sym_thread_DASHexited = 24,
  anon_sym_thread_DASHgroup_DASHadded = 25,
  anon_sym_thread_DASHgroup_DASHexited = 26,
  anon_sym_thread_DASHgroup_DASHremoved = 27,
  anon_sym_thread_DASHgroup_DASHstarted = 28,
  anon_sym_thread_DASHselected = 29,
  anon_sym_traceframe_DASHchanged = 30,
  anon_sym_tsv_DASHcreated = 31,
  anon_sym_tsv_DASHdeleted = 32,
  anon_sym_tsv_DASHmodified = 33,
  anon_sym_LBRACE_RBRACE = 34,
  anon_sym_LBRACE = 35,
  anon_sym_RBRACE = 36,
  anon_sym_LBRACK_RBRACK = 37,
  anon_sym_LBRACK = 38,
  anon_sym_RBRACK = 39,
  anon_sym_TILDE = 40,
  anon_sym_AT = 41,
  anon_sym_AMP = 42,
  sym_Token = 43,
  sym_Identifier = 44,
  anon_sym_L_DQUOTE = 45,
  anon_sym_u_DQUOTE = 46,
  anon_sym_U_DQUOTE = 47,
  anon_sym_u8_DQUOTE = 48,
  anon_sym_DQUOTE = 49,
  sym_CStringCharacterSequence = 50,
  sym_CStringEscapeSequence = 51,
  sym_Stream = 52,
  sym_Output = 53,
  sym_ResultRecord = 54,
  sym_OutOfBandRecord = 55,
  sym_AsyncRecord = 56,
  sym_ExecAsyncOutput = 57,
  sym_StatusAsyncOutput = 58,
  sym_NotifyAsyncOutput = 59,
  sym_AsyncOutput = 60,
  sym_ResultClass = 61,
  sym_AsyncClass = 62,
  sym_Result = 63,
  sym_Value = 64,
  sym_Tuple = 65,
  sym_List = 66,
  sym_Variable = 67,
  sym_Const = 68,
  sym_StreamRecord = 69,
  sym_ConsoleStreamOutput = 70,
  sym_TargetStreamOutput = 71,
  sym_LogStreamOutput = 72,
  sym_CString = 73,
  aux_sym_Stream_repeat1 = 74,
  aux_sym_Output_repeat1 = 75,
  aux_sym_ResultRecord_repeat1 = 76,
  aux_sym_List_repeat1 = 77,
  aux_sym_CString_repeat1 = 78,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LPARENgdb_RPAREN] = "(gdb)",
  [anon_sym_LF] = "\n",
  [anon_sym_CARET] = "^",
  [anon_sym_COMMA] = ",",
  [anon_sym_STAR] = "*",
  [anon_sym_PLUS] = "+",
  [anon_sym_EQ] = "=",
  [anon_sym_done] = "done",
  [anon_sym_running] = "running",
  [anon_sym_connected] = "connected",
  [anon_sym_error] = "error",
  [anon_sym_exit] = "exit",
  [anon_sym_stopped] = "stopped",
  [anon_sym_breakpoint_DASHcreated] = "breakpoint-created",
  [anon_sym_breakpoint_DASHdeleted] = "breakpoint-deleted",
  [anon_sym_breakpoint_DASHmodified] = "breakpoint-modified",
  [anon_sym_cmd_DASHparam_DASHchanged] = "cmd-param-changed",
  [anon_sym_library_DASHloaded] = "library-loaded",
  [anon_sym_library_DASHunloaded] = "library-unloaded",
  [anon_sym_memory_DASHchanged] = "memory-changed",
  [anon_sym_record_DASHstarted] = "record-started",
  [anon_sym_record_DASHstopped] = "record-stopped",
  [anon_sym_thread_DASHcreated] = "thread-created",
  [anon_sym_thread_DASHexited] = "thread-exited",
  [anon_sym_thread_DASHgroup_DASHadded] = "thread-group-added",
  [anon_sym_thread_DASHgroup_DASHexited] = "thread-group-exited",
  [anon_sym_thread_DASHgroup_DASHremoved] = "thread-group-removed",
  [anon_sym_thread_DASHgroup_DASHstarted] = "thread-group-started",
  [anon_sym_thread_DASHselected] = "thread-selected",
  [anon_sym_traceframe_DASHchanged] = "traceframe-changed",
  [anon_sym_tsv_DASHcreated] = "tsv-created",
  [anon_sym_tsv_DASHdeleted] = "tsv-deleted",
  [anon_sym_tsv_DASHmodified] = "tsv-modified",
  [anon_sym_LBRACE_RBRACE] = "{}",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK_RBRACK] = "[]",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_TILDE] = "~",
  [anon_sym_AT] = "@",
  [anon_sym_AMP] = "&",
  [sym_Token] = "Token",
  [sym_Identifier] = "Identifier",
  [anon_sym_L_DQUOTE] = "L\"",
  [anon_sym_u_DQUOTE] = "u\"",
  [anon_sym_U_DQUOTE] = "U\"",
  [anon_sym_u8_DQUOTE] = "u8\"",
  [anon_sym_DQUOTE] = "\"",
  [sym_CStringCharacterSequence] = "CStringCharacterSequence",
  [sym_CStringEscapeSequence] = "CStringEscapeSequence",
  [sym_Stream] = "Stream",
  [sym_Output] = "Output",
  [sym_ResultRecord] = "ResultRecord",
  [sym_OutOfBandRecord] = "OutOfBandRecord",
  [sym_AsyncRecord] = "AsyncRecord",
  [sym_ExecAsyncOutput] = "ExecAsyncOutput",
  [sym_StatusAsyncOutput] = "StatusAsyncOutput",
  [sym_NotifyAsyncOutput] = "NotifyAsyncOutput",
  [sym_AsyncOutput] = "AsyncOutput",
  [sym_ResultClass] = "ResultClass",
  [sym_AsyncClass] = "AsyncClass",
  [sym_Result] = "Result",
  [sym_Value] = "Value",
  [sym_Tuple] = "Tuple",
  [sym_List] = "List",
  [sym_Variable] = "Variable",
  [sym_Const] = "Const",
  [sym_StreamRecord] = "StreamRecord",
  [sym_ConsoleStreamOutput] = "ConsoleStreamOutput",
  [sym_TargetStreamOutput] = "TargetStreamOutput",
  [sym_LogStreamOutput] = "LogStreamOutput",
  [sym_CString] = "CString",
  [aux_sym_Stream_repeat1] = "Stream_repeat1",
  [aux_sym_Output_repeat1] = "Output_repeat1",
  [aux_sym_ResultRecord_repeat1] = "ResultRecord_repeat1",
  [aux_sym_List_repeat1] = "List_repeat1",
  [aux_sym_CString_repeat1] = "CString_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LPARENgdb_RPAREN] = anon_sym_LPARENgdb_RPAREN,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_done] = anon_sym_done,
  [anon_sym_running] = anon_sym_running,
  [anon_sym_connected] = anon_sym_connected,
  [anon_sym_error] = anon_sym_error,
  [anon_sym_exit] = anon_sym_exit,
  [anon_sym_stopped] = anon_sym_stopped,
  [anon_sym_breakpoint_DASHcreated] = anon_sym_breakpoint_DASHcreated,
  [anon_sym_breakpoint_DASHdeleted] = anon_sym_breakpoint_DASHdeleted,
  [anon_sym_breakpoint_DASHmodified] = anon_sym_breakpoint_DASHmodified,
  [anon_sym_cmd_DASHparam_DASHchanged] = anon_sym_cmd_DASHparam_DASHchanged,
  [anon_sym_library_DASHloaded] = anon_sym_library_DASHloaded,
  [anon_sym_library_DASHunloaded] = anon_sym_library_DASHunloaded,
  [anon_sym_memory_DASHchanged] = anon_sym_memory_DASHchanged,
  [anon_sym_record_DASHstarted] = anon_sym_record_DASHstarted,
  [anon_sym_record_DASHstopped] = anon_sym_record_DASHstopped,
  [anon_sym_thread_DASHcreated] = anon_sym_thread_DASHcreated,
  [anon_sym_thread_DASHexited] = anon_sym_thread_DASHexited,
  [anon_sym_thread_DASHgroup_DASHadded] = anon_sym_thread_DASHgroup_DASHadded,
  [anon_sym_thread_DASHgroup_DASHexited] = anon_sym_thread_DASHgroup_DASHexited,
  [anon_sym_thread_DASHgroup_DASHremoved] = anon_sym_thread_DASHgroup_DASHremoved,
  [anon_sym_thread_DASHgroup_DASHstarted] = anon_sym_thread_DASHgroup_DASHstarted,
  [anon_sym_thread_DASHselected] = anon_sym_thread_DASHselected,
  [anon_sym_traceframe_DASHchanged] = anon_sym_traceframe_DASHchanged,
  [anon_sym_tsv_DASHcreated] = anon_sym_tsv_DASHcreated,
  [anon_sym_tsv_DASHdeleted] = anon_sym_tsv_DASHdeleted,
  [anon_sym_tsv_DASHmodified] = anon_sym_tsv_DASHmodified,
  [anon_sym_LBRACE_RBRACE] = anon_sym_LBRACE_RBRACE,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACK_RBRACK] = anon_sym_LBRACK_RBRACK,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_AMP] = anon_sym_AMP,
  [sym_Token] = sym_Token,
  [sym_Identifier] = sym_Identifier,
  [anon_sym_L_DQUOTE] = anon_sym_L_DQUOTE,
  [anon_sym_u_DQUOTE] = anon_sym_u_DQUOTE,
  [anon_sym_U_DQUOTE] = anon_sym_U_DQUOTE,
  [anon_sym_u8_DQUOTE] = anon_sym_u8_DQUOTE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_CStringCharacterSequence] = sym_CStringCharacterSequence,
  [sym_CStringEscapeSequence] = sym_CStringEscapeSequence,
  [sym_Stream] = sym_Stream,
  [sym_Output] = sym_Output,
  [sym_ResultRecord] = sym_ResultRecord,
  [sym_OutOfBandRecord] = sym_OutOfBandRecord,
  [sym_AsyncRecord] = sym_AsyncRecord,
  [sym_ExecAsyncOutput] = sym_ExecAsyncOutput,
  [sym_StatusAsyncOutput] = sym_StatusAsyncOutput,
  [sym_NotifyAsyncOutput] = sym_NotifyAsyncOutput,
  [sym_AsyncOutput] = sym_AsyncOutput,
  [sym_ResultClass] = sym_ResultClass,
  [sym_AsyncClass] = sym_AsyncClass,
  [sym_Result] = sym_Result,
  [sym_Value] = sym_Value,
  [sym_Tuple] = sym_Tuple,
  [sym_List] = sym_List,
  [sym_Variable] = sym_Variable,
  [sym_Const] = sym_Const,
  [sym_StreamRecord] = sym_StreamRecord,
  [sym_ConsoleStreamOutput] = sym_ConsoleStreamOutput,
  [sym_TargetStreamOutput] = sym_TargetStreamOutput,
  [sym_LogStreamOutput] = sym_LogStreamOutput,
  [sym_CString] = sym_CString,
  [aux_sym_Stream_repeat1] = aux_sym_Stream_repeat1,
  [aux_sym_Output_repeat1] = aux_sym_Output_repeat1,
  [aux_sym_ResultRecord_repeat1] = aux_sym_ResultRecord_repeat1,
  [aux_sym_List_repeat1] = aux_sym_List_repeat1,
  [aux_sym_CString_repeat1] = aux_sym_CString_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LPARENgdb_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_done] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_running] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_connected] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_error] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stopped] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_breakpoint_DASHcreated] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_breakpoint_DASHdeleted] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_breakpoint_DASHmodified] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmd_DASHparam_DASHchanged] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_library_DASHloaded] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_library_DASHunloaded] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_memory_DASHchanged] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_record_DASHstarted] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_record_DASHstopped] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_thread_DASHcreated] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_thread_DASHexited] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_thread_DASHgroup_DASHadded] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_thread_DASHgroup_DASHexited] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_thread_DASHgroup_DASHremoved] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_thread_DASHgroup_DASHstarted] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_thread_DASHselected] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_traceframe_DASHchanged] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tsv_DASHcreated] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tsv_DASHdeleted] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tsv_DASHmodified] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_RBRACK] = {
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
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [sym_Token] = {
    .visible = true,
    .named = true,
  },
  [sym_Identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_L_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_U_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u8_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_CStringCharacterSequence] = {
    .visible = true,
    .named = true,
  },
  [sym_CStringEscapeSequence] = {
    .visible = true,
    .named = true,
  },
  [sym_Stream] = {
    .visible = true,
    .named = true,
  },
  [sym_Output] = {
    .visible = true,
    .named = true,
  },
  [sym_ResultRecord] = {
    .visible = true,
    .named = true,
  },
  [sym_OutOfBandRecord] = {
    .visible = true,
    .named = true,
  },
  [sym_AsyncRecord] = {
    .visible = true,
    .named = true,
  },
  [sym_ExecAsyncOutput] = {
    .visible = true,
    .named = true,
  },
  [sym_StatusAsyncOutput] = {
    .visible = true,
    .named = true,
  },
  [sym_NotifyAsyncOutput] = {
    .visible = true,
    .named = true,
  },
  [sym_AsyncOutput] = {
    .visible = true,
    .named = true,
  },
  [sym_ResultClass] = {
    .visible = true,
    .named = true,
  },
  [sym_AsyncClass] = {
    .visible = true,
    .named = true,
  },
  [sym_Result] = {
    .visible = true,
    .named = true,
  },
  [sym_Value] = {
    .visible = true,
    .named = true,
  },
  [sym_Tuple] = {
    .visible = true,
    .named = true,
  },
  [sym_List] = {
    .visible = true,
    .named = true,
  },
  [sym_Variable] = {
    .visible = true,
    .named = true,
  },
  [sym_Const] = {
    .visible = true,
    .named = true,
  },
  [sym_StreamRecord] = {
    .visible = true,
    .named = true,
  },
  [sym_ConsoleStreamOutput] = {
    .visible = true,
    .named = true,
  },
  [sym_TargetStreamOutput] = {
    .visible = true,
    .named = true,
  },
  [sym_LogStreamOutput] = {
    .visible = true,
    .named = true,
  },
  [sym_CString] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_Stream_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_Output_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ResultRecord_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_List_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_CString_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(232);
      if (lookahead == '"') ADVANCE(525);
      if (lookahead == '&') ADVANCE(300);
      if (lookahead == '(') ADVANCE(122);
      if (lookahead == '*') ADVANCE(237);
      if (lookahead == '+') ADVANCE(238);
      if (lookahead == ',') ADVANCE(236);
      if (lookahead == '=') ADVANCE(239);
      if (lookahead == '@') ADVANCE(299);
      if (lookahead == 'L') ADVANCE(303);
      if (lookahead == 'U') ADVANCE(304);
      if (lookahead == '[') ADVANCE(296);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == ']') ADVANCE(297);
      if (lookahead == '^') ADVANCE(235);
      if (lookahead == 'b') ADVANCE(482);
      if (lookahead == 'c') ADVANCE(444);
      if (lookahead == 'd') ADVANCE(462);
      if (lookahead == 'e') ADVANCE(481);
      if (lookahead == 'l') ADVANCE(428);
      if (lookahead == 'm') ADVANCE(377);
      if (lookahead == 'r') ADVANCE(378);
      if (lookahead == 's') ADVANCE(499);
      if (lookahead == 't') ADVANCE(427);
      if (lookahead == 'u') ADVANCE(305);
      if (lookahead == '{') ADVANCE(293);
      if (lookahead == '}') ADVANCE(294);
      if (lookahead == '~') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(301);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '"') ADVANCE(525);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(526);
      if (lookahead != 0) ADVANCE(527);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(525);
      if (lookahead == 'L') ADVANCE(303);
      if (lookahead == 'U') ADVANCE(304);
      if (lookahead == '[') ADVANCE(296);
      if (lookahead == 'u') ADVANCE(305);
      if (lookahead == '{') ADVANCE(293);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(525);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(233);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(43);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(199);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(45);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(142);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(23);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(177);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(37);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(42);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(44);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(46);
      END_STATE();
    case 15:
      if (lookahead == 'U') ADVANCE(230);
      if (lookahead == 'u') ADVANCE(226);
      if (lookahead == 'x') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(530);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(141);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(151);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(149);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(195);
      if (lookahead == 'o') ADVANCE(181);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(154);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(77);
      if (lookahead == 'e') ADVANCE(220);
      if (lookahead == 'r') ADVANCE(110);
      if (lookahead == 's') ADVANCE(214);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(189);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(204);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(192);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(161);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(162);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(208);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(210);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(196);
      END_STATE();
    case 34:
      if (lookahead == 'b') ADVANCE(4);
      END_STATE();
    case 35:
      if (lookahead == 'b') ADVANCE(185);
      if (lookahead == 'c') ADVANCE(147);
      if (lookahead == 'd') ADVANCE(165);
      if (lookahead == 'e') ADVANCE(184);
      if (lookahead == 'l') ADVANCE(131);
      if (lookahead == 'm') ADVANCE(79);
      if (lookahead == 'r') ADVANCE(80);
      if (lookahead == 's') ADVANCE(202);
      if (lookahead == 't') ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      END_STATE();
    case 36:
      if (lookahead == 'b') ADVANCE(188);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(127);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(203);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(82);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(170);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(209);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(128);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(194);
      if (lookahead == 'd') ADVANCE(83);
      if (lookahead == 'm') ADVANCE(168);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(129);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(197);
      if (lookahead == 'e') ADVANCE(219);
      if (lookahead == 'g') ADVANCE(190);
      if (lookahead == 's') ADVANCE(111);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(198);
      if (lookahead == 'd') ADVANCE(117);
      if (lookahead == 'm') ADVANCE(174);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(34);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(10);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(250);
      END_STATE();
    case 50:
      if (lookahead == 'd') ADVANCE(244);
      END_STATE();
    case 51:
      if (lookahead == 'd') ADVANCE(286);
      END_STATE();
    case 52:
      if (lookahead == 'd') ADVANCE(288);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(290);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(272);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(260);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(264);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(266);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(268);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(270);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(282);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(262);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(258);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(252);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(254);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(274);
      END_STATE();
    case 66:
      if (lookahead == 'd') ADVANCE(284);
      END_STATE();
    case 67:
      if (lookahead == 'd') ADVANCE(256);
      END_STATE();
    case 68:
      if (lookahead == 'd') ADVANCE(276);
      END_STATE();
    case 69:
      if (lookahead == 'd') ADVANCE(278);
      END_STATE();
    case 70:
      if (lookahead == 'd') ADVANCE(280);
      END_STATE();
    case 71:
      if (lookahead == 'd') ADVANCE(133);
      END_STATE();
    case 72:
      if (lookahead == 'd') ADVANCE(6);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(7);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(94);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(100);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(104);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(76);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(140);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(40);
      if (lookahead == 'u') ADVANCE(157);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(240);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 119:
      if (lookahead == 'f') ADVANCE(136);
      END_STATE();
    case 120:
      if (lookahead == 'f') ADVANCE(137);
      END_STATE();
    case 121:
      if (lookahead == 'f') ADVANCE(191);
      END_STATE();
    case 122:
      if (lookahead == 'g') ADVANCE(47);
      END_STATE();
    case 123:
      if (lookahead == 'g') ADVANCE(242);
      END_STATE();
    case 124:
      if (lookahead == 'g') ADVANCE(95);
      END_STATE();
    case 125:
      if (lookahead == 'g') ADVANCE(101);
      END_STATE();
    case 126:
      if (lookahead == 'g') ADVANCE(105);
      END_STATE();
    case 127:
      if (lookahead == 'h') ADVANCE(21);
      END_STATE();
    case 128:
      if (lookahead == 'h') ADVANCE(28);
      END_STATE();
    case 129:
      if (lookahead == 'h') ADVANCE(30);
      END_STATE();
    case 130:
      if (lookahead == 'h') ADVANCE(193);
      if (lookahead == 'r') ADVANCE(18);
      if (lookahead == 's') ADVANCE(217);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(200);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(152);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(159);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(92);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(206);
      END_STATE();
    case 139:
      if (lookahead == 'i') ADVANCE(212);
      END_STATE();
    case 140:
      if (lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 141:
      if (lookahead == 'k') ADVANCE(176);
      END_STATE();
    case 142:
      if (lookahead == 'l') ADVANCE(171);
      if (lookahead == 'u') ADVANCE(153);
      END_STATE();
    case 143:
      if (lookahead == 'l') ADVANCE(113);
      END_STATE();
    case 144:
      if (lookahead == 'l') ADVANCE(112);
      END_STATE();
    case 145:
      if (lookahead == 'l') ADVANCE(173);
      END_STATE();
    case 146:
      if (lookahead == 'l') ADVANCE(114);
      END_STATE();
    case 147:
      if (lookahead == 'm') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(160);
      END_STATE();
    case 148:
      if (lookahead == 'm') ADVANCE(166);
      END_STATE();
    case 149:
      if (lookahead == 'm') ADVANCE(118);
      END_STATE();
    case 150:
      if (lookahead == 'm') ADVANCE(169);
      END_STATE();
    case 151:
      if (lookahead == 'm') ADVANCE(12);
      END_STATE();
    case 152:
      if (lookahead == 'n') ADVANCE(123);
      END_STATE();
    case 153:
      if (lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 154:
      if (lookahead == 'n') ADVANCE(124);
      END_STATE();
    case 155:
      if (lookahead == 'n') ADVANCE(134);
      END_STATE();
    case 156:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 157:
      if (lookahead == 'n') ADVANCE(155);
      END_STATE();
    case 158:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 159:
      if (lookahead == 'n') ADVANCE(215);
      END_STATE();
    case 160:
      if (lookahead == 'n') ADVANCE(158);
      END_STATE();
    case 161:
      if (lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 162:
      if (lookahead == 'n') ADVANCE(126);
      END_STATE();
    case 163:
      if (lookahead == 'o') ADVANCE(175);
      END_STATE();
    case 164:
      if (lookahead == 'o') ADVANCE(216);
      END_STATE();
    case 165:
      if (lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 166:
      if (lookahead == 'o') ADVANCE(218);
      END_STATE();
    case 167:
      if (lookahead == 'o') ADVANCE(182);
      END_STATE();
    case 168:
      if (lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 169:
      if (lookahead == 'o') ADVANCE(183);
      END_STATE();
    case 170:
      if (lookahead == 'o') ADVANCE(186);
      END_STATE();
    case 171:
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 172:
      if (lookahead == 'o') ADVANCE(135);
      END_STATE();
    case 173:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 174:
      if (lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 175:
      if (lookahead == 'p') ADVANCE(178);
      END_STATE();
    case 176:
      if (lookahead == 'p') ADVANCE(172);
      END_STATE();
    case 177:
      if (lookahead == 'p') ADVANCE(25);
      END_STATE();
    case 178:
      if (lookahead == 'p') ADVANCE(86);
      END_STATE();
    case 179:
      if (lookahead == 'p') ADVANCE(9);
      END_STATE();
    case 180:
      if (lookahead == 'p') ADVANCE(97);
      END_STATE();
    case 181:
      if (lookahead == 'p') ADVANCE(180);
      END_STATE();
    case 182:
      if (lookahead == 'r') ADVANCE(246);
      END_STATE();
    case 183:
      if (lookahead == 'r') ADVANCE(221);
      END_STATE();
    case 184:
      if (lookahead == 'r') ADVANCE(187);
      if (lookahead == 'x') ADVANCE(132);
      END_STATE();
    case 185:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 186:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 187:
      if (lookahead == 'r') ADVANCE(167);
      END_STATE();
    case 188:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 189:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 190:
      if (lookahead == 'r') ADVANCE(164);
      END_STATE();
    case 191:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 192:
      if (lookahead == 'r') ADVANCE(222);
      END_STATE();
    case 193:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 194:
      if (lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 195:
      if (lookahead == 'r') ADVANCE(207);
      END_STATE();
    case 196:
      if (lookahead == 'r') ADVANCE(213);
      END_STATE();
    case 197:
      if (lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 198:
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 199:
      if (lookahead == 's') ADVANCE(201);
      END_STATE();
    case 200:
      if (lookahead == 't') ADVANCE(248);
      END_STATE();
    case 201:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 202:
      if (lookahead == 't') ADVANCE(163);
      END_STATE();
    case 203:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 204:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 205:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 206:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 207:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 208:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 209:
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 210:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 211:
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 212:
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 213:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 214:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 215:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 216:
      if (lookahead == 'u') ADVANCE(179);
      END_STATE();
    case 217:
      if (lookahead == 'v') ADVANCE(5);
      END_STATE();
    case 218:
      if (lookahead == 'v') ADVANCE(108);
      END_STATE();
    case 219:
      if (lookahead == 'x') ADVANCE(138);
      END_STATE();
    case 220:
      if (lookahead == 'x') ADVANCE(139);
      END_STATE();
    case 221:
      if (lookahead == 'y') ADVANCE(11);
      END_STATE();
    case 222:
      if (lookahead == 'y') ADVANCE(8);
      END_STATE();
    case 223:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(528);
      END_STATE();
    case 224:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(223);
      END_STATE();
    case 225:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(224);
      END_STATE();
    case 226:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(225);
      END_STATE();
    case 227:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(226);
      END_STATE();
    case 228:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(227);
      END_STATE();
    case 229:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(228);
      END_STATE();
    case 230:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(229);
      END_STATE();
    case 231:
      if (eof) ADVANCE(232);
      if (lookahead == '\n') ADVANCE(234);
      if (lookahead == '&') ADVANCE(300);
      if (lookahead == '(') ADVANCE(122);
      if (lookahead == '*') ADVANCE(237);
      if (lookahead == '+') ADVANCE(238);
      if (lookahead == ',') ADVANCE(236);
      if (lookahead == '=') ADVANCE(239);
      if (lookahead == '@') ADVANCE(299);
      if (lookahead == '^') ADVANCE(235);
      if (lookahead == '~') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(231)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(302);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_LPARENgdb_RPAREN);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_done);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_done);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_running);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_running);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_connected);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_connected);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_error);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_error);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_exit);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_exit);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_stopped);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_stopped);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_breakpoint_DASHcreated);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_breakpoint_DASHcreated);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_breakpoint_DASHdeleted);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_breakpoint_DASHdeleted);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_breakpoint_DASHmodified);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_breakpoint_DASHmodified);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_cmd_DASHparam_DASHchanged);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_cmd_DASHparam_DASHchanged);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_library_DASHloaded);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_library_DASHloaded);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_library_DASHunloaded);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_library_DASHunloaded);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_memory_DASHchanged);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_memory_DASHchanged);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_record_DASHstarted);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_record_DASHstarted);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_record_DASHstopped);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_record_DASHstopped);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_thread_DASHcreated);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_thread_DASHcreated);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_thread_DASHexited);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_thread_DASHexited);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_thread_DASHgroup_DASHadded);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_thread_DASHgroup_DASHadded);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_thread_DASHgroup_DASHexited);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_thread_DASHgroup_DASHexited);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_thread_DASHgroup_DASHremoved);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_thread_DASHgroup_DASHremoved);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_thread_DASHgroup_DASHstarted);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_thread_DASHgroup_DASHstarted);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_thread_DASHselected);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_thread_DASHselected);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_traceframe_DASHchanged);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_traceframe_DASHchanged);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_tsv_DASHcreated);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_tsv_DASHcreated);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_tsv_DASHdeleted);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_tsv_DASHdeleted);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_tsv_DASHmodified);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_tsv_DASHmodified);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_LBRACE_RBRACE);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '}') ADVANCE(292);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ']') ADVANCE(295);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_Token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(301);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_Token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(302);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == '"') ADVANCE(521);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == '"') ADVANCE(523);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == '"') ADVANCE(522);
      if (lookahead == '8') ADVANCE(306);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == '"') ADVANCE(524);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == '-') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == '-') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == '-') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == '-') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == '-') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == '-') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == '-') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == '-') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == '-') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == '-') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'a') ADVANCE(438);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'a') ADVANCE(448);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'a') ADVANCE(338);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'a') ADVANCE(446);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'a') ADVANCE(492);
      if (lookahead == 'o') ADVANCE(478);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'a') ADVANCE(372);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'a') ADVANCE(450);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'a') ADVANCE(375);
      if (lookahead == 'e') ADVANCE(517);
      if (lookahead == 'r') ADVANCE(408);
      if (lookahead == 's') ADVANCE(511);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'a') ADVANCE(485);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'a') ADVANCE(501);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'a') ADVANCE(489);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'a') ADVANCE(373);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'a') ADVANCE(458);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'a') ADVANCE(371);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'a') ADVANCE(459);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'a') ADVANCE(505);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'a') ADVANCE(507);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'a') ADVANCE(493);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'b') ADVANCE(484);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'c') ADVANCE(424);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'c') ADVANCE(500);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'c') ADVANCE(380);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'c') ADVANCE(467);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'c') ADVANCE(506);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'c') ADVANCE(425);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'c') ADVANCE(491);
      if (lookahead == 'd') ADVANCE(381);
      if (lookahead == 'm') ADVANCE(464);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'c') ADVANCE(426);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'c') ADVANCE(494);
      if (lookahead == 'e') ADVANCE(516);
      if (lookahead == 'g') ADVANCE(486);
      if (lookahead == 's') ADVANCE(409);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'c') ADVANCE(495);
      if (lookahead == 'd') ADVANCE(415);
      if (lookahead == 'm') ADVANCE(471);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'd') ADVANCE(312);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'd') ADVANCE(251);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'd') ADVANCE(245);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'd') ADVANCE(287);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'd') ADVANCE(289);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'd') ADVANCE(291);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'd') ADVANCE(273);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'd') ADVANCE(261);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'd') ADVANCE(265);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'd') ADVANCE(267);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'd') ADVANCE(269);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'd') ADVANCE(271);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'd') ADVANCE(283);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'd') ADVANCE(263);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'd') ADVANCE(259);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'd') ADVANCE(253);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'd') ADVANCE(255);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'd') ADVANCE(275);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'd') ADVANCE(285);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'd') ADVANCE(257);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'd') ADVANCE(277);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'd') ADVANCE(281);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'd') ADVANCE(430);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'd') ADVANCE(308);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'd') ADVANCE(309);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'd') ADVANCE(392);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'd') ADVANCE(398);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'd') ADVANCE(402);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'd') ADVANCE(374);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'd') ADVANCE(437);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'e') ADVANCE(447);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'e') ADVANCE(339);
      if (lookahead == 'u') ADVANCE(454);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'e') ADVANCE(241);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'e') ADVANCE(419);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'e') ADVANCE(440);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'e') ADVANCE(347);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'e') ADVANCE(317);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'e') ADVANCE(337);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'e') ADVANCE(348);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'e') ADVANCE(330);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'e') ADVANCE(349);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'e') ADVANCE(350);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'e') ADVANCE(351);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'e') ADVANCE(326);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'e') ADVANCE(352);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'e') ADVANCE(353);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'e') ADVANCE(354);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'e') ADVANCE(355);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'e') ADVANCE(356);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'e') ADVANCE(357);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'e') ADVANCE(358);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'e') ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'e') ADVANCE(360);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'e') ADVANCE(361);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'e') ADVANCE(362);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'e') ADVANCE(363);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'e') ADVANCE(364);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'e') ADVANCE(365);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'e') ADVANCE(366);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'e') ADVANCE(367);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'e') ADVANCE(368);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'e') ADVANCE(445);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'e') ADVANCE(441);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'e') ADVANCE(340);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'e') ADVANCE(502);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'e') ADVANCE(508);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'e') ADVANCE(332);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'e') ADVANCE(333);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'e') ADVANCE(443);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'e') ADVANCE(315);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'f') ADVANCE(433);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'f') ADVANCE(434);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'f') ADVANCE(487);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'g') ADVANCE(243);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'g') ADVANCE(393);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'g') ADVANCE(399);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'g') ADVANCE(403);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'h') ADVANCE(323);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'h') ADVANCE(329);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'h') ADVANCE(331);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'h') ADVANCE(490);
      if (lookahead == 'r') ADVANCE(319);
      if (lookahead == 's') ADVANCE(514);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'i') ADVANCE(335);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'i') ADVANCE(497);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'i') ADVANCE(417);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'i') ADVANCE(449);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'i') ADVANCE(456);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'i') ADVANCE(389);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'i') ADVANCE(404);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'i') ADVANCE(503);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'i') ADVANCE(509);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'i') ADVANCE(418);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'k') ADVANCE(473);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'l') ADVANCE(468);
      if (lookahead == 'u') ADVANCE(451);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'l') ADVANCE(411);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'l') ADVANCE(410);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'l') ADVANCE(470);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'l') ADVANCE(412);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'm') ADVANCE(346);
      if (lookahead == 'o') ADVANCE(457);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'm') ADVANCE(463);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'm') ADVANCE(416);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'm') ADVANCE(466);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'm') ADVANCE(314);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'n') ADVANCE(420);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'n') ADVANCE(421);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'n') ADVANCE(442);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'n') ADVANCE(431);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'n') ADVANCE(379);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'n') ADVANCE(452);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'n') ADVANCE(384);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'n') ADVANCE(512);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'n') ADVANCE(455);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'n') ADVANCE(422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'n') ADVANCE(423);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'o') ADVANCE(472);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'o') ADVANCE(513);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'o') ADVANCE(453);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'o') ADVANCE(515);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'o') ADVANCE(369);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'o') ADVANCE(479);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'o') ADVANCE(480);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'o') ADVANCE(488);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'o') ADVANCE(322);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'o') ADVANCE(432);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'o') ADVANCE(328);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'o') ADVANCE(376);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'p') ADVANCE(475);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'p') ADVANCE(469);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'p') ADVANCE(325);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'p') ADVANCE(382);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'p') ADVANCE(311);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'p') ADVANCE(395);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'p') ADVANCE(477);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'r') ADVANCE(247);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'r') ADVANCE(518);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'r') ADVANCE(483);
      if (lookahead == 'x') ADVANCE(429);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'r') ADVANCE(383);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'r') ADVANCE(465);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'r') ADVANCE(327);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'r') ADVANCE(318);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'r') ADVANCE(461);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'r') ADVANCE(320);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'r') ADVANCE(370);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'r') ADVANCE(519);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'r') ADVANCE(386);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'r') ADVANCE(390);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'r') ADVANCE(504);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'r') ADVANCE(510);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'r') ADVANCE(413);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'r') ADVANCE(414);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 's') ADVANCE(498);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 't') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 't') ADVANCE(321);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 't') ADVANCE(460);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 't') ADVANCE(385);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 't') ADVANCE(387);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 't') ADVANCE(388);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 't') ADVANCE(391);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 't') ADVANCE(394);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 't') ADVANCE(396);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 't') ADVANCE(397);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 't') ADVANCE(400);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 't') ADVANCE(401);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 't') ADVANCE(405);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 't') ADVANCE(407);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 't') ADVANCE(334);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 't') ADVANCE(316);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'u') ADVANCE(476);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'v') ADVANCE(307);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'v') ADVANCE(406);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'x') ADVANCE(435);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'x') ADVANCE(436);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'y') ADVANCE(313);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'y') ADVANCE(310);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_L_DQUOTE);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_u_DQUOTE);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_U_DQUOTE);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_u8_DQUOTE);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_CStringCharacterSequence);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(526);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_CStringCharacterSequence);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_CStringEscapeSequence);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_CStringEscapeSequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(528);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_CStringEscapeSequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 231},
  [2] = {.lex_state = 231},
  [3] = {.lex_state = 35},
  [4] = {.lex_state = 231},
  [5] = {.lex_state = 35},
  [6] = {.lex_state = 35},
  [7] = {.lex_state = 35},
  [8] = {.lex_state = 35},
  [9] = {.lex_state = 35},
  [10] = {.lex_state = 231},
  [11] = {.lex_state = 231},
  [12] = {.lex_state = 231},
  [13] = {.lex_state = 231},
  [14] = {.lex_state = 231},
  [15] = {.lex_state = 231},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 231},
  [22] = {.lex_state = 231},
  [23] = {.lex_state = 231},
  [24] = {.lex_state = 231},
  [25] = {.lex_state = 231},
  [26] = {.lex_state = 231},
  [27] = {.lex_state = 231},
  [28] = {.lex_state = 231},
  [29] = {.lex_state = 231},
  [30] = {.lex_state = 231},
  [31] = {.lex_state = 231},
  [32] = {.lex_state = 231},
  [33] = {.lex_state = 231},
  [34] = {.lex_state = 231},
  [35] = {.lex_state = 231},
  [36] = {.lex_state = 231},
  [37] = {.lex_state = 231},
  [38] = {.lex_state = 231},
  [39] = {.lex_state = 231},
  [40] = {.lex_state = 231},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 35},
  [45] = {.lex_state = 35},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 231},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 231},
  [62] = {.lex_state = 231},
  [63] = {.lex_state = 231},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 231},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 231},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 231},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 231},
  [91] = {.lex_state = 231},
  [92] = {.lex_state = 231},
  [93] = {.lex_state = 231},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 231},
  [96] = {.lex_state = 231},
  [97] = {.lex_state = 231},
  [98] = {.lex_state = 231},
  [99] = {.lex_state = 231},
  [100] = {.lex_state = 231},
  [101] = {.lex_state = 231},
  [102] = {.lex_state = 231},
  [103] = {.lex_state = 231},
  [104] = {.lex_state = 231},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 231},
  [107] = {.lex_state = 231},
  [108] = {.lex_state = 231},
  [109] = {.lex_state = 231},
  [110] = {.lex_state = 231},
  [111] = {.lex_state = 231},
  [112] = {.lex_state = 231},
  [113] = {.lex_state = 231},
  [114] = {.lex_state = 231},
  [115] = {.lex_state = 231},
  [116] = {.lex_state = 231},
  [117] = {.lex_state = 231},
  [118] = {.lex_state = 231},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPARENgdb_RPAREN] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_done] = ACTIONS(1),
    [anon_sym_running] = ACTIONS(1),
    [anon_sym_connected] = ACTIONS(1),
    [anon_sym_error] = ACTIONS(1),
    [anon_sym_exit] = ACTIONS(1),
    [anon_sym_stopped] = ACTIONS(1),
    [anon_sym_breakpoint_DASHcreated] = ACTIONS(1),
    [anon_sym_breakpoint_DASHdeleted] = ACTIONS(1),
    [anon_sym_breakpoint_DASHmodified] = ACTIONS(1),
    [anon_sym_cmd_DASHparam_DASHchanged] = ACTIONS(1),
    [anon_sym_library_DASHloaded] = ACTIONS(1),
    [anon_sym_library_DASHunloaded] = ACTIONS(1),
    [anon_sym_memory_DASHchanged] = ACTIONS(1),
    [anon_sym_record_DASHstarted] = ACTIONS(1),
    [anon_sym_record_DASHstopped] = ACTIONS(1),
    [anon_sym_thread_DASHcreated] = ACTIONS(1),
    [anon_sym_thread_DASHexited] = ACTIONS(1),
    [anon_sym_thread_DASHgroup_DASHadded] = ACTIONS(1),
    [anon_sym_thread_DASHgroup_DASHexited] = ACTIONS(1),
    [anon_sym_thread_DASHgroup_DASHremoved] = ACTIONS(1),
    [anon_sym_thread_DASHgroup_DASHstarted] = ACTIONS(1),
    [anon_sym_thread_DASHselected] = ACTIONS(1),
    [anon_sym_traceframe_DASHchanged] = ACTIONS(1),
    [anon_sym_tsv_DASHcreated] = ACTIONS(1),
    [anon_sym_tsv_DASHdeleted] = ACTIONS(1),
    [anon_sym_tsv_DASHmodified] = ACTIONS(1),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [sym_Token] = ACTIONS(1),
    [sym_Identifier] = ACTIONS(1),
    [anon_sym_L_DQUOTE] = ACTIONS(1),
    [anon_sym_u_DQUOTE] = ACTIONS(1),
    [anon_sym_U_DQUOTE] = ACTIONS(1),
    [anon_sym_u8_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_CStringEscapeSequence] = ACTIONS(1),
  },
  [1] = {
    [sym_Stream] = STATE(121),
    [sym_Output] = STATE(4),
    [sym_ResultRecord] = STATE(14),
    [sym_OutOfBandRecord] = STATE(10),
    [sym_AsyncRecord] = STATE(26),
    [sym_ExecAsyncOutput] = STATE(35),
    [sym_StatusAsyncOutput] = STATE(35),
    [sym_NotifyAsyncOutput] = STATE(35),
    [sym_StreamRecord] = STATE(26),
    [sym_ConsoleStreamOutput] = STATE(32),
    [sym_TargetStreamOutput] = STATE(32),
    [sym_LogStreamOutput] = STATE(32),
    [aux_sym_Stream_repeat1] = STATE(4),
    [aux_sym_Output_repeat1] = STATE(10),
    [anon_sym_LPARENgdb_RPAREN] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(5),
    [anon_sym_CARET] = ACTIONS(7),
    [anon_sym_STAR] = ACTIONS(9),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_EQ] = ACTIONS(13),
    [anon_sym_TILDE] = ACTIONS(15),
    [anon_sym_AT] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(19),
    [sym_Token] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 17,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      anon_sym_LPARENgdb_RPAREN,
    ACTIONS(28), 1,
      anon_sym_LF,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(34), 1,
      anon_sym_STAR,
    ACTIONS(37), 1,
      anon_sym_PLUS,
    ACTIONS(40), 1,
      anon_sym_EQ,
    ACTIONS(43), 1,
      anon_sym_TILDE,
    ACTIONS(46), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      anon_sym_AMP,
    ACTIONS(52), 1,
      sym_Token,
    STATE(14), 1,
      sym_ResultRecord,
    STATE(2), 2,
      sym_Output,
      aux_sym_Stream_repeat1,
    STATE(10), 2,
      sym_OutOfBandRecord,
      aux_sym_Output_repeat1,
    STATE(26), 2,
      sym_AsyncRecord,
      sym_StreamRecord,
    STATE(32), 3,
      sym_ConsoleStreamOutput,
      sym_TargetStreamOutput,
      sym_LogStreamOutput,
    STATE(35), 3,
      sym_ExecAsyncOutput,
      sym_StatusAsyncOutput,
      sym_NotifyAsyncOutput,
  [59] = 3,
    STATE(71), 1,
      sym_AsyncClass,
    STATE(109), 1,
      sym_AsyncOutput,
    ACTIONS(55), 22,
      anon_sym_running,
      anon_sym_stopped,
      anon_sym_breakpoint_DASHcreated,
      anon_sym_breakpoint_DASHdeleted,
      anon_sym_breakpoint_DASHmodified,
      anon_sym_cmd_DASHparam_DASHchanged,
      anon_sym_library_DASHloaded,
      anon_sym_library_DASHunloaded,
      anon_sym_memory_DASHchanged,
      anon_sym_record_DASHstarted,
      anon_sym_record_DASHstopped,
      anon_sym_thread_DASHcreated,
      anon_sym_thread_DASHexited,
      anon_sym_thread_DASHgroup_DASHadded,
      anon_sym_thread_DASHgroup_DASHexited,
      anon_sym_thread_DASHgroup_DASHremoved,
      anon_sym_thread_DASHgroup_DASHstarted,
      anon_sym_thread_DASHselected,
      anon_sym_traceframe_DASHchanged,
      anon_sym_tsv_DASHcreated,
      anon_sym_tsv_DASHdeleted,
      anon_sym_tsv_DASHmodified,
  [90] = 17,
    ACTIONS(3), 1,
      anon_sym_LPARENgdb_RPAREN,
    ACTIONS(5), 1,
      anon_sym_LF,
    ACTIONS(7), 1,
      anon_sym_CARET,
    ACTIONS(9), 1,
      anon_sym_STAR,
    ACTIONS(11), 1,
      anon_sym_PLUS,
    ACTIONS(13), 1,
      anon_sym_EQ,
    ACTIONS(15), 1,
      anon_sym_TILDE,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(19), 1,
      anon_sym_AMP,
    ACTIONS(21), 1,
      sym_Token,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    STATE(14), 1,
      sym_ResultRecord,
    STATE(2), 2,
      sym_Output,
      aux_sym_Stream_repeat1,
    STATE(10), 2,
      sym_OutOfBandRecord,
      aux_sym_Output_repeat1,
    STATE(26), 2,
      sym_AsyncRecord,
      sym_StreamRecord,
    STATE(32), 3,
      sym_ConsoleStreamOutput,
      sym_TargetStreamOutput,
      sym_LogStreamOutput,
    STATE(35), 3,
      sym_ExecAsyncOutput,
      sym_StatusAsyncOutput,
      sym_NotifyAsyncOutput,
  [149] = 3,
    STATE(71), 1,
      sym_AsyncClass,
    STATE(108), 1,
      sym_AsyncOutput,
    ACTIONS(55), 22,
      anon_sym_running,
      anon_sym_stopped,
      anon_sym_breakpoint_DASHcreated,
      anon_sym_breakpoint_DASHdeleted,
      anon_sym_breakpoint_DASHmodified,
      anon_sym_cmd_DASHparam_DASHchanged,
      anon_sym_library_DASHloaded,
      anon_sym_library_DASHunloaded,
      anon_sym_memory_DASHchanged,
      anon_sym_record_DASHstarted,
      anon_sym_record_DASHstopped,
      anon_sym_thread_DASHcreated,
      anon_sym_thread_DASHexited,
      anon_sym_thread_DASHgroup_DASHadded,
      anon_sym_thread_DASHgroup_DASHexited,
      anon_sym_thread_DASHgroup_DASHremoved,
      anon_sym_thread_DASHgroup_DASHstarted,
      anon_sym_thread_DASHselected,
      anon_sym_traceframe_DASHchanged,
      anon_sym_tsv_DASHcreated,
      anon_sym_tsv_DASHdeleted,
      anon_sym_tsv_DASHmodified,
  [180] = 3,
    STATE(71), 1,
      sym_AsyncClass,
    STATE(117), 1,
      sym_AsyncOutput,
    ACTIONS(55), 22,
      anon_sym_running,
      anon_sym_stopped,
      anon_sym_breakpoint_DASHcreated,
      anon_sym_breakpoint_DASHdeleted,
      anon_sym_breakpoint_DASHmodified,
      anon_sym_cmd_DASHparam_DASHchanged,
      anon_sym_library_DASHloaded,
      anon_sym_library_DASHunloaded,
      anon_sym_memory_DASHchanged,
      anon_sym_record_DASHstarted,
      anon_sym_record_DASHstopped,
      anon_sym_thread_DASHcreated,
      anon_sym_thread_DASHexited,
      anon_sym_thread_DASHgroup_DASHadded,
      anon_sym_thread_DASHgroup_DASHexited,
      anon_sym_thread_DASHgroup_DASHremoved,
      anon_sym_thread_DASHgroup_DASHstarted,
      anon_sym_thread_DASHselected,
      anon_sym_traceframe_DASHchanged,
      anon_sym_tsv_DASHcreated,
      anon_sym_tsv_DASHdeleted,
      anon_sym_tsv_DASHmodified,
  [211] = 3,
    STATE(71), 1,
      sym_AsyncClass,
    STATE(116), 1,
      sym_AsyncOutput,
    ACTIONS(55), 22,
      anon_sym_running,
      anon_sym_stopped,
      anon_sym_breakpoint_DASHcreated,
      anon_sym_breakpoint_DASHdeleted,
      anon_sym_breakpoint_DASHmodified,
      anon_sym_cmd_DASHparam_DASHchanged,
      anon_sym_library_DASHloaded,
      anon_sym_library_DASHunloaded,
      anon_sym_memory_DASHchanged,
      anon_sym_record_DASHstarted,
      anon_sym_record_DASHstopped,
      anon_sym_thread_DASHcreated,
      anon_sym_thread_DASHexited,
      anon_sym_thread_DASHgroup_DASHadded,
      anon_sym_thread_DASHgroup_DASHexited,
      anon_sym_thread_DASHgroup_DASHremoved,
      anon_sym_thread_DASHgroup_DASHstarted,
      anon_sym_thread_DASHselected,
      anon_sym_traceframe_DASHchanged,
      anon_sym_tsv_DASHcreated,
      anon_sym_tsv_DASHdeleted,
      anon_sym_tsv_DASHmodified,
  [242] = 3,
    STATE(71), 1,
      sym_AsyncClass,
    STATE(115), 1,
      sym_AsyncOutput,
    ACTIONS(55), 22,
      anon_sym_running,
      anon_sym_stopped,
      anon_sym_breakpoint_DASHcreated,
      anon_sym_breakpoint_DASHdeleted,
      anon_sym_breakpoint_DASHmodified,
      anon_sym_cmd_DASHparam_DASHchanged,
      anon_sym_library_DASHloaded,
      anon_sym_library_DASHunloaded,
      anon_sym_memory_DASHchanged,
      anon_sym_record_DASHstarted,
      anon_sym_record_DASHstopped,
      anon_sym_thread_DASHcreated,
      anon_sym_thread_DASHexited,
      anon_sym_thread_DASHgroup_DASHadded,
      anon_sym_thread_DASHgroup_DASHexited,
      anon_sym_thread_DASHgroup_DASHremoved,
      anon_sym_thread_DASHgroup_DASHstarted,
      anon_sym_thread_DASHselected,
      anon_sym_traceframe_DASHchanged,
      anon_sym_tsv_DASHcreated,
      anon_sym_tsv_DASHdeleted,
      anon_sym_tsv_DASHmodified,
  [273] = 3,
    STATE(71), 1,
      sym_AsyncClass,
    STATE(107), 1,
      sym_AsyncOutput,
    ACTIONS(55), 22,
      anon_sym_running,
      anon_sym_stopped,
      anon_sym_breakpoint_DASHcreated,
      anon_sym_breakpoint_DASHdeleted,
      anon_sym_breakpoint_DASHmodified,
      anon_sym_cmd_DASHparam_DASHchanged,
      anon_sym_library_DASHloaded,
      anon_sym_library_DASHunloaded,
      anon_sym_memory_DASHchanged,
      anon_sym_record_DASHstarted,
      anon_sym_record_DASHstopped,
      anon_sym_thread_DASHcreated,
      anon_sym_thread_DASHexited,
      anon_sym_thread_DASHgroup_DASHadded,
      anon_sym_thread_DASHgroup_DASHexited,
      anon_sym_thread_DASHgroup_DASHremoved,
      anon_sym_thread_DASHgroup_DASHstarted,
      anon_sym_thread_DASHselected,
      anon_sym_traceframe_DASHchanged,
      anon_sym_tsv_DASHcreated,
      anon_sym_tsv_DASHdeleted,
      anon_sym_tsv_DASHmodified,
  [304] = 15,
    ACTIONS(7), 1,
      anon_sym_CARET,
    ACTIONS(9), 1,
      anon_sym_STAR,
    ACTIONS(11), 1,
      anon_sym_PLUS,
    ACTIONS(13), 1,
      anon_sym_EQ,
    ACTIONS(15), 1,
      anon_sym_TILDE,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(19), 1,
      anon_sym_AMP,
    ACTIONS(21), 1,
      sym_Token,
    ACTIONS(59), 1,
      anon_sym_LPARENgdb_RPAREN,
    ACTIONS(61), 1,
      anon_sym_LF,
    STATE(12), 1,
      sym_ResultRecord,
    STATE(11), 2,
      sym_OutOfBandRecord,
      aux_sym_Output_repeat1,
    STATE(26), 2,
      sym_AsyncRecord,
      sym_StreamRecord,
    STATE(32), 3,
      sym_ConsoleStreamOutput,
      sym_TargetStreamOutput,
      sym_LogStreamOutput,
    STATE(35), 3,
      sym_ExecAsyncOutput,
      sym_StatusAsyncOutput,
      sym_NotifyAsyncOutput,
  [356] = 13,
    ACTIONS(65), 1,
      anon_sym_LF,
    ACTIONS(67), 1,
      anon_sym_STAR,
    ACTIONS(70), 1,
      anon_sym_PLUS,
    ACTIONS(73), 1,
      anon_sym_EQ,
    ACTIONS(76), 1,
      anon_sym_TILDE,
    ACTIONS(79), 1,
      anon_sym_AT,
    ACTIONS(82), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      sym_Token,
    ACTIONS(63), 2,
      anon_sym_LPARENgdb_RPAREN,
      anon_sym_CARET,
    STATE(11), 2,
      sym_OutOfBandRecord,
      aux_sym_Output_repeat1,
    STATE(26), 2,
      sym_AsyncRecord,
      sym_StreamRecord,
    STATE(32), 3,
      sym_ConsoleStreamOutput,
      sym_TargetStreamOutput,
      sym_LogStreamOutput,
    STATE(35), 3,
      sym_ExecAsyncOutput,
      sym_StatusAsyncOutput,
      sym_NotifyAsyncOutput,
  [403] = 13,
    ACTIONS(9), 1,
      anon_sym_STAR,
    ACTIONS(11), 1,
      anon_sym_PLUS,
    ACTIONS(13), 1,
      anon_sym_EQ,
    ACTIONS(15), 1,
      anon_sym_TILDE,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(19), 1,
      anon_sym_AMP,
    ACTIONS(88), 1,
      anon_sym_LPARENgdb_RPAREN,
    ACTIONS(90), 1,
      anon_sym_LF,
    ACTIONS(92), 1,
      sym_Token,
    STATE(15), 2,
      sym_OutOfBandRecord,
      aux_sym_Output_repeat1,
    STATE(26), 2,
      sym_AsyncRecord,
      sym_StreamRecord,
    STATE(32), 3,
      sym_ConsoleStreamOutput,
      sym_TargetStreamOutput,
      sym_LogStreamOutput,
    STATE(35), 3,
      sym_ExecAsyncOutput,
      sym_StatusAsyncOutput,
      sym_NotifyAsyncOutput,
  [449] = 13,
    ACTIONS(9), 1,
      anon_sym_STAR,
    ACTIONS(11), 1,
      anon_sym_PLUS,
    ACTIONS(13), 1,
      anon_sym_EQ,
    ACTIONS(15), 1,
      anon_sym_TILDE,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(19), 1,
      anon_sym_AMP,
    ACTIONS(88), 1,
      anon_sym_LPARENgdb_RPAREN,
    ACTIONS(90), 1,
      anon_sym_LF,
    ACTIONS(92), 1,
      sym_Token,
    STATE(11), 2,
      sym_OutOfBandRecord,
      aux_sym_Output_repeat1,
    STATE(26), 2,
      sym_AsyncRecord,
      sym_StreamRecord,
    STATE(32), 3,
      sym_ConsoleStreamOutput,
      sym_TargetStreamOutput,
      sym_LogStreamOutput,
    STATE(35), 3,
      sym_ExecAsyncOutput,
      sym_StatusAsyncOutput,
      sym_NotifyAsyncOutput,
  [495] = 13,
    ACTIONS(9), 1,
      anon_sym_STAR,
    ACTIONS(11), 1,
      anon_sym_PLUS,
    ACTIONS(13), 1,
      anon_sym_EQ,
    ACTIONS(15), 1,
      anon_sym_TILDE,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(19), 1,
      anon_sym_AMP,
    ACTIONS(59), 1,
      anon_sym_LPARENgdb_RPAREN,
    ACTIONS(61), 1,
      anon_sym_LF,
    ACTIONS(92), 1,
      sym_Token,
    STATE(13), 2,
      sym_OutOfBandRecord,
      aux_sym_Output_repeat1,
    STATE(26), 2,
      sym_AsyncRecord,
      sym_StreamRecord,
    STATE(32), 3,
      sym_ConsoleStreamOutput,
      sym_TargetStreamOutput,
      sym_LogStreamOutput,
    STATE(35), 3,
      sym_ExecAsyncOutput,
      sym_StatusAsyncOutput,
      sym_NotifyAsyncOutput,
  [541] = 13,
    ACTIONS(9), 1,
      anon_sym_STAR,
    ACTIONS(11), 1,
      anon_sym_PLUS,
    ACTIONS(13), 1,
      anon_sym_EQ,
    ACTIONS(15), 1,
      anon_sym_TILDE,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(19), 1,
      anon_sym_AMP,
    ACTIONS(92), 1,
      sym_Token,
    ACTIONS(94), 1,
      anon_sym_LPARENgdb_RPAREN,
    ACTIONS(96), 1,
      anon_sym_LF,
    STATE(11), 2,
      sym_OutOfBandRecord,
      aux_sym_Output_repeat1,
    STATE(26), 2,
      sym_AsyncRecord,
      sym_StreamRecord,
    STATE(32), 3,
      sym_ConsoleStreamOutput,
      sym_TargetStreamOutput,
      sym_LogStreamOutput,
    STATE(35), 3,
      sym_ExecAsyncOutput,
      sym_StatusAsyncOutput,
      sym_NotifyAsyncOutput,
  [587] = 11,
    ACTIONS(98), 1,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(100), 1,
      anon_sym_LBRACE,
    ACTIONS(102), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(104), 1,
      anon_sym_LBRACK,
    ACTIONS(106), 1,
      sym_Identifier,
    STATE(60), 1,
      sym_CString,
    STATE(69), 1,
      sym_Result,
    STATE(70), 1,
      sym_Value,
    STATE(119), 1,
      sym_Variable,
    STATE(74), 3,
      sym_Tuple,
      sym_List,
      sym_Const,
    ACTIONS(108), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [627] = 11,
    ACTIONS(98), 1,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(100), 1,
      anon_sym_LBRACE,
    ACTIONS(102), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(104), 1,
      anon_sym_LBRACK,
    ACTIONS(106), 1,
      sym_Identifier,
    STATE(60), 1,
      sym_CString,
    STATE(76), 1,
      sym_Result,
    STATE(77), 1,
      sym_Value,
    STATE(119), 1,
      sym_Variable,
    STATE(74), 3,
      sym_Tuple,
      sym_List,
      sym_Const,
    ACTIONS(108), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [667] = 8,
    ACTIONS(98), 1,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(100), 1,
      anon_sym_LBRACE,
    ACTIONS(102), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(104), 1,
      anon_sym_LBRACK,
    STATE(60), 1,
      sym_CString,
    STATE(89), 1,
      sym_Value,
    STATE(74), 3,
      sym_Tuple,
      sym_List,
      sym_Const,
    ACTIONS(108), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [698] = 8,
    ACTIONS(98), 1,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(100), 1,
      anon_sym_LBRACE,
    ACTIONS(102), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(104), 1,
      anon_sym_LBRACK,
    STATE(60), 1,
      sym_CString,
    STATE(94), 1,
      sym_Value,
    STATE(74), 3,
      sym_Tuple,
      sym_List,
      sym_Const,
    ACTIONS(108), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [729] = 8,
    ACTIONS(110), 1,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(112), 1,
      anon_sym_LBRACE,
    ACTIONS(114), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    STATE(95), 1,
      sym_CString,
    STATE(103), 1,
      sym_Value,
    STATE(91), 3,
      sym_Tuple,
      sym_List,
      sym_Const,
    ACTIONS(118), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [760] = 2,
    ACTIONS(120), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(122), 9,
      anon_sym_LPARENgdb_RPAREN,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_AMP,
      sym_Token,
  [776] = 2,
    ACTIONS(124), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(126), 9,
      anon_sym_LPARENgdb_RPAREN,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_AMP,
      sym_Token,
  [792] = 2,
    ACTIONS(128), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(130), 9,
      anon_sym_LPARENgdb_RPAREN,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_AMP,
      sym_Token,
  [808] = 2,
    ACTIONS(132), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(134), 9,
      anon_sym_LPARENgdb_RPAREN,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_AMP,
      sym_Token,
  [824] = 2,
    ACTIONS(136), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(138), 9,
      anon_sym_LPARENgdb_RPAREN,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_AMP,
      sym_Token,
  [840] = 2,
    ACTIONS(142), 1,
      anon_sym_LF,
    ACTIONS(140), 9,
      anon_sym_LPARENgdb_RPAREN,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_AMP,
      sym_Token,
  [855] = 2,
    ACTIONS(146), 1,
      anon_sym_LF,
    ACTIONS(144), 9,
      anon_sym_LPARENgdb_RPAREN,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_AMP,
      sym_Token,
  [870] = 2,
    ACTIONS(150), 1,
      anon_sym_LF,
    ACTIONS(148), 9,
      anon_sym_LPARENgdb_RPAREN,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_AMP,
      sym_Token,
  [885] = 2,
    ACTIONS(154), 1,
      anon_sym_LF,
    ACTIONS(152), 9,
      anon_sym_LPARENgdb_RPAREN,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_AMP,
      sym_Token,
  [900] = 2,
    ACTIONS(158), 1,
      anon_sym_LF,
    ACTIONS(156), 9,
      anon_sym_LPARENgdb_RPAREN,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_AMP,
      sym_Token,
  [915] = 2,
    ACTIONS(162), 1,
      anon_sym_LF,
    ACTIONS(160), 9,
      anon_sym_LPARENgdb_RPAREN,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_AMP,
      sym_Token,
  [930] = 2,
    ACTIONS(166), 1,
      anon_sym_LF,
    ACTIONS(164), 9,
      anon_sym_LPARENgdb_RPAREN,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_AMP,
      sym_Token,
  [945] = 2,
    ACTIONS(170), 1,
      anon_sym_LF,
    ACTIONS(168), 9,
      anon_sym_LPARENgdb_RPAREN,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_AMP,
      sym_Token,
  [960] = 2,
    ACTIONS(174), 1,
      anon_sym_LF,
    ACTIONS(172), 9,
      anon_sym_LPARENgdb_RPAREN,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_AMP,
      sym_Token,
  [975] = 2,
    ACTIONS(178), 1,
      anon_sym_LF,
    ACTIONS(176), 9,
      anon_sym_LPARENgdb_RPAREN,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_AMP,
      sym_Token,
  [990] = 2,
    ACTIONS(182), 1,
      anon_sym_LF,
    ACTIONS(180), 9,
      anon_sym_LPARENgdb_RPAREN,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_AMP,
      sym_Token,
  [1005] = 2,
    ACTIONS(186), 1,
      anon_sym_LF,
    ACTIONS(184), 9,
      anon_sym_LPARENgdb_RPAREN,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_AMP,
      sym_Token,
  [1020] = 2,
    ACTIONS(190), 1,
      anon_sym_LF,
    ACTIONS(188), 8,
      anon_sym_LPARENgdb_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_AMP,
      sym_Token,
  [1034] = 2,
    ACTIONS(194), 1,
      anon_sym_LF,
    ACTIONS(192), 8,
      anon_sym_LPARENgdb_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_AMP,
      sym_Token,
  [1048] = 2,
    ACTIONS(198), 1,
      anon_sym_LF,
    ACTIONS(196), 8,
      anon_sym_LPARENgdb_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_AMP,
      sym_Token,
  [1062] = 2,
    STATE(114), 1,
      sym_CString,
    ACTIONS(118), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [1073] = 2,
    STATE(113), 1,
      sym_CString,
    ACTIONS(118), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [1084] = 2,
    STATE(112), 1,
      sym_CString,
    ACTIONS(118), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [1095] = 2,
    STATE(80), 1,
      sym_ResultClass,
    ACTIONS(200), 5,
      anon_sym_done,
      anon_sym_running,
      anon_sym_connected,
      anon_sym_error,
      anon_sym_exit,
  [1106] = 2,
    STATE(57), 1,
      sym_ResultClass,
    ACTIONS(200), 5,
      anon_sym_done,
      anon_sym_running,
      anon_sym_connected,
      anon_sym_error,
      anon_sym_exit,
  [1117] = 4,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      sym_CStringCharacterSequence,
    ACTIONS(206), 1,
      sym_CStringEscapeSequence,
    STATE(52), 1,
      aux_sym_CString_repeat1,
  [1130] = 4,
    ACTIONS(208), 1,
      anon_sym_DQUOTE,
    ACTIONS(210), 1,
      sym_CStringCharacterSequence,
    ACTIONS(212), 1,
      sym_CStringEscapeSequence,
    STATE(51), 1,
      aux_sym_CString_repeat1,
  [1143] = 4,
    ACTIONS(214), 1,
      anon_sym_CARET,
    ACTIONS(216), 1,
      anon_sym_STAR,
    ACTIONS(218), 1,
      anon_sym_PLUS,
    ACTIONS(220), 1,
      anon_sym_EQ,
  [1156] = 3,
    ACTIONS(222), 1,
      anon_sym_COMMA,
    STATE(49), 1,
      aux_sym_ResultRecord_repeat1,
    ACTIONS(225), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1167] = 4,
    ACTIONS(227), 1,
      anon_sym_DQUOTE,
    ACTIONS(229), 1,
      sym_CStringCharacterSequence,
    ACTIONS(231), 1,
      sym_CStringEscapeSequence,
    STATE(46), 1,
      aux_sym_CString_repeat1,
  [1180] = 4,
    ACTIONS(204), 1,
      sym_CStringCharacterSequence,
    ACTIONS(206), 1,
      sym_CStringEscapeSequence,
    ACTIONS(233), 1,
      anon_sym_DQUOTE,
    STATE(52), 1,
      aux_sym_CString_repeat1,
  [1193] = 4,
    ACTIONS(235), 1,
      anon_sym_DQUOTE,
    ACTIONS(237), 1,
      sym_CStringCharacterSequence,
    ACTIONS(240), 1,
      sym_CStringEscapeSequence,
    STATE(52), 1,
      aux_sym_CString_repeat1,
  [1206] = 3,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    ACTIONS(245), 1,
      anon_sym_RBRACK,
    STATE(49), 1,
      aux_sym_ResultRecord_repeat1,
  [1216] = 1,
    ACTIONS(247), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1222] = 1,
    ACTIONS(249), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1228] = 1,
    ACTIONS(251), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1234] = 3,
    ACTIONS(253), 1,
      anon_sym_LF,
    ACTIONS(255), 1,
      anon_sym_COMMA,
    STATE(65), 1,
      aux_sym_ResultRecord_repeat1,
  [1244] = 1,
    ACTIONS(257), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1250] = 3,
    ACTIONS(259), 1,
      sym_Identifier,
    STATE(68), 1,
      sym_Result,
    STATE(119), 1,
      sym_Variable,
  [1260] = 1,
    ACTIONS(261), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1266] = 3,
    ACTIONS(255), 1,
      anon_sym_COMMA,
    ACTIONS(263), 1,
      anon_sym_LF,
    STATE(63), 1,
      aux_sym_ResultRecord_repeat1,
  [1276] = 3,
    ACTIONS(253), 1,
      anon_sym_LF,
    ACTIONS(255), 1,
      anon_sym_COMMA,
    STATE(63), 1,
      aux_sym_ResultRecord_repeat1,
  [1286] = 3,
    ACTIONS(225), 1,
      anon_sym_LF,
    ACTIONS(265), 1,
      anon_sym_COMMA,
    STATE(63), 1,
      aux_sym_ResultRecord_repeat1,
  [1296] = 3,
    ACTIONS(259), 1,
      sym_Identifier,
    STATE(90), 1,
      sym_Result,
    STATE(120), 1,
      sym_Variable,
  [1306] = 3,
    ACTIONS(255), 1,
      anon_sym_COMMA,
    ACTIONS(268), 1,
      anon_sym_LF,
    STATE(63), 1,
      aux_sym_ResultRecord_repeat1,
  [1316] = 3,
    ACTIONS(216), 1,
      anon_sym_STAR,
    ACTIONS(218), 1,
      anon_sym_PLUS,
    ACTIONS(220), 1,
      anon_sym_EQ,
  [1326] = 3,
    ACTIONS(259), 1,
      sym_Identifier,
    STATE(84), 1,
      sym_Result,
    STATE(119), 1,
      sym_Variable,
  [1336] = 3,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    ACTIONS(270), 1,
      anon_sym_RBRACE,
    STATE(72), 1,
      aux_sym_ResultRecord_repeat1,
  [1346] = 3,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    ACTIONS(272), 1,
      anon_sym_RBRACK,
    STATE(53), 1,
      aux_sym_ResultRecord_repeat1,
  [1356] = 3,
    ACTIONS(272), 1,
      anon_sym_RBRACK,
    ACTIONS(274), 1,
      anon_sym_COMMA,
    STATE(85), 1,
      aux_sym_List_repeat1,
  [1366] = 3,
    ACTIONS(255), 1,
      anon_sym_COMMA,
    ACTIONS(276), 1,
      anon_sym_LF,
    STATE(61), 1,
      aux_sym_ResultRecord_repeat1,
  [1376] = 3,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    ACTIONS(278), 1,
      anon_sym_RBRACE,
    STATE(49), 1,
      aux_sym_ResultRecord_repeat1,
  [1386] = 3,
    ACTIONS(259), 1,
      sym_Identifier,
    STATE(75), 1,
      sym_Result,
    STATE(119), 1,
      sym_Variable,
  [1396] = 1,
    ACTIONS(280), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1402] = 3,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    ACTIONS(282), 1,
      anon_sym_RBRACE,
    STATE(78), 1,
      aux_sym_ResultRecord_repeat1,
  [1412] = 3,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    ACTIONS(284), 1,
      anon_sym_RBRACK,
    STATE(79), 1,
      aux_sym_ResultRecord_repeat1,
  [1422] = 3,
    ACTIONS(274), 1,
      anon_sym_COMMA,
    ACTIONS(284), 1,
      anon_sym_RBRACK,
    STATE(81), 1,
      aux_sym_List_repeat1,
  [1432] = 3,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    ACTIONS(286), 1,
      anon_sym_RBRACE,
    STATE(49), 1,
      aux_sym_ResultRecord_repeat1,
  [1442] = 3,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    ACTIONS(288), 1,
      anon_sym_RBRACK,
    STATE(49), 1,
      aux_sym_ResultRecord_repeat1,
  [1452] = 3,
    ACTIONS(255), 1,
      anon_sym_COMMA,
    ACTIONS(290), 1,
      anon_sym_LF,
    STATE(62), 1,
      aux_sym_ResultRecord_repeat1,
  [1462] = 3,
    ACTIONS(274), 1,
      anon_sym_COMMA,
    ACTIONS(288), 1,
      anon_sym_RBRACK,
    STATE(82), 1,
      aux_sym_List_repeat1,
  [1472] = 3,
    ACTIONS(292), 1,
      anon_sym_COMMA,
    ACTIONS(295), 1,
      anon_sym_RBRACK,
    STATE(82), 1,
      aux_sym_List_repeat1,
  [1482] = 1,
    ACTIONS(297), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1488] = 1,
    ACTIONS(225), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1494] = 3,
    ACTIONS(245), 1,
      anon_sym_RBRACK,
    ACTIONS(274), 1,
      anon_sym_COMMA,
    STATE(82), 1,
      aux_sym_List_repeat1,
  [1504] = 1,
    ACTIONS(299), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1510] = 1,
    ACTIONS(301), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1516] = 1,
    ACTIONS(303), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1522] = 1,
    ACTIONS(305), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1528] = 2,
    ACTIONS(225), 1,
      anon_sym_LF,
    ACTIONS(307), 1,
      anon_sym_COMMA,
  [1535] = 2,
    ACTIONS(280), 1,
      anon_sym_LF,
    ACTIONS(309), 1,
      anon_sym_COMMA,
  [1542] = 2,
    ACTIONS(249), 1,
      anon_sym_LF,
    ACTIONS(311), 1,
      anon_sym_COMMA,
  [1549] = 2,
    ACTIONS(247), 1,
      anon_sym_LF,
    ACTIONS(313), 1,
      anon_sym_COMMA,
  [1556] = 1,
    ACTIONS(295), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1561] = 2,
    ACTIONS(261), 1,
      anon_sym_LF,
    ACTIONS(315), 1,
      anon_sym_COMMA,
  [1568] = 2,
    ACTIONS(317), 1,
      anon_sym_LF,
    ACTIONS(319), 1,
      anon_sym_COMMA,
  [1575] = 2,
    ACTIONS(301), 1,
      anon_sym_LF,
    ACTIONS(321), 1,
      anon_sym_COMMA,
  [1582] = 2,
    ACTIONS(323), 1,
      anon_sym_LF,
    ACTIONS(325), 1,
      anon_sym_COMMA,
  [1589] = 2,
    ACTIONS(257), 1,
      anon_sym_LF,
    ACTIONS(327), 1,
      anon_sym_COMMA,
  [1596] = 2,
    ACTIONS(303), 1,
      anon_sym_LF,
    ACTIONS(329), 1,
      anon_sym_COMMA,
  [1603] = 2,
    ACTIONS(251), 1,
      anon_sym_LF,
    ACTIONS(331), 1,
      anon_sym_COMMA,
  [1610] = 2,
    ACTIONS(299), 1,
      anon_sym_LF,
    ACTIONS(333), 1,
      anon_sym_COMMA,
  [1617] = 2,
    ACTIONS(305), 1,
      anon_sym_LF,
    ACTIONS(335), 1,
      anon_sym_COMMA,
  [1624] = 2,
    ACTIONS(297), 1,
      anon_sym_LF,
    ACTIONS(337), 1,
      anon_sym_COMMA,
  [1631] = 1,
    ACTIONS(339), 1,
      anon_sym_EQ,
  [1635] = 1,
    ACTIONS(96), 1,
      anon_sym_LF,
  [1639] = 1,
    ACTIONS(341), 1,
      anon_sym_LF,
  [1643] = 1,
    ACTIONS(343), 1,
      anon_sym_LF,
  [1647] = 1,
    ACTIONS(345), 1,
      anon_sym_LF,
  [1651] = 1,
    ACTIONS(347), 1,
      anon_sym_LF,
  [1655] = 1,
    ACTIONS(90), 1,
      anon_sym_LF,
  [1659] = 1,
    ACTIONS(349), 1,
      anon_sym_LF,
  [1663] = 1,
    ACTIONS(351), 1,
      anon_sym_LF,
  [1667] = 1,
    ACTIONS(353), 1,
      anon_sym_LF,
  [1671] = 1,
    ACTIONS(355), 1,
      anon_sym_LF,
  [1675] = 1,
    ACTIONS(357), 1,
      anon_sym_LF,
  [1679] = 1,
    ACTIONS(359), 1,
      anon_sym_LF,
  [1683] = 1,
    ACTIONS(61), 1,
      anon_sym_LF,
  [1687] = 1,
    ACTIONS(361), 1,
      anon_sym_EQ,
  [1691] = 1,
    ACTIONS(363), 1,
      anon_sym_EQ,
  [1695] = 1,
    ACTIONS(365), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 59,
  [SMALL_STATE(4)] = 90,
  [SMALL_STATE(5)] = 149,
  [SMALL_STATE(6)] = 180,
  [SMALL_STATE(7)] = 211,
  [SMALL_STATE(8)] = 242,
  [SMALL_STATE(9)] = 273,
  [SMALL_STATE(10)] = 304,
  [SMALL_STATE(11)] = 356,
  [SMALL_STATE(12)] = 403,
  [SMALL_STATE(13)] = 449,
  [SMALL_STATE(14)] = 495,
  [SMALL_STATE(15)] = 541,
  [SMALL_STATE(16)] = 587,
  [SMALL_STATE(17)] = 627,
  [SMALL_STATE(18)] = 667,
  [SMALL_STATE(19)] = 698,
  [SMALL_STATE(20)] = 729,
  [SMALL_STATE(21)] = 760,
  [SMALL_STATE(22)] = 776,
  [SMALL_STATE(23)] = 792,
  [SMALL_STATE(24)] = 808,
  [SMALL_STATE(25)] = 824,
  [SMALL_STATE(26)] = 840,
  [SMALL_STATE(27)] = 855,
  [SMALL_STATE(28)] = 870,
  [SMALL_STATE(29)] = 885,
  [SMALL_STATE(30)] = 900,
  [SMALL_STATE(31)] = 915,
  [SMALL_STATE(32)] = 930,
  [SMALL_STATE(33)] = 945,
  [SMALL_STATE(34)] = 960,
  [SMALL_STATE(35)] = 975,
  [SMALL_STATE(36)] = 990,
  [SMALL_STATE(37)] = 1005,
  [SMALL_STATE(38)] = 1020,
  [SMALL_STATE(39)] = 1034,
  [SMALL_STATE(40)] = 1048,
  [SMALL_STATE(41)] = 1062,
  [SMALL_STATE(42)] = 1073,
  [SMALL_STATE(43)] = 1084,
  [SMALL_STATE(44)] = 1095,
  [SMALL_STATE(45)] = 1106,
  [SMALL_STATE(46)] = 1117,
  [SMALL_STATE(47)] = 1130,
  [SMALL_STATE(48)] = 1143,
  [SMALL_STATE(49)] = 1156,
  [SMALL_STATE(50)] = 1167,
  [SMALL_STATE(51)] = 1180,
  [SMALL_STATE(52)] = 1193,
  [SMALL_STATE(53)] = 1206,
  [SMALL_STATE(54)] = 1216,
  [SMALL_STATE(55)] = 1222,
  [SMALL_STATE(56)] = 1228,
  [SMALL_STATE(57)] = 1234,
  [SMALL_STATE(58)] = 1244,
  [SMALL_STATE(59)] = 1250,
  [SMALL_STATE(60)] = 1260,
  [SMALL_STATE(61)] = 1266,
  [SMALL_STATE(62)] = 1276,
  [SMALL_STATE(63)] = 1286,
  [SMALL_STATE(64)] = 1296,
  [SMALL_STATE(65)] = 1306,
  [SMALL_STATE(66)] = 1316,
  [SMALL_STATE(67)] = 1326,
  [SMALL_STATE(68)] = 1336,
  [SMALL_STATE(69)] = 1346,
  [SMALL_STATE(70)] = 1356,
  [SMALL_STATE(71)] = 1366,
  [SMALL_STATE(72)] = 1376,
  [SMALL_STATE(73)] = 1386,
  [SMALL_STATE(74)] = 1396,
  [SMALL_STATE(75)] = 1402,
  [SMALL_STATE(76)] = 1412,
  [SMALL_STATE(77)] = 1422,
  [SMALL_STATE(78)] = 1432,
  [SMALL_STATE(79)] = 1442,
  [SMALL_STATE(80)] = 1452,
  [SMALL_STATE(81)] = 1462,
  [SMALL_STATE(82)] = 1472,
  [SMALL_STATE(83)] = 1482,
  [SMALL_STATE(84)] = 1488,
  [SMALL_STATE(85)] = 1494,
  [SMALL_STATE(86)] = 1504,
  [SMALL_STATE(87)] = 1510,
  [SMALL_STATE(88)] = 1516,
  [SMALL_STATE(89)] = 1522,
  [SMALL_STATE(90)] = 1528,
  [SMALL_STATE(91)] = 1535,
  [SMALL_STATE(92)] = 1542,
  [SMALL_STATE(93)] = 1549,
  [SMALL_STATE(94)] = 1556,
  [SMALL_STATE(95)] = 1561,
  [SMALL_STATE(96)] = 1568,
  [SMALL_STATE(97)] = 1575,
  [SMALL_STATE(98)] = 1582,
  [SMALL_STATE(99)] = 1589,
  [SMALL_STATE(100)] = 1596,
  [SMALL_STATE(101)] = 1603,
  [SMALL_STATE(102)] = 1610,
  [SMALL_STATE(103)] = 1617,
  [SMALL_STATE(104)] = 1624,
  [SMALL_STATE(105)] = 1631,
  [SMALL_STATE(106)] = 1635,
  [SMALL_STATE(107)] = 1639,
  [SMALL_STATE(108)] = 1643,
  [SMALL_STATE(109)] = 1647,
  [SMALL_STATE(110)] = 1651,
  [SMALL_STATE(111)] = 1655,
  [SMALL_STATE(112)] = 1659,
  [SMALL_STATE(113)] = 1663,
  [SMALL_STATE(114)] = 1667,
  [SMALL_STATE(115)] = 1671,
  [SMALL_STATE(116)] = 1675,
  [SMALL_STATE(117)] = 1679,
  [SMALL_STATE(118)] = 1683,
  [SMALL_STATE(119)] = 1687,
  [SMALL_STATE(120)] = 1691,
  [SMALL_STATE(121)] = 1695,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Stream_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_Stream_repeat1, 2), SHIFT_REPEAT(118),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Stream_repeat1, 2), SHIFT_REPEAT(24),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_Stream_repeat1, 2), SHIFT_REPEAT(44),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_Stream_repeat1, 2), SHIFT_REPEAT(6),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_Stream_repeat1, 2), SHIFT_REPEAT(7),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_Stream_repeat1, 2), SHIFT_REPEAT(8),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_Stream_repeat1, 2), SHIFT_REPEAT(41),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_Stream_repeat1, 2), SHIFT_REPEAT(42),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_Stream_repeat1, 2), SHIFT_REPEAT(43),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_Stream_repeat1, 2), SHIFT_REPEAT(48),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Stream, 1),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_Output_repeat1, 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Output_repeat1, 2),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_Output_repeat1, 2), SHIFT_REPEAT(6),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_Output_repeat1, 2), SHIFT_REPEAT(7),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_Output_repeat1, 2), SHIFT_REPEAT(8),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_Output_repeat1, 2), SHIFT_REPEAT(41),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_Output_repeat1, 2), SHIFT_REPEAT(42),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_Output_repeat1, 2), SHIFT_REPEAT(43),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_Output_repeat1, 2), SHIFT_REPEAT(66),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Output, 3),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_Output, 3),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Output, 2),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_Output, 2),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Output, 5),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_Output, 5),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Output, 1),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_Output, 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Output, 4),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_Output, 4),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_OutOfBandRecord, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_OutOfBandRecord, 1),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_StatusAsyncOutput, 4),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_StatusAsyncOutput, 4),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_NotifyAsyncOutput, 4),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotifyAsyncOutput, 4),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_LogStreamOutput, 3),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_LogStreamOutput, 3),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_TargetStreamOutput, 3),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_TargetStreamOutput, 3),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ConsoleStreamOutput, 3),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ConsoleStreamOutput, 3),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_StreamRecord, 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_StreamRecord, 1),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ExecAsyncOutput, 4),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ExecAsyncOutput, 4),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_NotifyAsyncOutput, 3),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotifyAsyncOutput, 3),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_AsyncRecord, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AsyncRecord, 1),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_StatusAsyncOutput, 3),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_StatusAsyncOutput, 3),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ExecAsyncOutput, 3),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ExecAsyncOutput, 3),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ResultRecord, 3),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ResultRecord, 3),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ResultRecord, 5),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ResultRecord, 5),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ResultRecord, 4),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ResultRecord, 4),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ResultRecord_repeat1, 2), SHIFT_REPEAT(67),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ResultRecord_repeat1, 2),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_CString_repeat1, 2),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_CString_repeat1, 2), SHIFT_REPEAT(52),
  [240] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_CString_repeat1, 2), SHIFT_REPEAT(52),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_List, 4),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Tuple, 4),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_List, 3),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Tuple, 3),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Const, 1),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AsyncOutput, 2),
  [265] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ResultRecord_repeat1, 2), SHIFT_REPEAT(64),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AsyncOutput, 1),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Value, 1),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_List_repeat1, 2), SHIFT_REPEAT(19),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_List_repeat1, 2),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CString, 2),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CString, 3),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Tuple, 1),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_List, 1),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Result, 3),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ResultRecord_repeat1, 2),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_Value, 1),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_Tuple, 4),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_List, 4),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_Const, 1),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ResultClass, 1),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ResultClass, 1),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_Tuple, 1),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AsyncClass, 1),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_AsyncClass, 1),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_Tuple, 3),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_List, 1),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_List, 3),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_CString, 3),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_Result, 3),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_CString, 2),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Variable, 1),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [365] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_gdbmi(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
