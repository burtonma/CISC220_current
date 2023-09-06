#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *f = fopen("./tell.txt", "r");
    if (!f) {
        exit(EXIT_FAILURE);
    }
    char c;
    long pos = ftell(f);
    while ((c = fgetc(f)) != EOF) {
        if (c == '\n') {
            printf("\\n : position = %ld\n", pos);
        }
        else {
            printf("%c  : position = %ld\n", c, pos);
        }
        pos = ftell(f);
    }
    fclose(f);
    
    return 0;
}
