#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void discard() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
    }
}

int main(int argc, char *argv[]) {
    FILE *f = fopen("tell.txt", "r");
    while (1) {
        char buf[3] = { 0 };
        puts("Enter a position to seek to: ");
        fgets(buf, 3, stdin);
        // discard the rest of stdin in case the user typed a long string
        if (!strchr(buf, '\n')) {
            discard();
        }
        int pos = atoi(buf);
        if (pos < 0) {
            break;
        }
        if (pos >= 0 && pos < 24) {
            fseek(f, pos, SEEK_SET);
            char c = fgetc(f);
            printf("found : %c at position : %d\n", c, pos);
        }
    } 
    fclose(f);
    return 0;
}

