#include <iostream>
using namespace std;

int main()
{
	int time;
	cout << "秒数を入力してください。 > " << flush;
	cin >> time;

	printf("%d:%02d", time / 60, time % 60);
}