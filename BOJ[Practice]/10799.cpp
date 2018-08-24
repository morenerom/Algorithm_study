#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	string s;
	int cnt = 0, cntL = 0, cntI = 0, result = 0;
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '(')
			cnt++;
	}
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '(')
			cntI++;
		else {
			cntI--;
			if (s[i - 1] == '(') {
				cntL++;
				result += cntI;
			}
		}
	}
	result += (cnt - cntL);
	cout << result << '\n';
	return 0;
}