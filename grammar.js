module.exports = grammar({
    name: "gdbmi",
    rules: {
        Stream: ($) => prec.left(1, repeat1($.Output)),
        Output: ($) =>
            seq(
                repeat($.OutOfBandRecord),
                choice(
                    seq($.ResultRecord, repeat($.OutOfBandRecord)),
                    optional($.ResultRecord),
                ),
                optional("(gdb)"),
                "\n",
            ),
        ResultRecord: ($) =>
            seq(
                optional($.Token),
                "^",
                $.ResultClass,
                repeat(seq(",", $.Result)),
                "\n",
            ),
        OutOfBandRecord: ($) => choice($.AsyncRecord, $.StreamRecord),
        AsyncRecord: ($) =>
            choice($.ExecAsyncOutput, $.StatusAsyncOutput, $.NotifyAsyncOutput),
        ExecAsyncOutput: ($) => seq(optional($.Token), "*", $.AsyncOutput, "\n"),
        StatusAsyncOutput: ($) => seq(optional($.Token), "+", $.AsyncOutput, "\n"),
        NotifyAsyncOutput: ($) => seq(optional($.Token), "=", $.AsyncOutput, "\n"),
        AsyncOutput: ($) => seq($.AsyncClass, repeat(seq(",", $.Result))),
        ResultClass: ($) => choice("done", "running", "connected", "error", "exit"),
        AsyncClass: ($) =>
            choice(
                "stopped",
                "breakpoint-created",
                "breakpoint-deleted",
                "breakpoint-modified",
                "cmd-param-changed",
                "library-loaded",
                "library-unloaded",
                "memory-changed",
                "record-started",
                "record-stopped",
                "running",
                "thread-created",
                "thread-exited",
                "thread-group-added",
                "thread-group-exited",
                "thread-group-removed",
                "thread-group-started",
                "thread-selected",
                "traceframe-changed",
                "tsv-created",
                "tsv-deleted",
                "tsv-modified",
            ),
        Result: ($) => seq($.Variable, "=", $.Value),
        Value: ($) => choice($.Const, $.Tuple, $.List),
        Tuple: ($) => choice("{}", seq("{", $.Result, repeat(seq(",", $.Result)), "}")),
        List: ($) =>
            choice(
                "[]",
                seq("[", $.Value, repeat(seq(",", $.Value)), "]"),
                seq("[", $.Result, repeat(seq(",", $.Result)), "]"),
            ),
        Variable: ($) => $.Identifier,
        Const: ($) => $.CString,
        StreamRecord: ($) =>
            choice($.ConsoleStreamOutput, $.TargetStreamOutput, $.LogStreamOutput),
        ConsoleStreamOutput: ($) => seq("~", $.CString, "\n"),
        TargetStreamOutput: ($) => seq("@", $.CString, "\n"),
        LogStreamOutput: ($) => seq("&", $.CString, "\n"),
        Token: ($) => /\d+/,
        /* Note: Not called "String" to deconflict with JS class */
        Identifier: ($) => /[a-zA-Z0-9_-]+/,
        CString: ($) =>
            seq(
                choice('L"', 'u"', 'U"', 'u8"', '"'),
                repeat(
                    choice(
                        token.immediate(prec(1, /[^\\"\n]+/)),
                        $.CStringEscapeSequence,
                    ),
                ),
                '"',
            ),
        CStringEscapeSequence: ($) =>
            token(
                prec(
                    1,
                    seq(
                        "\\",
                        choice(
                            /[^xuU]/,
                            /\d{2,3}/,
                            /x[0-9a-fA-F]{2,}/,
                            /u[0-9a-fA-F]{4}/,
                            /U[0-9a-fA-F]{8}/,
                        ),
                    ),
                ),
            ),
    },
});
