#include <iostream>
#include <cmath>
using namespace std;

int swap(int a, int b)
{
	cout << a << ' ' << b << endl;
	int t;
	t = a, a = b, b = t;
	cout << a << ' ' << b << endl;
	return a, b;
}

int jc(int x)
{
	int i = 1, j = 1;
	for (i;i <= x;i++)
	{
		j *= i;
	}
	return j;
}



int main()
{
	int a = 1;
	cout << a;
    return 0;
}