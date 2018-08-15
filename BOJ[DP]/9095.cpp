#include<iostream>
using namespace std;

int cnt[12];

void func(int n) {
	if (n == 1) {
		cnt[n] = 1;
		return;
	}
	if (n == 2) {
		cnt[n] = 2;
		return;
	}
	if (n == 3) {
		cnt[n] = 4;
		return;
	}
	cnt[n] = cnt[n - 1] + cnt[n - 2] + cnt[n - 3];
}

int main() {
	int t;
	int n;
	cin >> t;

	for (int i = 1; i <= 11; i++)
		func(i);

	while (t--) {
		cin >> n;

		cout << cnt[n] << endl;
	}
	return 0;
}