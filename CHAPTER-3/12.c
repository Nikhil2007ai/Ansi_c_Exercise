#include <stdio.h>
int main()
{
    int amount, a, b, c, d, e, f, g, h, i, j, p;

    // To count Smallest Possible Indian Currency

    // p=Total amount
    // a=number of 2000 rupees note
    // b=number of 500 rupees note
    // c=number of 200 rupees note
    // d=number of 100 rupees note
    // e=number of 50 rupees note
    // f=number of 20 rupees note
    // g=number of 10 rupees note
    // h=number of 5 rupees note
    // i=number of 2 rupees note
    // j=number of 1 rupees note

    printf("\n Enter the Amount=");
    scanf("%d", &amount);

    p = amount;

    if (amount >= 0)
    {

        a = amount / 2000;
        amount = amount % 2000;

        b = amount / 500;
        amount = amount % 500;

        c = amount / 200;
        amount = amount % 200;

        d = amount / 100;
        amount = amount % 100;

        e = amount / 50;
        amount = amount % 50;

        f = amount / 20;
        amount = amount % 20;

        g = amount / 10;
        amount = amount % 10;

        h = amount / 5;
        amount = amount % 5;

        i = amount / 2;
        amount = amount % 2;

        j = amount;

        printf("\n Total Amount=%d", p);
        printf("\n Number of 2000 Rupees note=%d", a);
        printf("\n Number of 500 Rupees note=%d", b);
        printf("\n Number of 200 Rupees note=%d", c);
        printf("\n Number of 100 Rupees note=%d", d);
        printf("\n Number of 50 Rupees note=%d", e);
        printf("\n Number of 20 Rupees note=%d", f);
        printf("\n Number of 10 Rupees note=%d", g);
        printf("\n Number of 5 Rupees note=%d", h);
        printf("\n Number of 2 Rupees note=%d", i);
        printf("\n Number of 1 Rupees note=%d", j);
        return 0;
    }
    else
    {
        printf("\nEntered Amount can't be negative!!");
    }
}