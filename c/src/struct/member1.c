// member1.c

#include <stdio.h>

struct point2 {
    double x;
    double y;
};

int main(void) {
    struct point2 p = { 0.1, 0.2 };
    
    double xval = p.x;
    double yval = p.y;
    
    printf("p = (%f, %f)\n", xval, yval);
    
    p.x = 100.0;
    p.y = 200.0;
    
    printf("p = (%f, %f)\n", p.x, p.y);
    
    return 0;
}

