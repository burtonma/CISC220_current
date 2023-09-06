// length.c

#include <stdio.h>
#include <string.h>

int main(void) {
    char s[] = "abc";
    size_t len = strlen(s);
    printf("s = %s, length = %lu\n", s, len);

    char s2[] = "abc\0def";   // weird
    len = strlen(s2);
    printf("s2 = %s, length = %lu\n", s2, len);
    
    return 0;
}

