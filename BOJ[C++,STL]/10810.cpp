#include <iostream>
#include <map>
using namespace std;

int main() {
	int n, m, i, j, k;
	map<int, int> arr;
	cin >> n >> m;
	while (m--) {
		cin >> i >> j >> k;
		for (int pos = i; pos <= j; pos++)
			arr[pos] = k;
	}
	for (i = 1; i <= n; i++) {
		cout << arr[i];
		if (i != n) cout << ' ';
		else cout << '\n';
	}
		
	return 0;
}