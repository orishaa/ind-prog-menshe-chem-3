#include <iostream>
#include "rational.h";

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    int n, a, b;
    cout << "Введите количество дробей:\n";
    cin >> n;
    rational* mas = new rational[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Введите числитель " << i + 1 << "-ого числа: ";
        cin >> a;
        cout << "Введите знаменатель " << i + 1 << "-ого числа: ";
        cin >> b;
        mas[i].set(a, b);
    }
    for (int i = 0; i < n; i++)
    {
        mas[i].show();
    }
	rational P= mas[0];
	rational Q;
	if (n < 2)
	{
		Q = rational(1, 2);
	}
	else
	{
		Q = mas[1];
	}
	P.show();
	Q.show();
	(P + Q).show();
	(P - Q).show();
	rational M = P;
	++M;
	M.show();
	cout << (P == Q);
	cout << (P > Q);

	mas = NULL;
	delete[] mas;
}