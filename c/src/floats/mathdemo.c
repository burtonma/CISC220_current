// mathdemo.c

#include <math.h>
#include <stdio.h>

int main(void) {
    double x = sqrt(2.0);
    printf("%f\n", x);

    x = pow(x, 2);
    printf("%f\n", x);

    x = fmax(1.2, 5.79);
    printf("%f\n", x);

    return 0;
}
