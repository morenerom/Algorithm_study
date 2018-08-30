#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
	string s, re= "";
	int sum = 0;
	while (getline(cin, s, '\n'))
		re += s;
	istringstream ss(re);
	while (getline(ss, s, ','))
		sum += stoi(s);
	cout << sum << '\n';
	return 0;
}