#include <iostream>
#include <cmath>
using namespace std;

class Circle {
private:
	double radius;
public:
	Circle() : radius(0) {}

	double get_radius() { return radius; }
	void set_radius(double iradius) { radius = iradius; }
	double getArea() { return radius * radius * 3.1415926; }
};

int main()
{
	Circle a;
	a.set_radius(3);
	cout << "�뾶��" << a.get_radius() << " ; �����" << a.getArea() << endl;
	return 0;
}