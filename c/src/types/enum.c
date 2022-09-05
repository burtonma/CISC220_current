// enum.c

#include <stdio.h>

int main(void) {
    enum day { sun, mon, tue, wed, thu, fri, sat};
    enum compass { north = 0, east = 90,
                   south = 180, west = 270 };
    enum month { jan = 1, feb, mar, apr,
                 may, jun, jul, aug,
                sep, oct, nov, dec};

    enum day d = 10;
    enum compass dir = south;
    enum month m = oct;

    printf("d   : %d\n", d);
    printf("dir : %d\n", dir);
    printf("m   : %d\n", m);

    return 0;
}
