#include<bits/stdc++.h>
using namespace std;

int main()
{
	float prev_sal;
	cin >> prev_sal;
	float increment, new_sal, incr_rate;

	if(prev_sal >= 0 && prev_sal <= 400)
	{
		incr_rate = 15;
		increment = prev_sal * (incr_rate / 100);
		new_sal = prev_sal + increment;
	}
	else if(prev_sal > 400 & prev_sal <= 800)
	{
		incr_rate = 12;
		increment = prev_sal * (incr_rate / 100);
		new_sal = prev_sal + increment;
	}
	else if(prev_sal > 800 && prev_sal <= 1200)
	{
		incr_rate = 10;
		increment = prev_sal * (incr_rate / 100);
		new_sal = prev_sal + increment;
	}
	else if(prev_sal > 1200 && prev_sal <= 2000)
	{
		incr_rate = 7;
		increment = prev_sal * (incr_rate / 100);
		new_sal = prev_sal + increment;
	}
	else if(prev_sal > 2000)
	{
		incr_rate = 4;
		increment = prev_sal * (incr_rate / 100);
		new_sal = prev_sal + increment;
	}

	cout << "Novo salario: " << fixed << setprecision(2) << new_sal << endl;
	cout << "Reajuste ganho: " << fixed << setprecision(2) << increment << endl;
	cout << "Em percentual: " << setprecision(0) << incr_rate << " %" << endl;

	return 0;
}