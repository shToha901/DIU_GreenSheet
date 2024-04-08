// CODE FOR: Triangle types

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // taking input
    double num1, num2, num3;
    cin >> num1 >> num2 >> num3;

    // finding the largest number
    double temp;
    if (num1 > num2 && num1 > num3)
        num1 = num1;
    else if (num2 > num1 && num2 > num3)
    {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    else if (num3 > num1 && num3 > num2)
    {
        temp = num1;
        num1 = num3;
        num3 = temp;
    }

    // output
    if (num1 >= (num2 + num3))
        cout << "NAO FORMA TRIANGULO" << endl;
    else
    {
        if ((num1 * num1) == (num2 * num2) + (num3 * num3))
            cout << "TRIANGULO RETANGULO" << endl;
        else if ((num1 * num1) > (num2 * num2) + (num3 * num3))
            cout << "TRIANGULO OBTUSANGULO" << endl;
        else if ((num1 * num1) < (num2 * num2) + (num3 * num3))
            cout << "TRIANGULO ACUTANGULO" << endl;
    }

    if (num1 == num2 && num2 == num3)
        cout << "TRIANGULO EQUILATERO" << endl;
    else if (num1 == num2 || num1 == num3 || num2 == num3)
        cout << "TRIANGULO ISOSCELES" << endl;

    return 0;
}