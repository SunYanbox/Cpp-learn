#include <iostream>
using namespace std;

int culC(double F)
{
	return 5.0 / 9.0 * (F - 32.0);
}

int main()
{
	double F(0);
	cout << "������һ�������¶�(��F): ";
	cin >> F;
	cout << F << "��F��Ӧ�����϶�Ϊ: " << culC(F) << "��C" << endl;
	return 0;
}
