#include <iostream>

using namespace std;

int main() {
	int n;
	long long cnt[10] = { 1, 1,1,1,1,1,1,1,1,1 };
	long long tmp[10] = { 0, };
	long long result = 0;
	cin >> n;

	n--;
	while (n--) {
		for (int i = 0; i < 10; i++) {
			for (int j = i; j < 10; j++) {
				tmp[j] += cnt[i];
			}
		}
		for (int i = 0; i < 10; i++) {
			cnt[i] = tmp[i] % 10007;
			tmp[i] = 0;
		}
	}
	for (int i = 0; i < 10; i++)
		result += cnt[i];
	result %= 10007;
	cout << result << endl;

	return 0;
}