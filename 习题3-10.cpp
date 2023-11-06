#include <iostream>
using namespace std;

void cul(int a, int b)
{
	if (a < b) {
		int c = b;
		b = a;
		a = c;
	} // 令a>=b
	for (int i = b; i >= 1; i--) {
		if ((a % i == 0) && (b % i == 0)) {
			cout << "最大公因式是：" << i << endl;
			break;
		}
	}
	for (int j = a; j <= a * b; j++) {
		if ((!(j % a)) && (!(j % b))) {
			cout << "最小公倍数是：" << j << endl;
			break;
		}
	}
}

int main()
{
	int a, b;
	cout << "请输入两个非负整数";
	cin >> a >> b;
	cul(a, b);
	return 0;
}
