// assignment1.c

#include <stdio.h>
#include <stdlib.h>

struct point2 {
    double x;
    double y;
};

int main(void) {
    struct point2 p = { 1.0, 2.0 };
    
    // assignment
    struct point2 q;
    q = p;
    
    // initialization via assignment
    struct point2 r = q;
    
    printf("p = (%f, %f)\n", p.x, p.y);
    printf("q = (%f, %f)\n", q.x, q.y);
    printf("r = (%f, %f)\n", r.x, r.y);
    
    return 0;
}

