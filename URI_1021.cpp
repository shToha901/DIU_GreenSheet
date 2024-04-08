// CODE FOR: Banknotes and Coins

#include <bits/stdc++.h>
using namespace std;

int main()
{
    float money;
    cin >> money;

    int note100 = int(money) / 100.0;
    money -= (note100 * 100.0);
    int note50 = int(money) / 50.0;
    money -= (note50 * 50.0);
    int note20 = int(money) / 20.0;
    money -= (note20 * 20.0);
    int note10 = int(money) / 10.0;
    money -= (note10 * 10.0);
    int note5 = int(money) / 5;
    money -= (note5 * 5.0);
    int note2 = int(money) / 2.0;
    money -= (note2 * 2.0);
    int coin1 = int(money) / 1.0;
    money -= (coin1 * 1.0);
    int coin_50 = money / 0.50;
    money -= (coin_50 * 0.50);
    int coin_25 = money / 0.25;
    money -= (coin_25 * 0.25);
    int coin_10 = money / .10;
    money -= (coin_10 * .10);
    int coin_05 = money / 0.05;
    money -= (coin_05 * 0.05);
    float coin_01 = money / 0.01;
    money -= (coin_01 * 0.01);

    cout << "NOTAS:" << endl;
    cout << note100 << " nota(s) de R$ 100.00" << endl;
    cout << note50 << " nota(s) de R$ 50.00" << endl;
    cout << note20 << " nota(s) de R$ 20.00" << endl;
    cout << note10 << " nota(s) de R$ 10.00" << endl;
    cout << note5 << " nota(s) de R$ 5.00" << endl;
    cout << note2 << " nota(s) de R$ 2.00" << endl;
    cout << "MOEDAS:" << endl;
    cout << coin1 << " moeda(s) de R$ 1.00" << endl;
    cout << coin_50 << " moeda(s) de R$ 0.50" << endl;
    cout << coin_25 << " moeda(s) de R$ 0.25" << endl;
    cout << coin_10 << " moeda(s) de R$ 0.10" << endl;
    cout << coin_05 << " moeda(s) de R$ 0.05" << endl;
    cout << fixed << setprecision(0) << coin_01 << " moeda(s) de R$ 0.01" << endl;

    return 0;
}