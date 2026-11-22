#include <stdio.h>
int main()
{
    int n, i;
    float sum = 0;

    // user input
    printf("Enter the value of n=");
    scanf("%d", &n);

    // n should be positive
    if (n <= 0)
    {
        printf("\nInvalid Input");
    }
    // performing the operation
    else
    {

        for (i = 1; i <= n; i++)
        {
            sum += 1 / (float)i;
        }
    }

    // printing the required output
    printf("The Sum of required Harmonic series=%f", sum);

    return 0;
}