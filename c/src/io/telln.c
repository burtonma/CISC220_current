// telln.c

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *f = fopen("tell.txt", "r");
    if (!f) {
        exit(EXIT_FAILURE);
    }
    
    const size_t MAX = 2;
    size_t count = 0;
    
    char c;
    long pos = ftell(f);
    while ((c = fgetc(f)) != EOF && count < MAX) {
        if (c == '\n') {
            printf("\\n : position = %ld\n", pos);
        }
        else {
            printf("%c  : position = %ld\n", c, pos);
        }
        if (pos == 23) {
            printf("rewinding...\n");
            rewind(f);
            count++;
        }
        pos = ftell(f);
    }
    fclose(f);
    
    return 0;
}
