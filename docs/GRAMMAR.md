# GRAMMAR

The grammar of the GDB/MI
[Output Syntax](https://sourceware.org/gdb/onlinedocs/gdb/GDB_002fMI-Output-Syntax.html)
provided by GNU is as follows:

```
output →
( out-of-band-record )* [ result-record ] "(gdb)" nl

result-record →
[ token ] "^" result-class ( "," result )* nl

out-of-band-record →
async-record | stream-record

async-record →
exec-async-output | status-async-output | notify-async-output

exec-async-output →
[ token ] "*" async-output nl

status-async-output →
[ token ] "+" async-output nl

notify-async-output →
[ token ] "=" async-output nl

async-output →
async-class ( "," result )*

result-class →
"done" | "running" | "connected" | "error" | "exit"

async-class →
"stopped" | others (where others will be added depending on the needs—this is still in development).

result →
variable "=" value

variable →
string

value →
const | tuple | list

const →
c-string

tuple →
"{}" | "{" result ( "," result )* "}"

list →
"[]" | "[" value ( "," value )* "]" | "[" result ( "," result )* "]"

stream-record →
console-stream-output | target-stream-output | log-stream-output

console-stream-output →
"~" c-string nl

target-stream-output →
"@" c-string nl

log-stream-output →
"&" c-string nl

nl →
CR | CR-LF

token →
any sequence of digits.
```