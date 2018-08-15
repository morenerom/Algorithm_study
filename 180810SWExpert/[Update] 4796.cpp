#include <iostream>
using namespace std;

int main() {
	int n, c, tl = 0, tr = 0;
	bool up = false, down = false;
	int h[50002];
	int cnt[50002];
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> c;
		cnt[i + 1] = 0;
		tl = 0, tr = 0;
		for (int j = 1; j <= c; j++)
			cin >> h[j];
		for (int j = 1; j <= c; j++) {
			if (j == c) {
				cnt[i + 1] += tl * tr;
				break;
			}
			if (h[j] < h[j + 1]) {
				if (up == false && down == true) {
					j--;
					up = true;
					down = false;
					cnt[i + 1] += tl * tr;
					tl = 0;
					tr = 0;
					continue;
				}
				up = true;
				down = false;
				tl++;
			}
			else {
				up = false;
				down = true;
				tr++;
			}
		}
	}
	for (int i = 1; i <= n; i++)
		cout << '#' << i << ' ' << cnt[i] << endl;

	return 0;
}