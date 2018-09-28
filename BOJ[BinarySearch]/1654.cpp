#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int K, N;
	long long t, max = 0;
	long long first = 0;
	long long last = 9223372036854775807;
	long long mid = (first + last) / 2;
	vector<long long> lan;
	cin >> K >> N;
	for (int i = 0; i < K; i++) {
		cin >> t;
		lan.push_back(t);
	}
	long long cnt;
	while (first <= last) {
		cnt = 0;
		for (int i = 0; i < K; i++)
			cnt += lan[i] / mid;

		if (cnt >= N) {
			first = mid + 1;
			if (mid > max)
				max = mid;
		}
		else
			last = mid - 1;
		mid = (first + last) / 2;
	}
	cout << max << '\n';
	return 0;
}