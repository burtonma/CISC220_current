// swap.c

#include <stdio.h>

void swap(double *x, double *y) {
    double tmp = *x;    // tmp gets the value of the object pointed to by x
    *x = *y;            // the object pointed to by x gets the value of the object pointed to by y
    *y = tmp;           // the object pointed to by y gets the value of tmp
    printf("inside swap: x = %f, y = %f\n", *x, *y);
}

int main(void) {
    double a = 1.5;
    double b = 99.9;
    
    printf("before calling swap: a = %f, b = %f\n", a, b);
    swap(&a, &b);      // calls swap with the address of a and the address of b
    printf("after calling swap: a = %f, b = %f\n", a, b);
}
