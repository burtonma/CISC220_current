// togglecase.c

#include <stdio.h>

char toggle_case(char c) {
    return c ^ 32;
}

int main(void) {
    char upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char lower[] = "abcdefhgijklmnopqrstuvwxyz";
    
    printf("to lowercase:\n%s\n", upper);
    for (size_t i = 0; i < 26; i++) {
        printf("%c", toggle_case(upper[i]));
    }
    printf("\n\n");
    
    printf("to uppercase:\n%s\n", lower);
    for (size_t i = 0; i < 26; i++) {
        printf("%c", toggle_case(lower[i]));
    }
    printf("\n");
    
    return 0;
}
