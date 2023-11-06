#include <iostream>
using namespace std;

int getPower(int x, int y)
{
	if (y == 1) {
		return x;
	}
	else
	{
		return x * getPower(x, y - 1);
	} 
}

double getPower(double x, int y)
{
	if (y == 1) {
		return x;
	}
	else
	{
		return x * getPower(x, y - 1);
	}
}

int main()
{
	int x(1), n(1);
	double y(1);
	cout << "输入两个整数:";
	cin >> x >> n;
	cout << "x^n = " << getPower(x, n) << endl;
	cout << "输入一个实数和一个整数:";
	cin >> y >> n;
	cout << "y^n = " << getPower(y, n) << endl;
	return 0;
}