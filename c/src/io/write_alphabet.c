// write_alphabet.c

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int status = EXIT_FAILURE;
    char pathname[] = "alphabet.txt";
    FILE *f = fopen(pathname, "w");
    if (!f) {
        perror("fopen() failed");
        exit(status);
    }
    status = EXIT_SUCCESS;
    for (char c = 'a'; c <= 'z'; c++) {
        fputc(c, f);
        if (ferror(f)) {
            status = EXIT_FAILURE;
            fprintf(stderr, "I/O error");
            break;
        }
    }
    if (!ferror(f)) {
        // make sure line ends with a newline character
        fputc('\n', f);
    }
    
    fclose(f);
    return status;
}
