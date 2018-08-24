#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a, int b) { return a % b == 0 ? b : gcd(b, a%b); }

int main() {
	int a, b;
	cin >> a >> b;
	if (b > a)
		swap(a, b);
	int g, l;
	g = gcd(a, b); l = (a * b) / g;
	cout << g << '\n' << l << '\n';
}