// CODE FOR: Overflow

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // input
    int range, num1, num2;
    char operation;
    cin >> range >> num1 >> operation >> num2;

    // output
    int answer;
    if (operation == '+')
        answer = num1 + num2;
    else if (operation == '*')
        answer = num1 * num2;

    if (answer <= range)
        cout << "OK" << endl;
    else
        cout << "OVERFLOW" << endl;

    return 0;
}