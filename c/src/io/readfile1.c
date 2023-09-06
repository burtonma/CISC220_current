// readfile1.c

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int status = EXIT_FAILURE;
    char pathname[] = "a_file.txt";
    FILE *f = fopen(pathname, "r");
    if (!f) {
        perror("fopen() failed");
        exit(status);
    }
    
    char c;
    while ((c = fgetc(f)) != EOF) {
        if (c == '\n') {
            printf("<NEWLINE CHAR>");
            putchar(c);
        }
        else {
            putchar(c);
        }
    }
    if (ferror(f)) {
        fprintf(stderr, "I/O error");
    }
    else if (feof(f)) {
        status = EXIT_SUCCESS;
    }
    
    fclose(f);
    return status;
}

