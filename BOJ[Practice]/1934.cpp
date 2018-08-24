#include <iostream>
using namespace std;

int gcd(int a, int b) { return a % b == 0 ? b : gcd(b, a%b); }

int main() {
	ios::sync_with_stdio(false);
	int n, a, b;
	cin >> n;
	while (n--) {
		cin >> a >> b;
		cout << a*b/gcd(a, b) << '\n';
	}
}