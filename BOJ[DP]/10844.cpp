#include <iostream>

using namespace std;

int main() {
	int n;
	long long cnt[10] = { 0, 1,1,1,1,1,1,1,1,1 };
	long long tmp[10] = { 0, };
	long long result = 0;
	cin >> n;

	n--;
	while (n--) {
		tmp[1] += cnt[0];
		tmp[0] += cnt[1]; tmp[2] += cnt[1];
		tmp[1] += cnt[2]; tmp[3] += cnt[2];
		tmp[2] += cnt[3]; tmp[4] += cnt[3];
		tmp[3] += cnt[4]; tmp[5] += cnt[4];
		tmp[4] += cnt[5]; tmp[6] += cnt[5];
		tmp[5] += cnt[6]; tmp[7] += cnt[6];
		tmp[6] += cnt[7]; tmp[8] += cnt[7];
		tmp[7] += cnt[8]; tmp[9] += cnt[8];
		tmp[8] += cnt[9];
		for (int i = 0; i < 10; i++) {
			cnt[i] = tmp[i] % 1000000000;
			tmp[i] = 0;
		}
	}
	for (int i = 0; i < 10; i++)
		result += cnt[i];
	result %= 1000000000;
	cout << result << endl;

	return 0;
}