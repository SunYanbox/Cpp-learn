#include <iostream>
using namespace std;

class Rectangle {
private:
	double length;
	double width;
public:
	Rectangle() : length(0), width(0) {}

	double get_width() { return width; }
	double get_length() { return length; }
	void set_width(double iwidth) { width = iwidth; }
	void set_length(double ilength) { length = ilength; }
	double area() { return length * width; }
};

int main()
{
	Rectangle a;
	a.set_length(3);
	a.set_width(4);
	cout << "����" << a.get_length() << " ; ��" << a.get_width() << " ; �����" << a.area() << endl;
	return 0;
}