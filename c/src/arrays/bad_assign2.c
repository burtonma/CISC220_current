// bad_assign2.c

#include <stdio.h>

int main(void) {
    char str1[] = "Hello";
    char str2[] = "Goodbye";
    
    str1 = str2;
    
    return 0;
}

