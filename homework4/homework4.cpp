#include <iostream>
#include "Header.h"
#include <fstream>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	double a, b, n, m;
	a = 4.8;
	b = -7.9;
	cout << a << ' ' << b << ' ' << ChetN(a, b) << ' ' << ChetM(a, b, ChetN(a, b));
}

