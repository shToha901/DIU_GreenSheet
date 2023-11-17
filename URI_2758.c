// CODE FOR: Floating Number Input and Output.

#include <stdio.h>

int main()
{
    // Input of real numbers
    float a, b;
    double c, d;
    scanf("%f %f %lf %lf", &a, &b, &c, &d);

    // Output
    printf("A = %f, B = %f\nC = %lf, D = %lf\n", a, b, c, d);
    printf("A = %.1f, B = %.1f\nC = %.1lf, D = %.1lf\n", a, b, c, d); // Floating point impercidion
    printf("A = %.2f, B = %.2f\nC = %.2lf, D = %.2lf\n", a, b, c, d); // %.nf or %.nlf hare n is the number of digits after decimal point
    printf("A = %.3f, B = %.3f\nC = %.3lf, D = %.3lf\n", a, b, c, d);
    printf("A = %1.3E, B = %1.3E\nC = %1.3E, D = %1.3E\n", a, b, c, d); // Scientific Notaation: %1.3E means 1 digit before the and 3 digits after the decimal point
    printf("A = %.0f, B = %.0f\nC = %.0lf, D = %.0lf\n", a, b, c, d);
    return 0;
}