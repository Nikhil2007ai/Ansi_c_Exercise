#include <stdio.h>

int main()
{
    float p1, p2;

    printf("Enter the price of one kg rice=");
    scanf("%f", &p1);

    printf("\nEnter the price of one kg Sugar=");
    scanf("%f", &p2);

    printf("\n*** LIST OF ITEMS *** ");
    printf("\nItem \t price");
    printf("\nRice \t Rs %.2f", p1);
    printf("\nSugar \t Rs %.2f", p1);

    return 0;
}