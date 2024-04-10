// CODE FOR:

#include <bits/stdc++.h>
using namespace std;

int main()
{

    while (1)
    {
        int test, Ox1, Oy1;
        cin >> test;
        if (test == 0)
            break;
        cin >> Ox1 >> Oy1;

        while (test--)
        {
            int x2, y2;
            cin >> x2 >> y2;

            if (x2 == Ox1 || y2 == Oy1)
                cout << "divisa" << endl;
            else if (x2 > Ox1 && y2 > Oy1)
                cout << "NE" << endl;
            else if (x2 < Ox1 && y2 > Oy1)
                cout << "NO" << endl;
            else if (x2 < Ox1 && y2 < Oy1)
                cout << "SO" << endl;
            else if (x2 > Ox1 && y2 < Oy1)
                cout << "SE" << endl;
        }
    }
    return 0;
}