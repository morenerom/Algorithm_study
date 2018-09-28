#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N, K, cnt = 0;
	cin >> N >> K;
	vector<int> coins(N);
	for (int i = 0; i < N; i++)
		cin >> coins[i];
	for (int i = N - 1; i >= 0; i--) {
		int mok = K / coins[i];
		if (mok) {
			cnt += mok;
			K -= mok * coins[i];
		}
	}
	cout << cnt << '\n';
	return 0;
}