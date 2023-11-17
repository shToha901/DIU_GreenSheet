// CODE FOR: Simple Calculate.

#include <stdio.h>

int main()
{
    // Input of product code, number of units and price per unit
    int code1, code2, units1, units2;
    float perUnits1, perUnits2;
    scanf("%d %d %f %d %d %f", &code1, &units1, &perUnits1, &code2, &units2, &perUnits2);

    // Calculation and Output
    printf("VALOR A PAGAR: R$ %.2f\n", (units1 * perUnits1) + (units2 * perUnits2));

    return 0;
}