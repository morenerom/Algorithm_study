#include <iostream>
#include <cmath>
using namespace std;

int min(int a, int b) { return a > b ? b : a; }

int main() {
	int n;
	cin >> n;
	int dp[100010];
	for (int i = 0; i <= n; i++)
		dp[i] = i;
	
	for (int i = 2; i <= n; i++) {
		for (int j = (int)sqrt(i); j >= 1; j--)
			dp[i] = min(dp[i - j * j] + 1, dp[i]);
	}
	cout << dp[n] << endl;
	return 0;
}