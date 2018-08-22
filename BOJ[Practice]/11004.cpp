#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	int n, k;
	cin >> n >> k;
	int arr[5000001];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	sort(arr, arr + n);
	cout << arr[k - 1] << '\n';
	return 0;
}