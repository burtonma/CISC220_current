// malloc_obj.c

#include <stdio.h>
#include <stdlib.h>

struct point2 {
    double x;
    double y;
};

int main(void) {
    // char
    char *c = malloc(1);
    *c = 'a';
    printf("c points at : %c\n", *c);
    free(c);
    
    // int
    int *i = malloc(sizeof(int));
    *i = 99;
    printf("i points at : %d\n", *i);
    free(i);
    
    // double
    double *d = malloc(sizeof(double));
    *d = -1.5;
    printf("d points at : %f\n", *d);
    free(d);
    
    // struct
    struct point2 *s = malloc(sizeof(struct point2));
    s->x = 0.5;
    s->y = -9.9;
    printf("s points at : (%f, %f)\n", s->x, s->y);
    free(s);
    
    return 0;
}

