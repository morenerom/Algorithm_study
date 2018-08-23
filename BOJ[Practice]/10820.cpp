#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	string s[101];
	int i = 0;
	while (getline(cin, s[i])) {
		int len = s[i].length();
		int a = 0, b = 0, c = 0, d = 0;
		for (int j = 0; j < len; j++) {
			if (s[i][j] >= 'a' && s[i][j] <= 'z')
				a++;
			else if (s[i][j] >= 'A' && s[i][j] <= 'Z')
				b++;
			else if (s[i][j] >= '0' && s[i][j] <= '9')
				c++;
			else
				d++;
		}
		cout << a << ' ' << b << ' ' << c << ' ' << d << '\n';
		i++;
		//cin.ignore();
	}
	return 0;
}