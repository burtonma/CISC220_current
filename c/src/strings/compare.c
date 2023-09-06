// compare.c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        fprintf(stderr, "Usage: compare str1 str2\n");
        exit(1);
    }
    char *str1 = argv[1];
    char *str2 = argv[2];
    int res = strcmp(str1, str2);
    if (res == 0) {
        printf("%s and %s are equal\n", str1, str2);
    }
    else if (res < 0) {
        printf("%s comes before %s\n", str1, str2);
    }
    else {
        printf("%s comes after %s\n", str1, str2);
    }
    
    return 0;
}

