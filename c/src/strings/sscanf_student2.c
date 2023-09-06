// sscanf_student2.c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char data[] = "Simpson,Bart,123456";
    
    char last_name[10];     // maximum string length 9
    char first_name[10];    // maximum string length 9
    unsigned int stu_num;
    
    int i1;   // index of first comma
    int i2;   // index of second comma
    
    int n = sscanf(data, "%[^,]%n,%[^,]%n,%u", last_name, &i1, first_name, &i2, &stu_num);
    if (n != 3) {
        fprintf(stderr, "Failed to extract all three fields\n");
        exit(EXIT_FAILURE);
    }
    
    // replace commas and print
    data[i1] = '|';
    data[i2] = '|';
    printf("%s\n", data);
    
    return 0;
}

