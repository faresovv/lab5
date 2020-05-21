#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;
double funct(double x)
{
	return (sin(x) * log(1 + x) / pow(x, 2.5));
}
int main()
{
	double eps = 0.0001;
	double b = 9.0;
	double a = 6 - log(exp(6) - eps);
	double c = 10000.0;
	double h = (b - a) / c;
	double p = 0, p_temp = 0;
	cout << a;
	cout << endl;
	do
	{
		p_temp = p;
		c += 100000;
		h = (b - a) / c;
		p = 0;
		for (double i = a; i < b; i += h)
		{
			p += h * (funct(i) + funct(i + h)) / 2;

		}
	} while (abs(p - p_temp) / 3 > eps);

	cout << "metod trap: " << p << " " << abs(p - p_temp) << endl;


	ofstream out;
	out.open("ans2.dat");
	out << p << " " << abs(p - p_temp) << endl;


	return 0;
}