// member2.c

#include <stdio.h>
#include <stdlib.h>

struct point2 {
    double x;
    double y;
};

int main(void) {
    struct point2 *p = malloc(sizeof(struct point2));
    
    // explicit dereference of pointer
    // parentheses are required because . has higher precedence than *
    (*p).x = 100.0;
    (*p).y = 200.0;
    
    printf("*p = (%f, %f)\n", (*p).x, (*p).y);
    
    // arrow operator
    p->x = -1.5;
    p->y = -2.5;
    
    printf("*p = (%f, %f)\n", p->x, p->y);
    
    return 0;
}

