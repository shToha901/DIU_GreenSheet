// CODE FOR: Candies and two sisters

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // taking input
    int test;
    cin >> test;

    // output
    long long int candies, ways;

    while (test--)
    {
        cin >> candies;
        if (candies % 2 == 0)
        {
            ways = (candies / 2) - 1;
        }
        else if (candies % 2 == 1)
        {
            ways = ceil(candies / 2.0) - 1;
        }
        cout << ways << endl;
    }

    return 0;
}