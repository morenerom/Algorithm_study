#include <iostream>
using namespace std;

int main() {
	int n, max = -1001;
	int arr[100010], dp[100010];
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}

	dp[0] = 0; arr[0] = 0;
	for (int i = 1; i <= n; i++) {
		if (dp[i - 1] + arr[i] >= arr[i])
			dp[i] = dp[i - 1] + arr[i];
		else
			dp[i] = arr[i];
	}

	for (int i = 1; i <= n; i++) {
		if (max < dp[i])
			max = dp[i];
	}
	cout << max << endl;

	return 0;
}