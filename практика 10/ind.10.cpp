#include <iostream>
#include <cmath>
#include "class.h";

using namespace std;

int main() 
{
	setlocale(LC_ALL, "rus");
	cout << "Введите коэффиценты B и C для уравнения 5-ого типа: " << "\n";
	int b_, c_; cin >> b_ >> c_;
	cout << "Введите коэффиценты A, B и C для уравнения 6-ого типа: " << "\n";
	int A_, B_, C_; cin >> A_ >> B_ >> C_;

	Class_5 f1(b_, c_);
	f1.show();
	f1.Get_answer();

	Class_6 f2(A_, B_, C_);
	f2.show();
	f2.Get_answer();

	return 0;
}