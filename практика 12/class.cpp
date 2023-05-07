#include <iostream>
#include <cmath>
#include "class.h";

using namespace std;

Class_4::Class_4(double _a, double _c)
{
	a = _a;
	c = _c;
}
void Class_4::show()
{
	cout << "Уравнение: " << a << "x^2 + " << c << " = 0" << endl;
}
void Class_4::Get_answer_podbor()
{
	if ((((-1) * c) / a) < 0) cout << "Корней методом подбора нет." << endl;
	else {
		double m = abs(0 - (-20) * (-20) * a - c);
		double x = -20;
		for (double i = -20; i < 20.01; i = i + 0.01) {
			double t = abs(0 - (i) * (i) * a - c);
			if (t < m) {
				m = t;
				x = i;
			}
		}
		cout << "Приблизительно одним из корнем уравнения является: " << x << "\n";
	}
}


Class_5::Class_5(double b1, double c1)
{
	B = b1; C = c1;
}
void Class_5::show()
{
	cout << "Уравнение: " << B << "*x + " << C << " = 0 \n";
}
void Class_5::Get_answer_podbor()
{
	double m = abs(0 - B * (-20) - C);
	double x = -20;
	for (double i = -20; i < 20.01; i = i + 0.01) {
		double t = abs(0 - B * (i) - C);
		if (t < m) {
			m = t;
			x = i;
		}
	}
	cout << "Приблизительно одним из корнем уравнения является: " << x << "\n";

}


Class_6::Class_6(double a1, double b1, double c1)
{
	A = a1; B = b1; C = c1;
}
void Class_6::show()
{
	cout << "Уравнение: " << A << "*x^2 + " << B << "*x + " << C << " = 0 \n";
}
void Class_6::Get_answer_podbor()
{
	double D = B * B - 4 * A * C;
	if (D < 0) {
		cout << "Уравнение не имеет действительных корней" << endl;
	}
	else {
		double m = abs(0 - ((-20) * (-20) * A) - ((-20) * B) - C);
		double x = -20;
			for (double i = -20; i < 20.01; i = i + 0.01) {
				double t = abs(0 - A * (i) * (i) - B * i - C);
				if (t < m) {
					m = t;
					x = i;
				}
			}
		cout << "Приблизительно одним из корнем уравнения является: " << x << "\n";
	}
}


Class_8::Class_8(double a1, double b1) {
	A = a1;
	B = b1;
}
void Class_8::show() {
	cout << "Уравнение: " << A << "x^2 + " << B << "x = 0" << "\n";
}
void Class_8::Get_answer_podbor()
{
	double m = abs(0 - A * (-20) * (-20) - B * (-20));
	double x = -20;
	for (double i = -20; i < 20.01; i = i + 0.01) {
		if (i != 0) {
			double t = abs(0 - A * i * i - B * (i));
			if (t < m) {
				m = t;
				x = i;
			}
		}
	}
	cout << "Приблизительно одним из корнем уравнения является: " << x << "\n";
}
