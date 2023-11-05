#include <iostream>
using namespace std;

int culC(double F)
{
	return 5.0 / 9.0 * (F - 32.0);
}

int main()
{
	double F(0);
	cout << "请输入一个华氏温度(°F): ";
	cin >> F;
	cout << F << "°F对应的摄氏度为: " << culC(F) << "°C" << endl;
	return 0;
}
