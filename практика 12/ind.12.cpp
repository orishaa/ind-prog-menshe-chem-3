#include <iostream>
#include <cmath>
#include "class.h";

using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");

	cout << "Введите коэффициенты уравнения А и C для уравнения 4-го типа: " << "\n";
	int _A, _C; cin >> _A >> _C;
	cout << "Введите коэффиценты B и C для уравнения 5-ого типа: " << "\n";
	int b_, c_; cin >> b_ >> c_;
	cout << "Введите коэффиценты A, B и C для уравнения 6-ого типа: " << "\n";
	int A_, B_, C_; cin >> A_ >> B_ >> C_;
	cout << "Введите коэффициенты А и В для уравнения 8-го типа через пробел: " << "\n";
	double val1, val2; cin >> val1 >> val2;

	Class_4 f(_A, _C);
	f.show();
	f.Get_answer_podbor();

	Class_5 f2(b_, c_);
	f2.show();
	f2.Get_answer_podbor();

	Class_6 f3(A_, B_, C_);
	f3.show();
	f3.Get_answer_podbor();

	Class_8 f4(val1, val2);
	f4.show();
	f4.Get_answer_podbor();
}