// special_floats.c

#include <math.h>
#include <stdio.h>

int main(void) {
    double d = 1.0 / 0.0;
    if (d == INFINITY) {
        puts("1. d is infinite");
    }
    if (isinf(d)) {
        puts("2. d is infinite");
    }
    
    d = 0.0 / 0.0;
    if (d == NAN) {
        // d == NAN is never true according to IEEE754
        puts("3. d is not a number");
    }
    if (isnan(d)) {
        puts("4. d is not a number");
    }

    return 0;
}
