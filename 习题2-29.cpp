#include <iostream>
using namespace std;
// define ONE to use while or define TWO to use do...while
#define ONE

#ifdef ONE
int main()
{
	short int ans(50);
	cout << "请猜一个数(1~100):";
	while (true)
	{
		short int guess(0);
		cin >> guess;
		if (guess == ans) {
			cout << "猜对了" << endl;
			break;
		}
		else if (guess > ans) cout << "猜大了" << endl;
		else if (guess < ans) cout << "猜小了" << endl;
		cout << "请继续猜测:";
	}
	return 0;
}
#endif // ONE

#ifdef TWO
int main()
{
	short int ans(50);
	cout << "请猜一个数(1~100):";
	do
	{
		short int guess(0);
		cin >> guess;
		if (guess == ans) {
			cout << "猜对了" << endl;
			break;
		}
		else if (guess > ans) cout << "猜大了" << endl;
		else if (guess < ans) cout << "猜小了" << endl;
	} while (true)
	return 0;
}
#endif // ONE