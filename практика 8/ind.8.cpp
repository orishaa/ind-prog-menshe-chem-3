﻿#include "class.h"
#include <iostream>

using namespace std;

int main() {

	setlocale(LC_ALL, "Russian");

	cout << "Введите коэффициент уравнения С для уравнения 3-го типа: ";
	int val; cin >> val;
	cout << "Введите коэффициенты уравнения А и C для уравнения 4-го типа: ";
	int _A, _C; cin >> _A >> _C;

	Class_3 first(val);
	first.show();
	first.get_answer();

	Class_4 second(_A, _C);
	second.show();
	second.get_answer();

}