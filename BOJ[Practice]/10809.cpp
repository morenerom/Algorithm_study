#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	string s;
	int arr[27];
	cin >> s;
	int len = s.length();
	for (int i = 0; i < 26; i++) {
		arr[i] = s.find(i + 97);
		cout << arr[i] << ' ';
	}
	cout << '\n';
	return 0;
}