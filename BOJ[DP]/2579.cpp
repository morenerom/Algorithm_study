#include <iostream>
using namespace std;

int max(int a, int b) { return a > b ? a : b; }

int main() {
	int n;
	int arr[305], dp[305];
	cin >> n;

	for (int i = 1; i <= n; i++)
		cin >> arr[i];

	dp[0] = 0; dp[1] = arr[1]; dp[2] = arr[1] + arr[2];
	for (int i = 3; i <= n; i++) 
		dp[i] = max(dp[i - 3] + arr[i - 1] + arr[i], dp[i - 2] + arr[i]);
	cout << dp[n] << endl;
	return 0;
}