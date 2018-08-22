#include<iostream>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	int arr[10005] = { 0, };
	int tmp;
	for (int i = 1; i <= n; i++) {
		cin >> tmp;
		arr[tmp]++;
	}
	for (int i = 1; i <= 10000; i++) {
		while (arr[i]--)
			cout << i << '\n';
	}
	return 0;
}