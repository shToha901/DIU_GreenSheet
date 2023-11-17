// CODE FOR: Consumption.

#include <stdio.h>

int main()
{
    // Input of Distance and petrol
    int km;
    float liter;
    scanf("%d %f", &km, &liter);

    // Calculation and Output
    printf("%.3f km/l\n", km / liter);

    return 0;
}