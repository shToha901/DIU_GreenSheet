// CODE FOR: Simple sort

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // taking input
    int num1[3], num2[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> num1[i];
        num2[i] = num1[i];
    }

    // output
    sort(num1, num1 + 3);
    cout << num1[0] << endl<< num1[1] << endl<< num1[2] << endl << endl;
    cout << num2[0] << endl<< num2[1] << endl<< num2[2] << endl ;

    return 0;
}