#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	vector<int> a, b;
	int n, m, tmp;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		a.push_back(tmp);
	}
	for (int i = n; i < n + m; i++) {
		cin >> tmp;
		a.push_back(tmp);
	}
	int i = 0, j = n, k = 0;
	while (i < n && j < n + m) {
		if (a[i] <= a[j]) b.push_back(a[i++]);
		else b.push_back(a[j++]);
	}
	while (i < n) b.push_back(a[i++]);
	while (j < n + m) b.push_back(a[j++]);
	for (int x = 0; x < n + m; x++) {
		cout << b[x];
		if (x != n + m) cout << ' ';
		else cout << '\n';
	}
		
	return 0;
}