#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int n;
	vector<string> v;
	string tmp;
	cin >> n;
	while (n--) {
		cin >> tmp;
		v.push_back(tmp);
	}
	sort(v.begin(), v.end(), [](string a, string b) {
		return make_pair(a.size(), a) < make_pair(b.size(), b);
	});
	auto last = unique(v.begin(), v.end());
	v.erase(last, v.end());
	for (string x : v)
		cout << x << '\n';
	return 0;
}