#include <stdio.h>

int main()
{
    int a;

    printf("Enter a number between(0-128)=");
    scanf("%d", &a);
    // To print the ASCII character
    if (a >= 0 && a <= 127)
    {
        printf("ASCII character = %c", a);
    }
    else
    {
        printf("\nYou have entered a number whose Ascii value does not exist!!!");
    }

    return 0;
}