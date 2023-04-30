#include "class.h"
#include <iostream>

using namespace std;

Class_3::Class_3(double _a)
{
	a = _a;
}

void Class_3::get_answer() 
{
	if (a != 0)
	{
		cout << "������� ��������� ���" << endl;
	}
	else
	{
		cout << "�������� �������� ����� x" << endl;
	}
}

void Class_3::show()
{
	cout << "���������: " << a << "x = 0" << endl;
}

Class_4::Class_4(double _b, double _c)
{
	b = _b;
	c = _c;
}

void Class_4::get_answer()
{
	double right, answer;
	right = c * (-1) / b;
	if (right <= 0)
	{
		cout << "������ ���";
	}
	else
	{
		answer = sqrt(right);
		cout << "����� ���������: x1 = " << answer << " x2 = " << answer * (-1) << endl;
	}
}

void Class_4::show()
{
	cout << "���������: " << b << "x^2 + " << c << " = 0" << endl;
}
