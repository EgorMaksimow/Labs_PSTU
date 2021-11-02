#include <iostream>
#include <clocale>
#include <ctime>

using namespace std;

int random(int a, int b)
{
	srand(time(NULL));
	if (a > 0) return a + rand() % (b - a);
	else return a + rand() % (abs(a) + b);
}

int att;
int num;
int i;

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Угадайте число за 7 попыток:" << endl;
	num = random(1, 100);
	for (i = 1; i <= 7; i++)
	{
		cout << "Попытка №" << i << endl;
		cin >> att;
		if (num != att)
		{
			if (att > num)
				cout << "Число должно быть меньше" << endl;
			else
				cout << "Число должно быть больше" << endl;
		}
		else
		{
			cout << "Вы отгадали!" << endl;
			return 0;
		}
	}
	cout << "Вы не отгадали! Правильное число было " << num;
	return 0;
}