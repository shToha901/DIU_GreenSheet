#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long start, end;
    cin >> start >> end;
    long long int sum = ((end * end) - (start * start) + end + start) / 2; // (sum of 0 to end) - (sum of 0 to start)

    cout << sum << endl;

    return 0;
}