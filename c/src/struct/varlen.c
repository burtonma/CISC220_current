#include <stddef.h>

// does not compile
struct int_array {
    size_t size;
    int arr[size];
};

int main(void) {
    struct int_array a;
}

