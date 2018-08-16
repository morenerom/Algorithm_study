#include <iostream>

long long int max(long long int a, long long int b) { return a > b ? a : b; }

using namespace std;

int main() {
	int t, n;
	int score[2][100010];
	long long int d[2][100010];
	cin >> t;

	while (t--) {
		cin >> n;
		for (int i = 0; i < 2; i++) {
			for (int j = 1; j <= n; j++)
				cin >> score[i][j];
		}
		d[0][0] = d[1][0] = 0;
		d[0][1] = score[0][1]; d[1][1] = score[1][1];

		for (int i = 2; i <= n; i++) {
			d[0][i] = max(d[1][i - 2], d[1][i - 1]) + score[0][i];
			d[1][i] = max(d[0][i - 2], d[0][i - 1]) + score[1][i];
		}
		cout << max(d[0][n], d[1][n]) << endl;
	}

	return 0;
}