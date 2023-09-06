// literal.c

#include <stdio.h>
#include <string.h>

int main(void) {
    char s[] = "abc";
    printf("size   : %lu\n", sizeof(s));
    printf("length : %lu\n", strlen(s));

    char s2[] = "abc\0def";   // weird
    printf("size   : %lu\n", sizeof(s2));
    printf("length : %lu\n", strlen(s2));
    
    return 0;
}
