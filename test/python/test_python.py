from tree_sitter import Language, Parser
from pathlib import Path
from ptpython.repl import embed

SOURCE_PATH = str(Path(__file__).parents[2].resolve())
LIB_PATH = str(Path(__file__).with_name("gdbmi.so").resolve())
Path(LIB_PATH).unlink()


lib = Language.build_library(LIB_PATH, [SOURCE_PATH])
lang = Language(LIB_PATH, "gdbmi")
parser = Parser()
parser.set_language(lang)
res1 = parser.parse(
    rb"""0^error,msg="No breakpoint \xff number 1."
(gdb)
"""
)
res2 = parser.parse(
    rb"""0^error,msg="No breakpoint number 1."
(gdb)
"""
)
embed(globals(), locals())
