// sscanf_floatingpt.c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    // much greater than FLT_MAX but less than DBL_MAX
    char data[] = "1e100";   
    
    // scan data for a float value and a double value
    float f = 0.0f;
    double d = 0.0;
    
    sscanf(data, "%f", &f);
    sscanf(data, "%lf", &d);
    
    // annoying inconsistency between printf-like and scanf-like functions
    // no length modifier when using printf
    printf("f = %f, d = %f\n", f, d);
    
    return 0;
}

