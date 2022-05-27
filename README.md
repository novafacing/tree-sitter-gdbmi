# GDB/MI Grammar

This repo defines the GDB/MI grammar exactly as given in the
[gnu manual](https://sourceware.org/gdb/onlinedocs/gdb/GDB_002fMI-Output-Syntax.html)
for use in GDB/MI clients. 

The original grammar is copied to [docs/GRAMMAR.md](docs/GRAMMAR.md) and there are some
caveats documented in [docs/ASYNC_CLASSES.md](docs/ASYNC_CLASSES.md).

The grammar is defined with a toplevel `Stream` entrypoint instead of over a single
output as in the original grammar. Of course, a single output is a valid stream.

