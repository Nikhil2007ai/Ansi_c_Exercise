#include <stdio.h>
int main()
{

    // To convert the total days into years,weeks and days

    int total_days, years, weeks, days, original_days;

    printf("Enter the total days= ");
    scanf("%d", &total_days);

    if (total_days >= 0)
    {

        original_days = total_days;

        years = total_days / 365;
        total_days = total_days % 365;

        weeks = total_days / 7;
        total_days = total_days % 7;

        days = total_days;

        printf("\nTotal Days=%d", original_days);
        printf("\n Years=%d", years);
        printf("\n Weeks=%d", weeks);
        printf("\n Days=%d", days);
    }
    else
    {
        printf("\nNumber of Days can't be Negative");
    }

    return 0;
}