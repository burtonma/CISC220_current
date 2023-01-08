// const.c

#include <math.h>
#include <stdio.h>

int main(void) {
    // computes and prints the coordinates of a point located at 30 degrees
    // on the unit circle
    
    const double PI = 3.14159265358979323846;
    
    double deg = 30.0;
    double x = cos(deg * PI / 180.0);
    double y = sin(deg * PI / 180.0);
    printf("(%f, %f)", x, y);
    
    // UNCOMMENT NEXT LINE TO ATTEMPT TO RE-ASSIGN PI
    // PI = 3.1416;
    
    return 0;
}
