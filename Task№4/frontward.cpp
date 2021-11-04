#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a[5], b = 1;
	cout << "Введите 5 чисел: ";
	while (b<=5)
	{
	    cin >> a[b];
	    b = ++b;
	}// ввод пяти чисел с помощью функции while
	cout << "Числа в обратном порядке: ";
	while (b>1)
	{
	    b = --b;
	    cout << a[b] << " ";
	}// вывод пяти чисел в обратном порядке с помощью функции while
	return 0;
}
