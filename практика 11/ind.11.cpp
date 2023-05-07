#include <iostream>
#include <cmath>
#include "class.h";

using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	cout << "Введите коэффициент В для уравнения 7-го типа: "; double B; cin >> B;
	cout << "Введите коэффициенты А и В для уравнения 8-го типа через пробел: "; double val1, val2; cin >> val1 >> val2;

	Class7 first(B);
	Class8 second(val1, val2);

	first.show();
	first.Get_answer();

	second.show();
	second.Get_answer();
	


}