#include <iostream>
using namespace std;

int max(int a, int b, int c) {
	if (a >= b && a >= c)
		return a;
	else if (b >= a && b >= c)
		return b;
	else
		return c;
}

int main() {
	int n;
	int a[10010];
	int d[10010];
	cin >> n;

	for (int i = 1; i <= n; i++)
		cin >> a[i];

	d[0] = 0; d[1] = a[1]; d[2] = a[1] + a[2];
	for (int i = 3; i <= n; i++)
		d[i] = max(d[i - 3] + a[i - 1] + a[i], d[i - 1], d[i - 2] + a[i]);

	cout << d[n] << endl;
	return 0;
}