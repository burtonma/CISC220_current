#include <stdio.h>

struct t {
    char s[4];
    int i;
};

int main(void) {
    struct t tmp;
    
    // empty string and 99?
    tmp.s[0] = '\0';
    tmp.i = 99;

    printf("tmp.s = %s\n", tmp.s);
    printf("tmp.i = %d\n", tmp.i);

    // "abcd" and 99?
    tmp.s[0] = 'a';
    tmp.s[1] = 'b';
    tmp.s[2] = 'c';
    tmp.s[3] = 'd';
    tmp.s[4] = '\0';

    printf("tmp.s = %s\n", tmp.s);
    printf("tmp.i = %d\n", tmp.i);

    return 0;
}
