#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int num1, num2;
    cin >> num1 >> num2;

    if (num2 % num1 != 0 && num1 % num2 != 0)
        cout << "Nao sao Multiplos" << endl;
    else
        cout << "Sao Multiplos" << endl;

    return 0;
}