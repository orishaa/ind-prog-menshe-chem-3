#include "class.h"
#include <iostream>

using namespace std;

void Class1::show()
{

	cout << "Уравнение: 0 = 0" << endl;

}

void Class1::get_answer()
{
	cout << "Ответом является любое значение x" << endl;
}

Class2::Class2(double _a)
{
	a = _a;
}

void Class2::show()
{
	cout << "Уравнение: " << a << "x^2 = 0" << endl;
}

void Class2::get_answer()
{
	cout << "Ответ уравнения " << a << "*x^2 = 0 будет равен нулю." << endl;
}