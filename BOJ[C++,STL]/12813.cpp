#include <iostream>
#include <bitset>
using namespace std;

#define SIZE 10

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	bitset<SIZE> a, b;
	cin >> a >> b;
	bitset<SIZE> result;
	result = a & b;
	cout << result << '\n';
	result = a | b;
	cout << result << '\n';
	result = a ^ b;
	cout << result << '\n';
	cout << ~a << '\n';
	cout << ~b << '\n';
	return 0;
}