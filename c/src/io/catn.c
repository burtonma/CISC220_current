#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int status = EXIT_FAILURE;
    
    // input file
    char in_name[] = "./src/io/catn.c";
    FILE *f_in = fopen(in_name, "r");
    if (!f_in) {
        perror("fopen() failed");
        exit(status);
    }
    
    // output file
    char out_name[] = "./src/io/catn_with_line_numbers.txt";
    FILE *f_out = fopen(out_name, "w");
    if (!f_out) {
        perror("fopen() failed");
        exit(status);
    }
    
    // current line number (starting at 1)
    int line_num = 1;
    
    // input and output line buffers
    char str_in[100];
    char str_out[104];
    while (fgets(str_in, 100, f_in) != NULL) {
        sprintf(str_out, "%03d %s", line_num, str_in);
        fputs(str_out, f_out);
        if (ferror(f_out)) {
            break;
        }
	line_num++;
    }
    if (ferror(f_in) || ferror(f_out)) {
        fprintf(stderr, "I/O error");
    }
    else if (feof(f_in)) {
        status = EXIT_SUCCESS;
    }
    
    fclose(f_in);
    fclose(f_out);
    return status;
}

