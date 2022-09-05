// badswap.c

#include <stdio.h>

void swap(double x, double y) {
    double tmp = x;
    x = y;
    y = tmp;
    printf("inside swap: x = %f, y = %f\n", x, y);
}

int main(void) {
    double a = 1.5;
    double b = 99.9;
    
    printf("before calling swap: a = %f, b = %f\n", a, b);
    swap(a, b);
    printf("after calling swap: a = %f, b = %f\n", a, b);

    return 0;
}

