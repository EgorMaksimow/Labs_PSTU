#include <iostream>

using namespace std;

float F, C;

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Температура в °F: ";
	cin >> F;
	cout << "Температура в °C: ";
	C = (5 * (F - 32)) / 9;
	cout << C;
	return 0;
}
