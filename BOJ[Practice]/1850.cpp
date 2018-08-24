#include <iostream>
using namespace std;

unsigned long long int gcd(unsigned long long int a, unsigned long long int b) { return a % b == 0 ? b : gcd(b, a%b); }

int main() {
	ios::sync_with_stdio(0);
	unsigned long long int a, b;
	cin >> a >> b;
	unsigned long long int result = gcd(a, b);
	for(int i=0;i<result;i++)
		cout << 1 ;
	cout << '\n';
	return 0;
}