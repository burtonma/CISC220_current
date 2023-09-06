// is_odd.c

#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>

bool is_odd(int x) {
    return (x & 1) == 1;
}

int main(void) {
    int x = -2;
    if (is_odd(x)) {
        printf("%d is odd\n", x);
    }
    else {
        printf("%d is even\n", x);
    }
    return 0;
}

