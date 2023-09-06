// sscanf_student5.c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char data[] = "Nahasapeemapetilon,Apu,345678";
    
    unsigned int stu_num;
    
    int i1;   // index of first comma
    int i2;   // index of second comma
    
    sscanf(data, "%*[^,]%n,%*[^,]%n,%u", &i1, &i2, &stu_num);
    
    // length of string 1 = i1
    size_t len1 = i1;
    char *last_name = malloc(len1 + 1);     // +1 for \0
    
    // length of string 2 = i2 - i1 - 1
    size_t len2 = i2 - i1 - 1;
    char *first_name = malloc(len2 + 1);     // +1 for \0
    
    // generate format string "%[len1]c,%[len2]c"
    char fmt[100];
    // %% is the conversion for a literal %
    // %zu is the conversion for size_t
    sprintf(fmt, "%%%zuc,%%%zuc", len1, len2);  
    puts(fmt);
    
    sscanf(data, fmt, last_name, first_name);
    last_name[len1] = '\0';
    first_name[len2] = '\0';
    
    printf("%s %s, student number = %u\n", first_name, last_name, stu_num);
    
    return 0;
}

