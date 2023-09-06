// malloc_arr.c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct point2 {
    double x;
    double y;
};

int main(void) {
    // array of char (a string)
    size_t n = 8;
    char *c = malloc(n);
    strcpy(c, "CISC220");
    printf("c : %s\n", c);
    free(c);
    
    // array of int
    n = 3;
    int *i = malloc(n * sizeof(int));
    i[0] = 1;
    i[1] = 10;
    i[2] = 100;
    for (size_t j = 0; j < n; j++) {
        printf("i[%lu] : %d\n", j, i[j]);
    }
    free(i);
    
    // double
    double *d = malloc(n * sizeof(double));
    d[0] = -1;
    d[1] = -10;
    d[2] = -100;
    for (size_t j = 0; j < n; j++) {
        printf("d[%lu] : %f\n", j, d[j]);
    }
    free(d);
    
    // struct
    struct point2 *s = malloc(n * sizeof(struct point2));
    s[0].x = 0.5;    s[0].y = -9.9;
    s[1].x = 5.0;    s[1].y = -99.9;
    s[2].x = 50.0;   s[2].y = -999.9;
    for (size_t j = 0; j < n; j++) {
        printf("s[%lu] : (%f, %f)\n", j, s[j].x, s[j].y);
    }
    free(s);
    
    return 0;
}

