#include <iostream>
using namespace std;

long long power2(int k) { return (1 << k); }

long long solve(int n, int r, int c) {
	if (n == 1) {
		return 2*r+c;
	}
	if (r < power2(n - 1)) {
		if (c < power2(n - 1))
			return solve(n - 1, r, c);
		else
			return solve(n - 1, r, c - power2(n - 1)) + power2(2 * n - 2);
	}
	else {
		if (c < power2(n - 1))
			return solve(n - 1, r - power2(n - 1), c) + power2(2 * n - 2) * 2;
		else
			return solve(n - 1, r - power2(n - 1), c - power2(n - 1)) + power2(2 * n - 2) * 3;
	}
}

int main() {
	int n, r, c;
	cin >> n >> r >> c;
	cout << solve(n, r, c) << '\n';

	return 0;
}