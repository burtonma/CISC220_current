// open.c

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char pathname[] = "a_file.txt";
    FILE *f = fopen(pathname, "r");
    if (!f) {
        perror("fopen() failed");
        exit(EXIT_FAILURE);
    }
    printf("Successfully opened %s for reading\n", pathname);
    
    fclose(f);
    return 0;
}
