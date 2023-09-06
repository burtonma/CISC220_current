// readfile2.c

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
    
    char buf[100];
    while (fgets(buf, 100, f) != NULL) {
        // NOTE: buf will include the new line character \n at the end of each line.
        // In many applications, you will want to remove the \n character before
        // processing the string.
        //
        // Here, the newline character is useful because after printing the string
        // subsequent output will start on the next line.
        printf("%s", buf);
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
