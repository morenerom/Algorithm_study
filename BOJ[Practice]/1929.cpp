#include <iostream>
#include <cmath>
using namespace std;

#define len 1000000
int arr[len + 5];

void getPrime() {
	arr[1] = 0;
	for (int i = 2; i <= len; i++)
		arr[i] = i;

	for (int i = 2; i <= sqrt(len); i++) {
		if (arr[i] == 0)
			continue;
		for (int j = i + i; j <= len; j += i)
			arr[j] = 0;
	}
}

int main() {
	ios::sync_with_stdio(0);
	getPrime();
	int m, n;
	cin >> m >> n;
	for (int i = m; i <= n; i++) {
		if (arr[i] != 0)
			cout << arr[i] << '\n';
	}
	
	return 0;
}