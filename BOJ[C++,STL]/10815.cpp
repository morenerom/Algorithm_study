#include <iostream>
#include <set>
using namespace std;

int main() {
	int n, tmp, m, marr[500001];
	set<int> s;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		s.insert(tmp);
	}
	cin >> m;
	for (int i = 0; i < m; i++) 
		cin >> marr[i];
	for (int i = 0; i < m; i++) {
		if (s.find(marr[i]) == s.end())
			cout << '0';
		else
			cout << '1';
		if (i != m - 1)
			cout << ' ';
		else
			cout << '\n';
	}
	return 0;
}