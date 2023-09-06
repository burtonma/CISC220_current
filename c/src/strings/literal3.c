// literal3.c

#include <stdio.h>

int main(void) {
    char str[] = "hello";
    // ok, modifies the array str
    str[0] = 'H';
    
    printf("%s\n", str);
    
    return 0;
}

