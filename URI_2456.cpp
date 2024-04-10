// CODE FOR: Cards

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // taking input
    int cards[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> cards[i];
    }

    // output

    // using loops

    // int incr = 0, decr = 0;
    // for (int i = 0; i < 4; i++)
    // {
    //     if (cards[i] < cards[i + 1])
    //         incr++;
    //     else if (cards[i] > cards[i + 1])
    //         decr++;
    // }
    // if (incr == 4)
    //     cout << "C" << endl;
    // else if (decr == 4)
    //     cout << "D" << endl;
    // else
    //     cout << "N" << endl;

    // using nested if-else
    if (cards[0] < cards[1])
    {
        if (cards[1] < cards[2])
        {
            if (cards[2] < cards[3])
            {
                if (cards[3] < cards[4])
                    cout << "C" << endl;
                else
                    cout << "N" << endl;
            }
            else
                cout << "N" << endl;
        }
        else
            cout << "N" << endl;
    }
    else if (cards[0] > cards[1])
    {
        if (cards[1] > cards[2])
        {
            if (cards[2] > cards[3])
            {
                if (cards[3] > cards[4])
                    cout << "D" << endl;
                else
                    cout << "N" << endl;
            }
            else
                cout << "N" << endl;
        }
        else
            cout << "N" << endl;
    }
    else
        cout << "N" << endl;

    return 0;
}