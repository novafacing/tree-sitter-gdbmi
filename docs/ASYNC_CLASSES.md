# Async Classes

The "AsyncClass" terminal is defined in the [grammar](GRAMMAR.md) as being the string
`"stopped"` but also says that there are more and that the feature is "in-progress".
Well, that doc seems to have not been updated since about 2005, because there are
definitely more!

```
breakpoint-created
breakpoint-deleted
breakpoint-modified
cmd-param-changed
library-loaded
library-unloaded
memory-changed
record-started
record-stopped
running (note this can be either sync or async)
thread-created
thread-exited
thread-group-added
thread-group-exited
thread-group-removed
thread-group-started
thread-selected
traceframe-changed
tsv-created
tsv-deleted
tsv-modified
```
