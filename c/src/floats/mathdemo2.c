// mathdemo2.c

#include <math.h>
#include <stdio.h>

int main(void) {
    double x = sqrt(2.0);
    printf("%.12f\n", x);

    x = pow(x, 2);
    printf("%.2f\n", x);

    x = fmax(1.2, 5.79);
    printf("%.1f\n", x);
    
    return 0;
}

