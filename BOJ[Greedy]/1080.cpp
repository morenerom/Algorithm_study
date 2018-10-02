#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	char a[51][51];
	char b[51][51];
	int n, m, cnt = 0;
	cin >> n>> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++)
			cin >> a[i][j];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++)
			cin >> b[i][j];
	}
	for (int i = 1; i <= n-2; i++) {
		for (int j = 1; j <= m - 2; j++) {
			if (a[i][j] != b[i][j]) {
				++cnt;
				for (int x = i; x < i + 3; x++) {
					for (int y = j; y < j + 3; y++) {
						if (a[x][y] == '1')
							a[x][y] = '0';
						else
							a[x][y] = '1';
					}
				}
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (a[i][j] != b[i][j]) {
				cout << -1 << '\n';
				return 0;
			}
		}
	}
	cout << cnt << '\n';
	return 0;
}