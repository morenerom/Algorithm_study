#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	/*
	int t, num;
	int min = 1000001, max = -1000001;
	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> num;
		if (num >= max)
			max = num;
		if (num <= min)
			min = num;
	}
	cout << min << ' ' << max << endl;
	*/
	int t, n;
	vector<int> num;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		num.push_back(n);
	}
	sort(num.begin(), num.end());
	cout << num[0] << ' ' << num[t-1] << endl;
	return 0;
}