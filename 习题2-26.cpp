#include <iostream>
using namespace std;
// define ONE to use if-else or define TWO to use switch
#define ONE

#ifdef ONE
int main()
{
	bool running = true;
	while (running)
	{
		char input = ' ';
		cout << "Menu: A(dd) D(elete) S(ort) Q(uit), Select one: ";
		cin >> input;
		if (input == 'Q') break;
		else if (input == 'A') cout << "����������" << endl;
		else if (input == 'D') cout << "������ɾ��" << endl;
		else if (input == 'S') cout << "����������" << endl;
	}
	return 0;
}
#endif // ONE

#ifdef TWO
int main()
{
	bool running = true;
	while (running)
	{
		char input = ' ';
		cout << "Menu: A(dd) D(elete) S(ort) Q(uit), Select one: ";
		cin >> input;
		switch (input)
		{
			case 'Q':
				break;
			case 'A':
				cout << "����������" << endl;
				break;
			case 'D':
				cout << "������ɾ��" << endl;
				break;
			case 'S':
				cout << "����������" << endl;
				break;
			default:
				continue;
		}
	}
	return 0;
}
#endif // ONE