#include <stdio.h>
#include "max2.c"

// defines max3
double max3(double x, double y, double z) {
	return max2(max2(x, y), z);
}

int main(void) {
	double a = 5.2;
	double b = -1.3;
	double c = 4.9;
	printf("max of %f, %f, %f = %f\n", a, b, c, max3(a, b, c));
}

