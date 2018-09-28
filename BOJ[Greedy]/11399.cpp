#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N, sum = 0;
	cin >> N;
	vector<int> t(N);
	for (int i = 0; i < N; i++)
		cin >> t[i];
	sort(t.begin(), t.end());
	for (int i = 0; i < N; i++) {
		for (int j = 0; j <= i; j++)
			sum += t[j];
	}
	cout << sum << '\n';
	return 0;
}