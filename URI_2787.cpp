// CODE FOR: Chess

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int col, row;
    cin >> row >> col;

    if (row % 2 == 0 && col % 2 == 0)
        cout << "1" << endl;
    else if (row % 2 == 1 && col % 2 == 1)
        cout << "1" << endl;
    else
        cout << "0" << endl;

    return 0;
}