#include <iostream>
#include <cmath>
using namespace std;

#define len 1000
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
	int n, tmp, cnt = 0;
	cin >> n;
	while (n--) {
		cin >> tmp;
		if (arr[tmp] != 0)
			cnt++;
	}
	cout << cnt << '\n';
	return 0;
}