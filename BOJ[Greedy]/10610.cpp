#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <functional>
using namespace std;

int main() {
	string s;
	vector<int> ns;
	bool check = false;
	int sum = 0;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '0')
			check = true;
		else
			sum += s[i] - '0';
		ns.push_back(s[i] - '0');
	}
	sort(ns.begin(), ns.end(), greater<int>());
	if (sum % 3 == 0 && check) {
		for (int i = 0; i < ns.size(); i++)
			cout << ns[i];
	}
	else
		cout << -1 ;
	cout << '\n';
	return 0;
}