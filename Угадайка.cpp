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
	cout << "�������� ����� �� 7 �������:" << endl;
	num = random(1, 100);
	for (i = 1; i <= 7; i++)
	{
		cout << "������� �" << i << endl;
		cin >> att;
		if (num != att)
		{
			if (att > num)
				cout << "����� ������ ���� ������" << endl;
			else
				cout << "����� ������ ���� ������" << endl;
		}
		else
		{
			cout << "�� ��������!" << endl;
			return 0;
		}
	}
	cout << "�� �� ��������! ���������� ����� ���� " << num;
	return 0;
}