#include <iostream>
#include <cmath>
using namespace std;

class Complex {
public:
	Complex(double ix, double iy) : a(ix), b(iy) {}
	Complex() : Complex(0, 0) {}
	Complex(Complex& complex) : a(complex.a), b(complex.b) {}
	Complex(double x) : a(x), b(0) {}

	void add(Complex& complex) { a += complex.a; b += complex.b; }
	void show() { cout << a << "+" << b << "i" << endl; }

private:
	double a, b;
};

int main()
{
	Complex c1(3, 5);
	Complex c2 = 4.5;
	c1.add(c2);
	c1.show();

	return 0;
}