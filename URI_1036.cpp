#include<bits/stdc++.h>
using namespace std;

int main()
{
	double a, b, c;
	cin >> a >> b >> c;

	double discriminant = (b * b) - 4 * a * c;

	if(discriminant < 0 || a == 0)
		cout << "Impossivel calcular" << endl;
	else
	{
		double R1 = (- b + sqrt(discriminant) ) / (2 *a);
		double R2 = (- b - sqrt(discriminant) ) / (2 *a);

		cout << "R1 = " << fixed << setprecision(5) << R1 << endl;
		cout << "R2 = " << fixed << setprecision(5) << R2 << endl;
	}

	return 0;
}