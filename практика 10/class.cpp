#include <iostream>
#include <cmath>
#include "class.h";

using namespace std;

Class_5::Class_5(double b1, double c1)
{
	B = b1; C = c1;
}

void Class_5::Get_answer()
{
	cout << "������ ���������: " << (-1) * (B / C) << "\n";
}

void Class_5::show()
{
	cout << "���������: " << B << "*x + " << C << " = 0 \n";
}

Class_6::Class_6(double a1, double b1, double c1)
{
	A = a1; B = b1; C = c1;
}

void Class_6::Get_answer()
{
	double D = B * B - 4 * A * C;
	if (D < 0) cout << "��������� �� ����� �������������� ������.";
	if (D == 0) {
		double x = ((-1) * B - sqrt(D)) / (2 * A);
		cout << "������ ���������: " << x << "\n";
	}
	if (D > 0) {
		double x1 = ((-1) * B - sqrt(D)) / (2 * A);
		double x2 = ((-1) * B + sqrt(D)) / (2 * A);
		cout << "����� ���������: x1 = " << x1 << "; x2 = " << x2 << "\n";
	}
}

void Class_6::show()
{
	cout << "���������: " << A << "*x^2 + " << B << "*x + " << C << " = 0 \n";
}
