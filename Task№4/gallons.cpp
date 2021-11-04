#include <iostream>

using namespace std;

float a, b;

int main()
{
	setlocale(LC_ALL, "Russian");
	cout <<"Число галлонов: ";
	cin >> a;// ввод числа галлонов
	cout <<"Объём в кубических футах: ";
	b = a / 7.481;// вычисление объёма в кубических футах
	cout << b;// вывод объёма в кубических футах
	return 0;
}
