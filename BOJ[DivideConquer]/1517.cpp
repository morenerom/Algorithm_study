#include <iostream>
#include <vector>
using namespace std;

vector<int> v;
int b[500001];

long long solve(int s, int e) {
	if (s == e)
		return 0;
	long long mid = (s + e) / 2;
	long long ans = solve(s, mid) + solve(mid + 1, e);
	int i = s;
	int j = mid+1;
	int k = 0;

	while (i <= mid && j <= e) {
		if (v[i] > v[j]) {
			b[k++] = v[j++];
			ans += (mid - i + 1);
		}
		else
			b[k++] = v[i++];
	}
	while (i <= mid)
		b[k++] = v[i++];
	while (j <= e)
		b[k++] = v[j++];
	for (i = s; i <= e; i++)
		v[i] = b[i - s];
	return ans;
}

int main() {
	int n, tmp;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		v.push_back(tmp);
	}
	cout << solve(0, n - 1) << '\n';
	return 0;
}