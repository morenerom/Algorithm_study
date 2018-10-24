#include <iostream>
using namespace std;

char m[65][65];

void solve(int x, int y, int n) {
	if (n == 0) return;
	for (int i = x; i < x + n; i++) {
		for (int j = y; j < y + n; j++) {
			if (m[x][y] != m[i][j]) {
				cout << '(';
				solve(x, y, n / 2);
				solve(x, y + (n / 2), n / 2);
				solve(x + (n / 2), y, n / 2);
				solve(x + (n/2), y + (n/2), n / 2);
				cout << ')';
				return;
			}
		}
	}
	if (m[x][y] == '0') cout << '0';
	else cout << '1';
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> m[i];
	solve(0, 0, n);
	return 0;
}