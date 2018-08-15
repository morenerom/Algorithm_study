#include <iostream>

using namespace std;

int main() {
	int t, n;
	char l[1002][1002];
	int cnt;
	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> n;
		cnt = 0;
		for (int j = 0; j < n - 1; j++)
			cin >> l[j];
		
		for (int j = 0; j < n - 1; j++) {
			for (int k = 0; k < n - 2 - j; k++) {
				for (int m = k + 1; m < n-1; m++) {
					if (l[j][k] == l[j][m] && l[j][k] == l[j+k+1][m-1-k])
						cnt++;
				}
			}
		}
		cout << '#' << i+1 << ' ' << cnt << endl;
	}
	return 0;
}

/*
int t, n;
int l[1002][1002];
int cnt;
cin >> t;

for (int i = 0; i < t; i++) {
cin >> n;
cnt = 0;
for (int j = 1; j <= n - 1; j++) {
for (int k = j + 1; k <= n; k++)
cin >> l[j][k];
}

for (int j = 1; j <= n - 1; j++) {
for (int k = j + 1; k <= n-1; k++) {
for (int m = k + 1; m <= n; m++) {
if (l[j][k] == l[j][m] && l[j][k] == l[k][m])
cnt++;
}
}
}
cout << '#' << i << ' ' << cnt << endl;
}
*/