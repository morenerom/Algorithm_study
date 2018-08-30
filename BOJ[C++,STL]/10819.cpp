#include <deque>
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	int n, tmp;
	deque<int> v1, v2;
	deque<int> d1, d2;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		v1.push_back(tmp);
		v2.push_back(tmp);
	}
	// 최소값 -> 최대값 순서
	sort(v1.begin(), v1.end());
	while (1) {
		d1.push_front(v1.front());
		v1.pop_front();
		if (v1.empty())
			break;
		d1.push_back(v1.back());
		v1.pop_back();
		if (v1.empty())
			break;
		d1.push_front(v1.back());
		v1.pop_back();
		if (v1.empty())
			break;
		d1.push_back(v1.front());
		v1.pop_front();
		if (v1.empty())
			break;
	}
	int sum1 = 0;
	for (auto iter = d1.begin() + 1; iter != d1.end(); iter++)
		sum1 += abs(*iter - *(iter-1));
	// 최대값 -> 최소값 순서
	sort(v2.begin(), v2.end());
	while (1) {
		d2.push_back(v2.back());
		v2.pop_back();
		if (v2.empty())
			break;
		d2.push_front(v2.front());
		v2.pop_front();
		if (v2.empty())
			break;
		d2.push_back(v2.front());
		v2.pop_front();
		if (v2.empty())
			break;
		d2.push_front(v2.back());
		v2.pop_back();
		if (v2.empty())
			break;
	}
	int sum2 = 0;
	for (auto iter = d2.begin() + 1; iter != d2.end(); iter++)
		sum2 += abs(*iter - *(iter - 1));
	cout << max(sum1, sum2) << '\n';
	return 0;
}