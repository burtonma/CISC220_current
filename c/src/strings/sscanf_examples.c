// sscanf_examples.c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char str1[100];
    char str2[100];
    unsigned int x1;
    int y1;
    double z1;
    char c1;

    // scan empty string
    int n = sscanf("", "%s", str1);
    printf("n = %d\n", n);

    // scan blank string
    n = sscanf("    ", "%s", str1);
    printf("n = %d\n", n);
    
    // scan string with unmatched conversion
    n = sscanf("abc", "%d", &y1);
    printf("n = %d\n", n);

    // scan non-blank string
    n = sscanf("abc", "%s", str1);
    printf("n = %d, str1 = %s\n", n, str1);

    // scan non-blank string containing a space
    n = sscanf("abc xyz", "%s", str1);
    printf("n = %d, str1 = %s\n", n, str1);

    // scan non-blank strings and unsigned int
    n = sscanf("abc 1 xyz", "%s%u%s", str1, &x1, str2);
    printf("n = %d, str1 = %s, str2 = %s, x1 = %u\n", n, str1, str2, x1);

    // scan non-blank string for int
    n = sscanf("-99abc", "%d", &y1);
    printf("n = %d, y1 = %d\n", n, y1);
    
    // scan non-blank string for int, double
    n = sscanf("-99 ,   -1.5", "%d , %lf", &y1, &z1);
    printf("n = %d, y1 = %d, z1 = %f\n", n, y1, z1);
    
    // scan non-blank string for single char
    n = sscanf("-99abc", "%c", &c1);
    printf("n = %d, c1 = %c\n", n, c1);

    return 0;
}

