// substr.c

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        fprintf(stderr, "Usage: substr str sub\n");
        exit(1);
    }
    char *str = argv[1];
    char *sub = argv[2];
    char *p = strstr(str, sub);
    if (!p) {
        printf("%s does not occur in %s\n", sub, str);
    }
    else {
        ptrdiff_t index = p - str;
        printf("%s starts at index %td in %s\n", sub, index, str);
    }
    
    return 0;
}
