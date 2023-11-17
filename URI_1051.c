// CODE FOR: Calculating Taxes

#include <stdio.h>

int main()
{
    float salary, tax, newSal;
    scanf("%f", &salary);   // Input salary
    newSal = salary - 2000; // Substract 2000 from salary cause under 2000 salary there is no tax

    if (newSal <= 0) // For salary under 2000
    {
        printf("Isento\n");
    }
    else if (newSal > 0 && newSal <= 1000) // For salary between 2001 to 3000
    {
        tax = newSal * 0.08;
        printf("R$ %.2f\n", tax);
    }
    else if (newSal > 1000 && newSal <= 1500) // For salary between 3001 to 4500
    {
        tax = (1000 * 0.08) + ((newSal - 1000) * 0.18);
        printf("R$ %.2f\n", tax);
    }
    else if (newSal > 1500) // For salary over 4500
    {
        tax = (1000 * 0.08) + (1500 * 0.18) + ((newSal - 2500) * 0.28);
        printf("R$ %.2f\n", tax);
    }

    return 0;
}