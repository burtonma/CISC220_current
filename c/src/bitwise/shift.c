#include <limits.h>
#include <stdio.h>

int main(void) {
    int MAX = UCHAR_MAX;
    unsigned char u = 0;
    for (int j = 0; j <= MAX; j++, u++) {
        void *p = &u;
        signed char *ps = p;
        signed char s = *ps;
        //printf("%d, %d\n", u, s);
        
        for (int i = 1; i < CHAR_BIT; i++) {
            unsigned char u2 = u << i;
            signed char s2 = s << i;
            void *q = &u2;
            signed char *qs = q;
            signed char s3 = *qs;
            if (s2 != s3) {
                printf("%d != %d\n", u2, s2);
            }
        }
        
    } 
    
    char x = CHAR_MAX;
    char y = x << 1;
    printf("%d, %d\n", x, y);

    return 0;
}