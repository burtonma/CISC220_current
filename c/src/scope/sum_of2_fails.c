// sum_of2_fails.c

#include <stdio.h>

static unsigned int sum = 0;

void sum_of(unsigned int n) {
    for (unsigned int i = 0; i <= n; i++) {
        sum += i;
    }
}

void print_sum() {
    printf("sum_of(10) = %u\n", sum);
}

int main(void) {
    sum_of(10);
    print_sum();
    
    // call sum_of a second time
    sum_of(10);
    print_sum();
    
    return 0;
} 
