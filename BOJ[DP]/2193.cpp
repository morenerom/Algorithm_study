#include <iostream>
using namespace std;

int main() {
	int n;
	long long cnt[2] = { 0, 1 };
	long long tmp[2] = { 0, };
	long long result = 0;
	cin >> n;

	n--;
	while (n--) {
		tmp[0] += cnt[1];
		tmp[0] += cnt[0]; tmp[1] += cnt[0];
		for (int i = 0; i < 2; i++) {
			cnt[i] = tmp[i];
			tmp[i] = 0;
		}
	}
	result = cnt[0] + cnt[1];
	cout << result << endl;
	return 0;
}