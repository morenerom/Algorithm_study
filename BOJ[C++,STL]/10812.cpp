#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m, i, j, k;
	cin >> n >> m;
	vector<int> v(n);
	for (int num = 0; num < n; num++)
		v[num] = num + 1;
	while (m--) {
		cin >> i >> j >> k;
		rotate(v.begin()+i-1, v.begin()+k-1, v.begin()+j);
	}
	for (int num = 0; num < n; num++) {
		cout << v[num];
		if (num != n - 1) cout << ' ';
		else cout << '\n';
	}
	return 0;
}