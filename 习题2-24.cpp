#include <iostream>
using namespace std;

int main()
{
	char input = ' ';
	while (input != 'Y' && input != 'N')
	{
		cout << "现在正在下雨吗？\n请输入(Y/N): ";
		cin >> input;
		if (input == 'Y') {
			cout << "现在正在下雨。" << endl; 
			break;
		}
		else if (input == 'N') {
			cout << "现在没有下雨。" << endl;
			break;
		}
	}
	return 0;
}