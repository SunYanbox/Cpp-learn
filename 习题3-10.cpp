#include <iostream>
using namespace std;

void cul(int a, int b)
{
	if (a < b) {
		int c = b;
		b = a;
		a = c;
	} // ��a>=b
	for (int i = b; i >= 1; i--) {
		if ((a % i == 0) && (b % i == 0)) {
			cout << "�����ʽ�ǣ�" << i << endl;
			break;
		}
	}
	for (int j = a; j <= a * b; j++) {
		if ((!(j % a)) && (!(j % b))) {
			cout << "��С�������ǣ�" << j << endl;
			break;
		}
	}
}

int main()
{
	int a, b;
	cout << "�����������Ǹ�����";
	cin >> a >> b;
	cul(a, b);
	return 0;
}
