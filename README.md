Compiling a CMM file with GCC
===

```
make name=$SOURCE_FILE
```

This will prepend the appropriate `#include` to the C-- file
so that the externs behave correctly, then pipe that over
to gcc to actually compile it.

The result is an executable `a.out`

Testing your compiler vs gcc
==

```
COMPILER=$YOUR_COMPILER MILESTONE=1 ./test.sh
```

`COMPILER` should be the path to your compiler executable.  Mandatory.

`MILESTONE` should be `1` or `2` or `both` which indicates which files to
test with.  When `MIMLESTONE` is omitted, it defaults to `1`, so this is optional.

`SL` is the number of lines spim outputs as its default header, plus 1.  On lectura spim
tends to only print out 1 extra line, about loading exceptions.h, so the default value is `2`.
On my machine, spim spits out 5 header lines, so I made this an optional input.

Contributing
===

To contribute, please submit a pull request, or request to be added as an admin of the repository.

Please contribute valid C-- files, or other improvements to this test suite.
If you notice something is not to spec, go ahead and create an
issue or comment on the file or something.

If the file you want to contribute falls into the subset of
C-- that is milestone 1, please put it in the `milestone1` directory.
Otherwise, put it in the `milestone2` directory.
