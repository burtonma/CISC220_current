// str3.c

#include <stdlib.h>     // needed for malloc
#include <stdio.h>
#include <string.h>     // needed for strlen

int main(void) {
    char *str = malloc(1);    // dynamically allocate memory for 1 char
    str[0] = 'C';
    
    printf("string length : %ld\n", strlen(str));
    
    return 0;
}
