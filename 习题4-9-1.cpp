// һ����ΪRectangle�ľ����࣬����Ϊ�������½������Ͻ��������꣬�ܼ���������
#include <iostream>
using namespace std;

class Rectangle {
	double a_1 = 0, a_2 = 0, b_1 = 0, b_2 = 0;

public:
	Rectangle(double x_1, double x_2, double y_1, double y_2) {
		if (y_1 >= x_1 && b_2 >= y_2)
			a_1 = x_1, a_2 = x_2, b_1 = y_1, b_2 = y_2;
		else
			a_1 = x_2, a_2 = x_1, b_1 = y_2, b_2 = y_1;
	}

	double arer() {
		return (b_1 - a_1) * (b_2 - a_2);
	}
};

int main()
{
	Rectangle A(1, 2, 3, 4);
	cout << "���Ϊ: " << A.arer() << endl;
	Rectangle B(1, 2, -3, -4);
	cout << "���Ϊ: " << B.arer() << endl;
	return 0;
}