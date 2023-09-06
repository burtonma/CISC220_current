// sscanf_student3.c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char data[] = "Simpson,Bart,123456";
    
    int i1 = -1;   // index of first comma
    int i2 = -1;   // index of second comma
    
    /*int n = */sscanf(data, "%*[^,]%n,%*[^,]%n,%*u", &i1, &i2);
    // NOTE: The only possible value for n is zero because no receiving
    // arguments are assigned to except for those corresponding to %n
    
    // Error checking is left as an exercise for the student
    
    // replace commas and print
    data[i1] = '|';
    data[i2] = '|';
    printf("%s\n", data);
    
    return 0;
}

