// CODE FOR: Bhaskara's Formula

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // input
    float a, b, c;
    cin >> a >> b >> c;

    // output
    float determinent = (b * b) - (4 * a * c);

    if (determinent < 0 || a == 0)
        cout << "Impossivel calcular" << endl;
    else
    {
        cout << "R1 = " << fixed << setprecision(5) << (-b + sqrt(determinent)) / (2 * a) << endl;
        cout << "R2 = " << fixed << setprecision(5) << (-b - sqrt(determinent)) / (2 * a) << endl;
    }

    return 0;
}