// arr2.c

#include <stdio.h>

int main(void) {
    int x[3];       // an array of 3 ints
    x[0] = 1;
    x[1] = 2;
    x[2] = 3;

    printf("sizeof(x) : %ld\n", sizeof(x));
    printf("capacity  : %ld\n", sizeof(x) / sizeof(int));

    return 0;
}
