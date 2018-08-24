#include <iostream>
#include <string>
#include <list>
using namespace std;

int main() {
	string s;
	list<int> result;
	cin >> s;
	int len = s.length(), tmp;
	if (len == 1 && s[0] == '0') {
		cout << "0\n";
		return 0;
	}
	for (int i = len - 1; i >= 0; i--) {
		tmp = s[i] - 48;
		if (i != 0) {
			for (int j = 0; j<3; j++) {
				result.push_front(tmp % 2);
				tmp /= 2;
			}
		}
		else {
			while (tmp != 0) {
				result.push_front(tmp % 2);
				tmp /= 2;
			}
		}
	}
	list<int>::iterator iter;
	for (iter = result.begin(); iter != result.end(); iter++)
		cout << *iter;
	cout << '\n';
	return 0;
}