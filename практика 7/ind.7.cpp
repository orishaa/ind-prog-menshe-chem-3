#include "class.h"
#include <iostream>

using namespace std;

int main() {

	setlocale(LC_ALL, "Russian");
	cout << "Введите значение А для уравнения типа Аx^2 = 0: "; int val;
	cin >> val;

	Class1 A;
	A.show(); A.get_answer();

	Class2 B(val);
	B.show(); B.get_answer();
}