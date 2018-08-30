#include <iostream>
#include <set>
#include <string>
#include <vector>
using namespace std;

int main() {
	int n, m, cnt = 0;
	set<string> heard, seen;
	vector<string> result;
	string tmp;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		heard.insert(tmp);
	}
	for (int i = 0; i < m; i++) {
		cin >> tmp;
		seen.insert(tmp);
	}
	if (n > m) {
		for (auto iter = seen.begin(); iter != seen.end();iter++) {
			if (heard.find(*iter) != heard.end()) {
				result.push_back(*iter);
				cnt++;
			}
		}
	}
	else {
		for (auto iter = heard.begin(); iter != heard.end(); iter++) {
			if (seen.find(*iter) != seen.end()) {
				result.push_back(*iter);
				cnt++;
			}
		}
	}
	cout << cnt << '\n';
	for (auto iter = result.begin(); iter != result.end(); iter++)
		cout << *iter << '\n';

	return 0;
}