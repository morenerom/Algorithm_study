#include <iostream>
using namespace std;

long long cnt[1002];

void f(int t) {
	if (t == 1) {
		cnt[1] = 1;
		return;
	}
	if (t == 2) {
		cnt[2] = 2;
		return;
	}
	cnt[t] = (cnt[t - 1] + cnt[t - 2])%10007;
}

int main() {
	int t;
	cin >> t;

	for (int i = 1; i < 1001; i++)
		f(i);

	cout << cnt[t] << endl;
	return 0;
}