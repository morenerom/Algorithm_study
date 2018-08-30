#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
	string s;
	int cnt = 0;
	cin >> s;
	istringstream ss(s);
	while (getline(ss,s,','))
		cnt++;
	cout << cnt << '\n';
	return 0;
}