#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	enum Weekday { SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };
	Weekday weekday=Weekday::MONDAY;
	cout << weekday << endl;
	try {
		int a = Weekday::SATURDAY;
		cout << a << endl;
	}
	catch (...) {
		cout << "ERROR" << endl;
	}
	return 0;
}