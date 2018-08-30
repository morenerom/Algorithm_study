#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	int cnt = 0;
	getline(cin, s);
	if (s[0] == ' ')
		cnt--;
	istringstream ss(s);
	while (getline(ss, s, ' '))
		cnt++;
	cout << cnt << '\n';
	return 0;
}