#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main() {
	int n, tmp;
	cin >> n;
	set<int> s;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		s.insert(tmp);
	}
	for (auto iter = s.begin(); iter != s.end(); iter++)
		cout << *iter << ' ';
	cout << '\n';

	return 0;
}