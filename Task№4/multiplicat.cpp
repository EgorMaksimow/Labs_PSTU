#include <iostream>
using namespace std;

int a, b;

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите 2 числа для их умножения: ";
	cin >> a >> b;//ввод двух чисел
	cout << "Результат умножения: " << a * b;// вывод результата
	return 0;
}
