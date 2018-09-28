#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	vector<string> num;
	vector<char> oper;
	string s, tmp1, tmp2;
	int sum = 0;
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '+' || s[i] == '-')
			oper.push_back(s[i]);
	}
	for (int i = 0; i < oper.size(); i++) {
		if (oper[i] == '-') {
			for (int j = i + 1; j < oper.size(); j++)
				oper[j] = '-';
		}
	}
	istringstream ss(s);
	while (getline(ss, tmp1, '+')) {
		istringstream sss(tmp1);
		while (getline(sss, tmp2, '-'))
			num.push_back(tmp2);
	}
	sum += stoi(num.front());
	for (int i = 0; i < oper.size(); i++) {
		if (oper[i] == '+')
			sum += stoi(num[i + 1]);
		else
			sum -= stoi(num[i + 1]);
	}
	cout << sum << '\n';
	return 0;
}