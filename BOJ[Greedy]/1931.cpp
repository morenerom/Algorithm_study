#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) { 
	if (a.second == b.second)
		return a.first < b.first;
	else
		return a.second < b.second;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N, cur, iter = 0, cnt = 0;
	cin >> N;
	vector<pair<int, int>> t(N);
	for (int i = 0; i < N; i++)
		cin >> t[i].first >> t[i].second;
	sort(t.begin(), t.end(), cmp);
	while (iter != N) {
		++cnt;
		cur = t[iter].second;
		++iter;
		if (iter == N) {
			cout << cnt << '\n';
			return 0;
		}
		while (t[iter].first < cur) {
			++iter;
			if (iter == N) {
				cout << cnt << '\n';
				return 0;
			}
		}
	}
	return 0;
}