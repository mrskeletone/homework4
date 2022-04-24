#include "Header.h"

double ChetN(double a, double b)
{
	double n;
	if (a >= b) {
		return pow(a - b, 1 / 3);
	}
	else {
		return pow(a, 2) + (a - b) / sin(a * b);
	}

}

double ChetM(double a, double b, double n)
{
	if (n < b) {
		return (n + a) / (-b) + sqrt(pow(sin(a), 2) - cos(n));
	}
	else if (n == b) {
		return	pow(b, 2) + tg(n * a);
	}
	else if (n > b) {
		return pow(b, 3) + n * pow(a, 2);
	}
}

double tg(double a)
{
	return sin(a) / cos(a);
}
