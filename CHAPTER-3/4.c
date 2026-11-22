#include <stdio.h>

int main()
{
    int x;
    int y;
    short z;

    x = 567865;
    y = 867797;

    z = x + y;

    printf("x=%d\t", x);
    printf("y=%d\t", y);
    printf("z=%hd", z);

    return 0;
}