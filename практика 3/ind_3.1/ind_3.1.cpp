#include <iostream>
#include <cmath>
#include "eq2.h";

using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	double a, b, c, a2, b2, c2;
	cout << "Введите a, b, c первого уравнения через пробел:\n";
	cin >> a >> b >> c;
	eq2 eq2_1 = eq2();
	eq2_1.set(a, b, c);
	eq2_1.find_X();
	cout << "Решение заданного уравнения при x = 6: " << eq2_1.find_Y(6) << endl;
	cout << "Введите a, b, c второго уравнения через пробел:\n";
	cin >> a2 >> b2 >> c2;
	eq2 eq2_2 = eq2(a2, b2, c2);
	eq2 eq2_3 = eq2_1 + eq2_2;
	cout << eq2_3.find_X() << endl;
	cout << "Решение нового уравнения (сложенные коэффиценты двух предыдущих) при х = 5: " << eq2_3.find_Y(5);
}