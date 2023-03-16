#include <iostream>
#include "rational.h";

using namespace std;

rational::rational() {
};
rational::rational(int a1, int b1) {
	if (b1 != 0) {
		a = a1 % b1;
		b = b1;
		if (b % a1 == 0) {
			a = 1;
			b = b / a1;
		}
	}
}
void rational::set(int a1, int b1) {
	*this = rational(a1, b1);
};
void rational::show() {
	if ((b != 0) and (a!=0)) cout << a << "/" << b << endl;
	if (b == 0) cout << "Знаменатель меньше нуля!" << endl;
	if (a == 0) cout << "Дробная часть отсутствует!" << endl;
};