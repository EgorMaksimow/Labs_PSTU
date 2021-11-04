#include <iostream>
using namespace std;

int i, b;

int main()
{
	i = 1;
	b = ++i * i++;
	cout << b << endl;
	return 0;
}
