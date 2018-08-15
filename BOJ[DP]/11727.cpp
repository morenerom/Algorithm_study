#include <iostream>
using namespace std;

long long cnt[1002];

void func(int n) {
	if (n == 1) {
		cnt[1] = 1;
		return;
	}
	if (n == 2) {
		cnt[2] = 3;
		return;
	}

	if (n % 2 == 0)
		cnt[n] = (cnt[n - 1] * 2 + 1)%10007;
	else
		cnt[n] = (cnt[n - 1] * 2 - 1)%10007;
}

int main() {
	int n;
	cin >> n;

	for (int i = 1; i <= 1000; i++)
		func(i);

	cout << cnt[n] << endl;
	return 0;
}