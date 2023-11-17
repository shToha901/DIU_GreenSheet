// CODE FOR: Date Input and Output.

#include <stdio.h>

int main()
{
    int day, month, year;
    char slash;

    // Taking input int and char in it. (Date input)
    scanf("%d %c %d %c %d", &day, &slash, &month, &slash, &year);

    // Output
    printf("%02d/%02d/%02d\n", month, day, year); // %02d means an integer, left padded with zeros up to 2 digits.
    printf("%02d/%02d/%02d\n", year, month, day);
    printf("%02d-%02d-%02d\n", day, month, year);

    return 0;
}