#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	string s = "0";
	string tmp;
	int dp[5001];
	dp[0] = 1;
	cin >> tmp;
	s += tmp;
	int t = s.find("00");
	if (t != -1) {
		cout << "0\n";
		return 0;
	}
	for (int i = 1; i <= s.length() - 1; i++) {
		if (s[i] == '0')
			dp[i] = dp[i - 2];
		else if (s[i - 1] == '0' || s[i - 1] >= '3'|| (s[i] >= '7' && s[i-1] != '1'))
			dp[i] = dp[i - 1];
		else
			dp[i] = (dp[i - 1] + dp[i - 2])% 1000000;
	}
	cout << dp[s.length() - 1] << '\n';
	return 0;
}