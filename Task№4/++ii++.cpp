#include <iostream>

using namespace std;

int i, a;

int main()
{
	i = 1;
	a = ++i * i++;
	cout << a << endl;
	return 0;
}
