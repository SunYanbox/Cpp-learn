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
	cout << "������һ���Ǹ�����: ";
	cin >> input;
	if (judge(input))
		cout << input << "������" << endl;
	else
		cout << input << "��������" << endl;
	return 0;
}
