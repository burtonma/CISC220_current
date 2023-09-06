// sscanf_student1.c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char data[] = "Simpson,Bart,123456";
    
    char last_name[10];     // maximum string length 9
    char first_name[10];    // maximum string length 9
    unsigned int stu_num;
    
    int n = sscanf(data, "%[^,],%[^,],%u", last_name, first_name, &stu_num);
    if (n != 3) {
        fprintf(stderr, "Failed to extract all three fields\n");
        exit(EXIT_FAILURE);
    }
    printf("%s %s, student number = %u\n", first_name, last_name, stu_num);
    
    return 0;
}

