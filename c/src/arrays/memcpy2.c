// memcpy2.c

#include <stdio.h>

int main(void) {
    double x[6]  = { 0, 0, 0, 0, 0, 0 };
    double y[10] = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    
    double *src = &y[4];
    double *dest = &x[2];
    memcpy(dest, src, 4 * sizeof(double));
    
    for (int i = 0; i < 6; i++) {
        printf("%f\n", x[i]);
    }
    
    return 0;
}

