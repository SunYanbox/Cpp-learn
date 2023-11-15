// 一个名为Rectangle的矩形类，属性为矩形左下角与右上角两点坐标，能计算矩形面积
#include <iostream>
using namespace std;

class Point {
	double x, y;

public:
	Point(double xx, double yy) { x = xx; y = yy; }
	Point() : Point(0, 0) { }
	Point(const Point& p) { x = p.x; y = p.y; }
	double get_x() { return x; }
	double get_y() { return y; }
	void set_x(double xx) { x = xx; }
	void set_y(double yy) { y = yy; }
};

class Rectangle {
	Point LD, RU;

public:
	Rectangle(Point& a1, Point& a2) {
		if (a2.get_x() >= a1.get_x() && a2.get_y() >= a1.get_y()) {
			LD.set_x(a1.get_x());
			LD.set_y(a1.get_y());
			RU.set_x(a2.get_x());
			RU.set_y(a2.get_y());
		}
		else {
			LD.set_x(a2.get_x());
			LD.set_y(a2.get_y());
			RU.set_x(a1.get_x());
			RU.set_y(a1.get_y());
		}
	}

	double arer() {
		return (RU.get_y() - LD.get_y()) * (RU.get_x() - LD.get_x());
	}
};

int main()
{
	Point a1(1, 2), a2(3, 4);
	Rectangle A(a1, a2);
	cout << "面积为: " << A.arer() << endl;
	Rectangle B(a2, a1);
	cout << "面积为: " << B.arer() << endl;
	return 0;
}