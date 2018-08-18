#include <iostream>
using namespace std;

int main() {
	int n;
	int arr[1010];
	int dp1[1010], dp2[1010];
	int maxp, max = 0;
	cin >> n;

	dp1[0] = 0; arr[0] = 0;
	for (int i = 1; i <= n; i++)
		cin >> arr[i];

	for (int i = 1; i <= n; i++) {	// 앞에서부터
		maxp = -1;
		for (int j = 0; j < i; j++) {
			if (arr[i] > arr[j] && maxp < dp1[j]) {
				maxp = dp1[j];
			}
		}
		dp1[i] = maxp + 1;
	}

	dp2[n+1] = 0; arr[n+1] = 0;
	for (int i = n; i >= 1; i--) {	// 뒤에서부터
		maxp = -1;
		for (int j = n+1; j > i; j--) {
			if (arr[i] > arr[j] && maxp < dp2[j]) {
				maxp = dp2[j];
			}
		}
		dp2[i] = maxp + 1;
	}

	for (int i = 1; i <= n; i++)
		dp1[i] += dp2[i];

	for (int i = 1; i <= n; i++) {
		if (dp1[i] >= max)
			max = dp1[i];
	}
	cout << max-1 << endl;
	return 0;
}