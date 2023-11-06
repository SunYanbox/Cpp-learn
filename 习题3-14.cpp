#include <iostream>
using namespace std;
// ���õ¶���ʽ Legend's polynomial
int LegendPolynomial(int n, int x)
{
	if (n == 0) {
		return 1;
	}
	else if (n == 1) {
		return x;
	}
	else
		return ((2 * n - 1) * x * LegendPolynomial(n - 1, x) - (n - 1) * LegendPolynomial(n - 2, x)) / n;
}

int main()
{
	int end_n = 3, end_x = 10;
	for (int i = 1; i <= end_n; i++) {
		for (int j = 1; j <= end_x; j++) {
			cout << "n=" << i << ",x=" << j << "ʱ�����õ¶���ʽ����Ϊ" << LegendPolynomial(i, j) << endl;
		}
	}
	return 0;
}
