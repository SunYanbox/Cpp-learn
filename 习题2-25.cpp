#include <iostream>
using namespace std;

int main()
{
	short int score(0);
	cout << "�㿼�Կ��˶��ٷ֣�(0~100)";
	cin >> score;
	if (score < 0 || score > 100) exit(-1);
	else if (score < 60) cout << "��" << endl;
	else if (score < 80) cout << "��" << endl;
	else if (score < 90) cout << "��" << endl;
	else cout << "��" << endl;
	return 0;
}