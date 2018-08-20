#include<iostream>
using namespace std;

int Max(int a, int b) { return a > b ? a : b; }

int main() {
	int n;
	cin >> n;
	int dp[1005] = { 0, }, price[1005];
	dp[0] = 0; price[0] = 0;
	for (int i = 1; i <= n; i++)
		cin >> price[i];

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			dp[i] = Max(dp[i], dp[i - j] + price[j]);
		}
	}
	cout << dp[n] << endl;

	return 0;
}