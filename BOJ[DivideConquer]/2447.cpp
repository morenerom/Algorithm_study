#include <iostream>
using namespace std;

char **v;
int n;

void solve(int x, int y, int n,int s) {
	if (n == 1) {
		v[x][y] = '*';
		return;
	}
	int m = n / 3;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (!(i == 1 && j == 1))
				solve(x + m * i, y + m * j, m, 1);
			else {
				for (int a = x+m; a < x+2*m; a++) {
					for (int b = y+m; b < y+2*m; b++)
						v[a][b] = ' ';
				}
			}
		}
	}
}

int main() {
	cin >> n;
	v = new char *[n];
	for (int i = 0; i < n; i++)
		v[i] = new char[n + 1];
	solve(0, 0, n, 1);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			cout << v[i][j];
		cout << '\n';
	}
	return 0;
}