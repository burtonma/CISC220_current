// lowercase.c

#include <stdio.h>

int main(void) {
    printf("to lowercase:\n");
    char upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("%s\n", upper);
    for (size_t i = 0; i < 26; i++) {
        char c = upper[i];
        char lower = c | 32;          // or c | ' '
        printf("%c", lower);
    }
    
    return 0;
}

