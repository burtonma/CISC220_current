// sscanf_date.c

#include <stdio.h>

int main(void) {
    char data[] = "2023-01-29";
    char fmt[] = "%u-%u-%u";
    unsigned int year;
    unsigned int month;
    unsigned int day;
    
    int num_conversions = sscanf(data, fmt, &year, &month, &day);
    if (num_conversions == EOF) {
        printf("Reached end of string before attempting a conversion\n");
    }
    else if (num_conversions == 0) {
        printf("No successful conversions\n");
    }
    else if (num_conversions >= 1) {
        printf("year = %u\n", year);
        if (num_conversions >= 2) {
            printf("month = %u\n", month);
        }
        if (num_conversions == 3) {
            printf("day = %u\n", day);
        }
    }
    return 0;
}

