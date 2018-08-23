#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	int arr[28] = { 0, };
	cin >> s;
	int len = s.length();
	for (int i = 0; i < len; i++)
		arr[s[i] - 97]++;
	for (int i = 0; i < 26; i++)
		cout << arr[i] << ' ';
	cout << '\n';
}