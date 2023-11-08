#include <iostream>
using namespace std;

int main()
{
	short int score(0);
	cout << "你考试考了多少分？(0~100)";
	cin >> score;
	if (score < 0 || score > 100) exit(-1);
	else if (score < 60) cout << "差" << endl;
	else if (score < 80) cout << "中" << endl;
	else if (score < 90) cout << "良" << endl;
	else cout << "优" << endl;
	return 0;
}