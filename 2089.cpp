#include <iostream>
using namespace std;

void func(int n) {
	if (n == 0) return;
	if (n % -2 == 0) {
		func(n / -2);
		cout << '0';
	}
	else {
		func((n - 1) / -2);
		cout << '1';
	}
}

int main() {
	ios::sync_with_stdio(0);
	int n;
	cin >> n;
	if (n == 0) {
		cout << "0\n";
		return 0;
	}
	func(n);
	cout << '\n';
}