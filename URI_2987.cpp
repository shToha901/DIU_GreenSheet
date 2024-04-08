// CODE FOR: Ballon of honor

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // input
    char input;
    cin >> input;

    // output
    if (input >= 'A' && input <= 'Z')
        cout << input - 64 << endl;

    return 0;
}