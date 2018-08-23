#include <iostream>
#include <string>
using namespace std;

int main() {
	int n, cnt;
	string s;
	cin >> n;

	while (n--) {
		bool b = true;
		cnt = 0;
		cin >> s;
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == '(')
				cnt++;
			else
				cnt--;
			if (cnt < 0) {
				cout << "NO\n" ;
				b = false;
				break;
			}
		}
		if (cnt == 0 && b)
			cout << "YES\n";
		else if(cnt != 0 && b)
			cout << "NO\n";
	}

	return 0;
}