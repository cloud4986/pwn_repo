/* Looks like we can use ieee854 e_lgammal_r.c as is for IBM extended format. */
#define _Float128 long double
#define L(x) x ## L
#include <sysdeps/ieee754/ldbl-128/e_lgammal_r.c>
