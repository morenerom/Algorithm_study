#include <iostream>

using namespace std;

int num[1000001];

void dy(int n)
{
	int min_cnt = 0;
	if (n == 1) {
		num[n] = 0;
		return;
	}
	if (n == 2 || n == 3) {
		num[n] = 1;
		return;
	}
	if (n % 3 == 0)
		min_cnt = num[n / 3] + 1;
	else if (n % 2 == 0)
		min_cnt = num[n / 2] + 1;
	if ((num[n - 1] + 1 < min_cnt) || (n % 3 != 0 && n % 2 != 0))
		min_cnt = num[n - 1] + 1;
	num[n] = min_cnt;
}

int main()
{
	int in;
	for (int i = 1; i < 1000001; i++)
		dy(i);
	cin >> in;
	cout << num[in] << endl;
	return 0;
}