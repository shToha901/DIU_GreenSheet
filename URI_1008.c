// CODE FOR: Salary.

#include <stdio.h>

int main()
{
    // Taking input
    int number, hour;
    float perHour;
    scanf("%d %d %f", &number, &hour, &perHour);

    // Calculation and printing output
    printf("NUMBER = %d\nSALARY = U$ %.2f\n", number, hour * perHour);

    return 0;
}