#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	string s;
	getline(cin, s);
	int len = s.length();
	for (int i = 0; i < len; i++) {
		if ((s[i] >= 65 && s[i] <= 77) || (s[i] >= 97 && s[i] <= 109))
			s[i] += 13;
		else if ((s[i] >= 78 && s[i] <= 90) || (s[i] >= 110 && s[i] <= 122))
			s[i] -= 13;
	}
	cout << s << '\n';

	return 0;
}