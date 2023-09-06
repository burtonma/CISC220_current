// duality2.c

#include <stdio.h>
#include <string.h>

int main(void) {
    char str[] = "CISC220";
    char *p;
    p = str;                      // p points at str[0]
    
    // dereference p
    char c = *p;

    printf("%s\n", p);
    printf("%c\n", c);
    
    return 0;
}
