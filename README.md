Compiling a CMM file with GCC
===

```
make name=$SOURCE_FILE
```

This will prepend the appropriate `#include` to the C-- file
so that the externs behave correctly, then pipe that over
to gcc to actually compile it.

The result is an executable `a.out`

Contributing
===

Please contribute valid C-- files only.
If you notice something is not to spec, go ahead and create an
issue or comment on the file or something.

If the file you want to contribute falls into the subset of
C-- that is milestone 1, please put it in the `milestone1` directory.
Otherwise, put it in the `milestone2` directory.
