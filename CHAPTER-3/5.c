#include <stdio.h>
typedef int data;
typedef float add;
typedef char ch;
typedef double result;
int main()
{

    data x = 34;
    data y = 5, z;
    add a = 78.89;
    ch b = 'A';
    result c = 276.738947;

    z = x + y;

    printf("Sum=%d\n", z);

    printf("Value of a = %.2f\n", a);

    printf("Character = %c\n", b);

    printf("Result = %lf", c);

    return 0;
}