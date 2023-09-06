// pass_by_value.c

#include <stdio.h>

void bad_addone(double x) {
    x = x + 1;
}

void good_addone(double *x) {
    *x = *x + 1;
}

int main(void) {
    double y = 3.0;
    printf("before            : y = %f\n", y);
    
    bad_addone(y);
    printf("after bad_addone  : y = %f\n", y);
    
    good_addone(&y);
    printf("after good_addone : y = %f\n", y);
    
    return 0;
}

