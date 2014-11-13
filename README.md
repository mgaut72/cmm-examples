Compiling a CMM file with GCC
===

```
make name=$SOURCE_FILE
```

This will prepend the appropriate `#include` to the C-- file
so that the externs behave correctly, then pipe that over
to gcc to actually compile it.

The result is an executable `a.out`
