#include <bits/stdc++.h>
using namespace std;

int main()
{
    double x1, x2, y1, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    double distance = sqrt(((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2)));
    cout << fixed << setprecision(4) << distance << endl;

    return 0;
}