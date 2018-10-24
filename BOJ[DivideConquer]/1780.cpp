#include <iostream>
#include <vector>
using namespace std;

int a = 0, b = 0, c = 0;
vector<int> v[2188];

void solve(int x, int y, int n) {
	int cnt = 0;
	for (int i = x; i < x + n; i++) {
		for (int j = y; j < y + n; j++) {
			if (v[x][y] != v[i][j]) {
				solve(x, y, n / 3);
				solve(x + (n/3), y, n / 3);
				solve(x + 2*(n/3), y, n / 3);
				solve(x, y + (n/3), n / 3);
				solve(x, y + 2*(n/3), n / 3);
				solve(x + (n/3), y + (n/3), n / 3);
				solve(x + (n/3), y + 2*(n/3), n / 3);
				solve(x + 2*(n/3), y + (n / 3), n / 3);
				solve(x + 2* (n / 3), y + 2* (n / 3), n / 3);
				return;
			}
		}
	}
	if (v[x][y] == -1)
		++a;
	else if (v[x][y] == 0)
		++b;
	else
		++c;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, tmp;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> tmp;
			v[i].push_back(tmp);
		}
	}
	solve(0, 0, n);
	cout << a << '\n' << b << '\n' << c << '\n';
	return 0;
}