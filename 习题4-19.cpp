#include <iostream>
#include <cmath>
using namespace std;

class CPU {
public:
	long int ClockFrequency;
	enum WordLength { x64 = 64, x32 = 32 } wordLength;
	enum CoresNumber { x1 = 1, x2 = 2, x4 = 4 } coresNumber;
	bool HyperThreadingSupport;
};

int main()
{
	CPU a;
	cout << sizeof(CPU) << endl;
	cout << "Cores Number: " << a.coresNumber << endl;
	cout << "Hyper-Threading Support: " << a.HyperThreadingSupport << endl;
	a.coresNumber = CPU::x4;
	a.wordLength = CPU::x64;
	cout << "Cores Number: " << a.coresNumber << endl;
	cout << "Word Length: " << a.wordLength << endl;
	return 0;
}