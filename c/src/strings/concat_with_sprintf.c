// concat_with_sprintf.c

#include <stdio.h>
#include <string.h>

int main(void) {
    // format into Queen's course code
    char dept[] = "CISC";
    unsigned int num = 220;
    char section = 'A';
    char course[9];
    sprintf(course, "%s%u%c", dept, num, section);
    puts(course);
    
    // format into yyyy-mm-dd, ensure leading zeros
    unsigned int year = 2023;
    unsigned int month = 10;
    unsigned int day = 3;
    char date[11];
    sprintf(date, "%04u-%02u-%02u", year, month, day);
    puts(date);
    
    // format a space into a postal code
    char pcode[] = "A1B2C3";
    char formatted[8];
    sprintf(formatted, "%.3s %.3s", pcode, pcode + 3);
    puts(formatted);
    
    return 0;
}

