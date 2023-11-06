#include <iostream>
using namespace std;

bool judge(unsigned int x)
{
	bool ans = true;
	for (int i = 2; i < x; i++) {
		if (x % i == 0) {
			ans = false;
			break;
		}
	}
	return ans;
}

int main()
{
	unsigned int input;
	cout << "请输入一个非负整数: ";
	cin >> input;
	if (judge(input))
		cout << input << "是质数" << endl;
	else
		cout << input << "不是质数" << endl;
	return 0;
}
