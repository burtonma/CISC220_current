// memcpy.c

#include <stdio.h>
#include <string.h>

void print_iarr(const int *a, size_t n) {
    printf("%d", a[0]);
    for (size_t i = 1; i < n; i++) {
        printf(", %d", a[i]);
    }
}

void print_darr(const double *a, size_t n) {
    printf("%f", a[0]);
    for (size_t i = 1; i < n; i++) {
        printf(", %f", a[i]);
    }
}

int main(void) {
    // copy entire array of int
    size_t count = 4;
    int x[] = {1, 2, 3, 4};
    int y[count];
    memcpy(y, x, count * sizeof(int));
    printf("destination : ");
    print_iarr(y, count);
    printf("\n");
    
    // copy last count elements of array of double
    double dbl[] = {-1.0, -2.0, -3.0, -4.0, -5.0, -6.0, -7.0};
    double cpy[count];
    memcpy(cpy, dbl + 3, count * sizeof(double));
    printf("destination : ");
    print_darr(cpy, count);
    printf("\n");
    
    // copy substring into another string
    char src[] = "this that then";
    char dest[] = "why what when";
    memcpy(dest + 4, src + 5, count);
    printf("destination : %s\n", dest);
    
    return 0;
}

