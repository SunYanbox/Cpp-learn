#include <iostream>
using namespace std;

int main()
{
	char input = ' ';
	while (input != 'Y' && input != 'N')
	{
		cout << "��������������\n������(Y/N): ";
		cin >> input;
		if (input == 'Y') {
			cout << "�����������ꡣ" << endl; 
			break;
		}
		else if (input == 'N') {
			cout << "����û�����ꡣ" << endl;
			break;
		}
	}
	return 0;
}