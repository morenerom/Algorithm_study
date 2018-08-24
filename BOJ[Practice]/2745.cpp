#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	string s;
	int b, result = 0;
	cin >> s >> b;
	for (int i = s.length() - 1; i >= 0; i--) {
		if (s[i] <= '9')
			result += (s[i]-48) * pow(b, s.length() - i-1);
		else
			result += (s[i]-55) * pow(b, s.length() - i -1);
	}
	cout << result << '\n';
	return 0;
}