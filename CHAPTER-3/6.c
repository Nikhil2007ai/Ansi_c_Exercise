#include <stdio.h>
#define PI 3.14
#define GST 0.18

int main()
{
    /*float r, a;

    printf("Enter the value of radius=");
    scanf("%f", &r);

    a = PI * r * r;

    printf("Area of Circle=%.2f", a);

    return 0;*/

    double price;
    double total;
    double gst;

    printf("Enter the price=");
    scanf("%lf", &price);

    gst = price * GST;

    total = price + gst;

    printf("\nTotal price with %.2lf gst amount included is %.3lf.", gst, total);

    return 0;
}