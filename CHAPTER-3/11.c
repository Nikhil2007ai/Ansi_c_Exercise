#include <stdio.h>
int main()
{
    float distance, fuel, mileage;

    printf("\n Enter the distance travelled by Car(in km)=");
    scanf("%f", &distance);

    printf("\n Enter the fuel Consumed(in Litres)=");
    scanf("%f", &fuel);

    // To find mileage of the car

    mileage = distance / fuel;

    printf("\n Mileage of the Car=%.2f km/l", mileage);

    return 0;
}