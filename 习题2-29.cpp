#include <iostream>
using namespace std;
// define ONE to use while or define TWO to use do...while
#define ONE

#ifdef ONE
int main()
{
	short int ans(50);
	cout << "���һ����(1~100):";
	while (true)
	{
		short int guess(0);
		cin >> guess;
		if (guess == ans) {
			cout << "�¶���" << endl;
			break;
		}
		else if (guess > ans) cout << "�´���" << endl;
		else if (guess < ans) cout << "��С��" << endl;
		cout << "������²�:";
	}
	return 0;
}
#endif // ONE

#ifdef TWO
int main()
{
	short int ans(50);
	cout << "���һ����(1~100):";
	do
	{
		short int guess(0);
		cin >> guess;
		if (guess == ans) {
			cout << "�¶���" << endl;
			break;
		}
		else if (guess > ans) cout << "�´���" << endl;
		else if (guess < ans) cout << "��С��" << endl;
	} while (true)
	return 0;
}
#endif // ONE