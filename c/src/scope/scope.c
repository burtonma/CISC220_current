// scope.c

#include <stdio.h>

int j;

void f(int i) {
    int j = 1;
    i++;
    printf("\tfunc: i = %d, j = %d\n", i, j);
    for (int i = 0; i < 2; i++) {
        int j = 2;
        printf("\t\tfor loop, i = %d, j = %d\n", i, j);
    }
    printf("\tfunc: i = %d, j = %d\n", i, j);
}

int main(void) {
    printf("main: j = %d\n", j);
    f(100);
    printf("main: j = %d\n", j);

    return 0;
}
