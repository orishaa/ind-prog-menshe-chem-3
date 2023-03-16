#include <iostream>
#include <cmath>
#include "eq2.h";

using namespace std;

eq2::eq2() {
	a = 0; b = 0; c = 0; D = 0;
}
eq2::eq2(double a1, double b1, double c1) {
	a = a1; b = b1; c = c1;
	D = b * b - 4 * a * c;
}
void eq2::set(double a1, double b1, double c1) {
	a = a1; b = b1; c = c1;
	D = b * b - 4 * a * c;
}
double eq2::find_X() {
	if (D < 0) {
		cout << "Корней нет.";
		return 0;
	}
	if (D == 0) {
		double x = (-b) / (2 * a);
		cout << "Корень единственный: " << x << endl;
		return 0;
	}
	if (D > 0) {
		double x1 = (-b + sqrt(D)) / (2 * a);
		double x2 = (-b - sqrt(D)) / (2 * a);
		cout << "Два корня:\n Первый корень: " << x1 << "\n Второй корень: " << x2 << endl;
	}
}
double eq2::find_Y(double x1)
{
	return (a * x1 * x1 + b * x1 + c);
}

eq2 operator + (eq2& x1, eq2& x2) {
return eq2(x1.a + x2.a, x1.b + x2.b, x1.c + x2.c);
}
