#include <iostream>
#include <clocale>

using namespace std;

int num, hundr, tens, units;


int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "������ ����������� �����, ��������� �� ������ ����: ";
	cin >> num;

reset:
	while (num > 999)
	{
		cout << "��� �� ���������� �����, ������� ����" << endl;
		cin >> num;
	}

	while (num < 100)
	{
		cout << "��� �� ���������� �����, ������� ����" << endl;
		cin >> num;
		goto reset;
	}

	hundr = num / 100;
	tens = (num / 10) % 10;
	units = num % 10;

	cout << "��� ��������� ������������������ ����:" << endl;

	if (hundr == 0)
	{
		cout << units << hundr << tens << endl;
		cout << tens << units << hundr << endl;
		cout << tens << hundr << units << endl;
		cout << units << tens << hundr << endl;
	}
	else if (tens == 0)
	{
		cout << hundr << tens << units << endl;
		cout << units << hundr << tens << endl;
		cout << hundr << units << tens << endl;
		cout << units << tens << hundr << endl;
	}
	else if (units == 0)
	{
		cout << hundr << tens << units << endl;
		cout << tens << units << hundr << endl;
		cout << hundr << units << tens << endl;
		cout << tens << hundr << units << endl;
	}
	else
	{
		cout << hundr << tens << units << endl;
		cout << units << hundr << tens << endl;
		cout << tens << units << hundr << endl;
		cout << hundr << units << tens << endl;
		cout << tens << hundr << units << endl;
		cout << units << tens << hundr << endl;
	}

	cout << "���������� �� ���� �����: ";
	if (hundr > tens)
	{
		if (tens > units)
			cout << hundr << tens << units;
		else if (hundr > units)
			cout << hundr << units << tens;
		else
			cout << units << hundr << tens;
	}
	else
	{
		if (units > tens)
			cout << units << tens << hundr;
		else if (hundr > units)
			cout << tens << hundr << units;
		else
			cout << tens << units << hundr;
	}
}