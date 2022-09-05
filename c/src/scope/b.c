#include <stdio.h>

extern int a;

int a(void) {
	return 1;
}

int main(void) {
	printf("%d\n", a);
	return 0;
}
