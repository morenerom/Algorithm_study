#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	long long arr[1000001];
	arr[0] = 0;
	for (int i = 1; i <= n; i++)
		cin >> arr[i];
	sort(arr+1, arr + (n+1));
	int maxCnt = 0, tmpMaxCnt = 0;
	long long num = arr[1];
	for (int i = 1; i <= n; i++) {
		if (arr[i - 1] == arr[i]) {
			tmpMaxCnt++;
			if (tmpMaxCnt > maxCnt) {
				maxCnt = tmpMaxCnt;
				num = arr[i];
			}
		}
		else {
			tmpMaxCnt = 1;
		}
	}
	cout << num << '\n';
	return 0;
}