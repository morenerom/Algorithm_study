#include <iostream>
using namespace std;

int main() {
	int n;
	int arr[1010];
	int dp[1010];
	int maxp, max = 0;
	cin >> n;

	dp[0] = 0; arr[0] = 0;
	for (int i = 1; i <= n; i++)
		cin >> arr[i];

	for (int i = 1; i <= n; i++) {
		maxp = -1;
		for (int j = 0; j < i; j++) {
			if (arr[i] > arr[j] && maxp < dp[j]) {
				maxp = dp[j];
			}
		}
		dp[i] = maxp + arr[i];
	}
	for (int i = 1; i <= n; i++) {
		if (dp[i] >= max)
			max = dp[i];
	}
	cout << max << endl;
	return 0;
}