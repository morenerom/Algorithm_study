#include <iostream>
#include <map>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n, v, tmp;
	map<int, int> m;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		m[tmp]++;
	}
	cin >> v;
	cout << m[v] << '\n';
	return 0;
}