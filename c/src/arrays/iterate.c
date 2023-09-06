// iterate.c

#include <stdio.h>
#include <string.h>

int main(void) {
    double arr[7] = { 0.0, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0 };
    
    // iterate forwards; uses the too-far pointer arr + 7
    puts("forwards");
    for (double *p = arr; p < arr + 7; p++) {
        printf("%f\n", *p);
    }
    
    // iterate backwards
    puts("backwards");
    for (double *p = arr + 6; p >= arr; p--) {
        printf("%f\n", *p);
    }
    
    
    return 0;
}

