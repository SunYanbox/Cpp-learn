#include <iostream>
using namespace std;

int function(unsigned short int a, unsigned short int b) 
{
	if (b == 0)
		return -1;
	else
		return a / b;
}

int main()
{
	unsigned short int a(0), b(0);
	cout << "请输入两个无符号整数: ";
	cin >> a >> b;
	cout << function(a, b) << endl;
	return 0;
}
