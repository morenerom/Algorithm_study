#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cin >> s;
	int i = stoi(s, nullptr, 0);
	cout << i << '\n';

	return 0;
}