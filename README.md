# GDB/MI Grammar

This repo defines the GDB/MI grammar exactly as given in the
[gnu manual](https://sourceware.org/gdb/onlinedocs/gdb/GDB_002fMI-Output-Syntax.html)
for use in GDB/MI clients. 

The original grammar is copied to [docs/GRAMMAR.md](docs/GRAMMAR.md) and there are some
caveats documented in [docs/ASYNC_CLASSES.md](docs/ASYNC_CLASSES.md). Other caveats are
documented below:

## Caveats and Errata

1. Toplevel

The grammar is defined with a toplevel `Stream` entrypoint instead of over a single
output as in the original grammar. Of course, a single output is a valid stream.

2. Stray Records

In real GDB/MI output, it is possible to receive an async record (specifically a
`*stopped` or `*running` record) *after* receiving a sync record but *before*
`display_mi_prompt` is called or `mi_on_resume_1` completes. This is inconsistent with
the grammar given in the documentation, but it happens anyway. This parser accounts
for this by allowing zero or more `OutOfBandRecord`s to follow the `ResultRecord` for a
given `Output`. While not technically correct, this is necessary.

3. `(gdb)` after final record

The `(gdb)` prompt will not be printed after a `quit` is issued. This is easy to program
around, and the parser will work without issue. It will have a `MISSING` syntax inserted
into the tree however, so be aware or just detect that `quit` is being run and insert
the token yourself.

## Using The Parser

First, either clone, submodule, or download and vendor this repo into your code
somewhere. Generally, in-tree submodules are preferred in case there is an update
to the parser, but anything goes. Let's assume you submodule this repo to
`/your_repo/third_party/tree-sitter-gdbmi`.

Language bindings for your favorite language are available
[here](https://tree-sitter.github.io/tree-sitter/#language-bindings).

In Python, the parser can be used by installing the `tree-sitter` package:

```sh
$ python3 -m pip install tree_sitter
```

Then you can import `tree-sitter`:

```python
$ cd /your_repo
$ python3
>>> from tree_sitter import Language, Parser
>>> lib = Language.build_library("./gdbmi.so", ["third_party/tree-sitter-gdbmi"])
>>> lang = Language("./gdbmi.so", "gdbmi")
>>> parser = Parser()
>>> parser.set_language(lang)
>>> parser.parse("""&"target extended-remote localhost:4321\n"
~"Remote debugging using localhost:4321\n"
=tsv-created,name="trace_timestamp",initial="0"
^done
(gdb)
""")
```

And that's it! Take a read through the `tree-sitter` docs for your
language to learn how to analyze the produced AST.