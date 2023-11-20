#include <iostream>
#include <cmath>
using namespace std;

class Tree {
private:
	int ages;
public:
	Tree() : ages(0) {}

	int age() { return ages; }
	void grow(int iages) { ages += iages; }
};

int main()
{
	Tree a;
	a.grow(3);
	cout << "ÄêÁä£º" << a.age() << endl;
	a.grow(4);
	cout << "ÄêÁä£º" << a.age() << endl;
	a.grow(5);
	cout << "ÄêÁä£º" << a.age() << endl;
	return 0;
}