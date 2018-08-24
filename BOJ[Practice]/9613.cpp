#include <iostream>
using namespace std;

int gcd(int a, int b) { return a % b == 0 ? b : gcd(b, a%b); }

int main() {
	ios::sync_with_stdio(0);
	int t, n, arr[101];
	long long int result;
	cin >> t;
	while (t--) {
		result = 0;
		cin >> n;
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		for (int i = 0; i < n-1; i++) {
			for (int j = i + 1; j < n; j++)
				result += gcd(arr[i], arr[j]);
		}
		cout << result << '\n';
	}
	return 0;
}