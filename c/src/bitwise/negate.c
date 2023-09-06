// negate.c

#include <limits.h>
#include <stdio.h>

int main(void) {
    int x = 99;              // does not work if x = INT_MIN
    int neg_x = ~x + 1;
    printf("x = %d, -x = %d\n", x, neg_x);
    
    return 0;
}

