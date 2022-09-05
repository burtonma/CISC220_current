#include <stdio.h>
#include <stdbool.h>

int main(void) {
    printf("char      : %ld\n", sizeof(char));
    printf("bool      : %ld\n", sizeof(bool));
    printf("short int : %ld\n", sizeof(short int));
    printf("int       : %ld\n", sizeof(int));
    printf("long int  : %ld\n", sizeof(long int));
    printf("float     : %ld\n", sizeof(float));
    printf("double    : %ld\n", sizeof(double));
    printf("char *    : %ld\n", sizeof(char *));
    printf("double *  : %ld\n", sizeof(double *));
    return 0;
}
