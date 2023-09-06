// duality1.c

#include <stdio.h>

int main(void) {
    double arr[3] = { 1.0, 2.0, 3.0 };
    
    double *p = &arr[0];      // pointer to first element of arr
    
    if (p == arr) {
        puts("p equals arr");
    }
    else {
        puts("p not equals arr");
    }
    
    return 0;
}

