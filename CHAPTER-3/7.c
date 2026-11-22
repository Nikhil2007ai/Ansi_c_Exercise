#include <stdio.h>

int main()
{
    int i, n;

    printf("Enter the number =");
    scanf("%d", &n);

    if (n > 0)
    {

        for (i = 1; i <= 10; i++)
        {

            printf("\n %d x %d = %d", n, i, n * i);
        }
    }
    else
    {
        printf("\nInvalid Number to display Table");
    }

    return 0;
}