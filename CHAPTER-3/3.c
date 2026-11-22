#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    int pcount = 0, ncount = 0;

        while (n != 0)
    {

        printf("\n Enter the number=");
        scanf("%d", &n);

        if (n > 0)
        {
            pcount++;
        }
        else if (n < 0)
        {
            ncount++;
        }
    }

    printf("\n Count of positive numbers=%d", pcount);
    printf("\n Count of negative number=%d", ncount);

    return 0;
}