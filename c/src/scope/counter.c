// counter.c

#include <stdio.h>

unsigned int count(unsigned int increment) {
    static unsigned int value = 0;           // initialized to 0 exactly once, retains value between calls
    if (increment > 0) {
        // potential overflow bug
        value += increment;
    }
    return value;
}

int main(void) {
    // current value of the counter
    unsigned int c = count(0);
    printf("current count = %u\n", c);
    c = count(1);
    printf("increment, current count = %u\n", c);
    c = count(1);
    printf("increment, current count = %u\n", c);
    c = count(1);
    printf("increment, current count = %u\n", c);
    c = count(0);
    printf("current count = %u\n", c);

    return 0;
}

