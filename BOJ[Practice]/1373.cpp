#include <iostream>
#include <string>
#include <list>
#include <cmath>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	string s;
	list<int> result;
	int tmp;
	cin >> s;
	for (int i = s.length() - 1; i >= 0;) {
		tmp = 0;
		for (int j = 0; j < 3; j++) {
			tmp += (s[i] - 48)*pow(2, j);
			i--;
			if (i == -1)
				break;
		}
		result.push_front(tmp);
	}
	list<int>::iterator iter;
	for (iter = result.begin(); iter != result.end(); iter++)
		cout << *iter;
	cout << '\n';
	return 0;
}