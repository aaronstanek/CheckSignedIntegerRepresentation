# CheckSignedIntegerRepresentation

C and C++ permit three binary representations
of negative integers.
- Two's Complement, the de facto standard
- One's Complement
- Sign-Magnitude

Generally, the differences between them are small enough that most code will run correctly on any one of them. However, some programs may require a specific representation of signed integer values, or may allow for different versions of an algorithm depending on the representation.

If this is your situation, just `#include "CheckSignedIntegerRepresentation.h"`
and you're done!

The header file defines a macro constant `S_INT_REP`.
This constant will have the value `2` on systems that
use a 2's complement.
It will be `1` on systems that use a 1's complement.
And it will be `0` on systems that use sign-magnitude.

Pair with `static_assert` for best results!

`test.c` and `test.cpp` print the value of `S_INT_REP`
to the terminal.