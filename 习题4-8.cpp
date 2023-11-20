#include <iostream>
using namespace std;

class Dog {
private:
	int age;
	double weight;
public:
	Dog() : age(0), weight(0) {}

	double get_weight() { return weight; }
	int get_age() { return age; }
	void set_weight(double iweight) { weight = iweight; }
	void set_age(double iage) { age = iage; }
};

int main()
{
	Dog a;
	a.set_age(3);
	a.set_weight(20);
	cout << a.get_age() << " ; " << a.get_weight() << endl;
	return 0;
}