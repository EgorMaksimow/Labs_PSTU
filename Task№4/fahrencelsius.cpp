#include <iostream>

using namespace std;

float F, C;

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Температура в °F: ";
	cin >> F;//ввод температуры в градусах Фаренгейта
	cout << "Температура в °C: ";
	C = (5 * (F - 32)) / 9;//вычисление температуры в градусах Цельсия по формуле
	cout << C;//вывод температуры в градусах Цельсия
	return 0;
}
