// CODE FOR: Snack

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // taking input
    int code, quantity;
    cin >> code >> quantity;

    // output
    if (code == 1)
        cout << "Total: R$ " << fixed << setprecision(2) << 4.0 * quantity << endl;
    else if (code == 2)
        cout << "Total: R$ " << fixed << setprecision(2) << 4.50 * quantity << endl;
    else if (code == 3)
        cout << "Total: R$ " << fixed << setprecision(2) << 5.0 * quantity << endl;
    else if (code == 4)
        cout << "Total: R$ " << fixed << setprecision(2) << 2.0 * quantity << endl;
    else if (code == 5)
        cout << "Total: R$ " << fixed << setprecision(2) << 1.50 * quantity << endl;

    return 0;
}