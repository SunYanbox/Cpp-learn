#include <iostream>
using namespace std;

int main()
{
	int item(1), end(100);
	for (item; item <= end; item++) {
		bool charge = true;
		for (int i = 2; i < item; i++) {
			if (item % i == 0)
				charge = false;
		}
		if (charge)
			cout << item << endl;
	}
	return 0;
}