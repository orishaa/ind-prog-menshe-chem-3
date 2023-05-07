#include <iostream>
#include <cmath>
#include "class.h";

Class7::Class7(double c1) {
	C = c1;
}
void Class7::Get_answer() {
	std::cout << std::endl << "Корень уравнения: x = 0" << std::endl << std::endl;
}

void Class7::show() {
	std::cout << "Уравнение: " << C << "x = 0";
}



Class8::Class8(double a1, double b1) {
	A = a1;
	B = b1;
}

void Class8::Get_answer() {
	std::cout << std::endl << "Корни уравнения: " << std::endl << "x1 = 0" << std::endl << "x2 = " << -B / A;
}

 void Class8::show() {
	 std::cout << "Уравнение: " << A << "x^2 + " << B << "x = 0";
}