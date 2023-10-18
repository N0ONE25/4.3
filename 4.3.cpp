// Lab_04_3.cpp
// < Зозюк Влад >
// Лабораторна робота № 4.3
// Табуляція функції, заданої формулою: функція з параметрами
// Варіант 8
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, F, a, b, c;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;

	cout << fixed;
	cout << "-------------" << endl;
	cout << "|" << setw(5) << "f" << "      |" << endl;
	cout << "-------------" << endl;
	x = xp;
	while (x <= xk)
	{
		if (c < 0 && a != 0)
			F = -a * pow(x, 2);
		else
			if (c > 0 && a == 0)
				F = (a - x) / (c * x);
			else
				F = x / c;
	
		cout << "|" << setw(7) << setprecision(2) << F << "    |" << endl;
		x += dx;
	}
	cout << "-------------" << endl;
	return 0;
}