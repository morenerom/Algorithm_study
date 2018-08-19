#include <iostream>
using namespace std;

int main() {
	int t, n;
	int dp[102];
	cin >> t;

	dp[1] = 1; dp[2] = 1; dp[3] = 1; dp[4] = 2; dp[5] = 2;
	for (int i = 6; i <= 100; i++)
		dp[i] = dp[i - 1] + dp[i - 5];
	
	while (t--) {
		cin >> n;
		cout << dp[n] << endl;
	}

	return 0;
}