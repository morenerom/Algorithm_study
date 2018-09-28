#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N, M, t;
	vector<int> tree;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> t;
		tree.push_back(t);
	}
	long long first = 0;
	long long last = 2000000000;
	long long mid = (first + last) / 2;
	long long sum;
	long long max = 0;
	while (first <= last) {
		sum = 0;
		for (int i = 0; i < N; i++) {
			if (tree[i] - mid < 0)
				sum += 0;
			else 
				sum += tree[i] - mid;
		}
		if (sum >= M) {
			first = mid + 1;
			if (mid > max)
				max = mid;
		}
		else
			last = mid - 1;
		mid = (first + last) / 2;
	}
	cout << max << '\n';
	return 0;
}