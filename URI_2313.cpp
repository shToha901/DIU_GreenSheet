// CODE FOR: Which triangle

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // input
    int sides[3];
    cin >> sides[0] >> sides[1] >> sides[2];

    // output
    sort(sides, sides + 3, greater<int>());
    if (sides[0] >= sides[1] + sides[2])
    {
        cout << "Invalido" << endl;
        return 0;
    }
    else
    {
        if (sides[0] == sides[1] && sides[1] == sides[2])
            cout << "Valido-Equilatero" << endl;
        else if (sides[0] == sides[1] || sides[1] == sides[2])
            cout << "Valido-Isoceles" << endl;
        else
            cout << "Valido-Escaleno" << endl;
    }

    if ((sides[0] * sides[0]) == (sides[1] * sides[1]) + (sides[2]) * sides[2])
        cout << "Retangulo: S" << endl;
    else
        cout << "Retangulo: N" << endl;

    return 0;
}