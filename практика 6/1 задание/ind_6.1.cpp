﻿#include <iostream>
#include <cmath>
#include "class.h";

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    Cone c1(3, 7);   
    Cone c2(1, 2, 3, 5, 10);   
    cout << "Конус 1: ";
    cout << c1;
    cout << "Площадь поверхности: " << c1.area() << "\n";
    cout << "Объем: " << c1.volume() << "\n";
    cout << "Конус 2: ";
    cout << c2;
    cout << "Площадь поверхности: " << c2.area() << "\n";
    cout << "Объем: " << c2.volume() << "\n";
    return 0;
}
