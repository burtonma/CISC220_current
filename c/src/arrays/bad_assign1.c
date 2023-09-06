// bad_assign1.c

#include <stdio.h>

int main(void) {
    int x[] = {1, 2, 3};
    int y[] = {10, 11, 12};
    
    x = y;
    
    return 0;
}
