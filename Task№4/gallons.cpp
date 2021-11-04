#include <iostream>
using namespace std;

float a, b;

int main()
{
	setlocale(LC_ALL, "Russian");
	cout <<"Число галлонов: ";
	cin >> a;
	cout <<"Объём в кубических футах: ";
	b = a / 7.481;
	cout << b;
	return 0;
}
