#ifndef S_INT_REP

#if (-1) & 3 == 3
    #define S_INT_REP 2
#elif (-1) & 3 == 2
    #define S_INT_REP 1
#elif (-1) & 3 == 1
    #define S_INT_REP 0
#else
    #error unknown_sign_encoding
#endif

#endif

// we use the expression (-1) & 3 to
// determine how signed integers are stored

// the representation of 3 is guaranteed to be
// 0...011 for all sizes of integer,
// signed and unsigned

// bitwise AND with 3 will return only
// the least significant 2 bits of the value on the
// other side of the AND operator

// if we are using 2's complement
// the -1 will be 1...1 in memory
// the last two bits will be 11
// having the decimal value 3

// if we are using 1's complement
// the -1 will be 1...10 in memory
// the last two bits will be 10
// having the decimal value 2

// if we are using sign-magnitude
// the -1 will be 10...01 in memory
// the last two bits will be 01
// having the decimal value 1