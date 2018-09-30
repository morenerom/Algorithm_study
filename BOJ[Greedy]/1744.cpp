#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N, tmp, sum = 0;
	cin >> N;
	vector<int> plus, minus;
	for (int i = 0; i < N; i++) {
		cin >> tmp;
		if (tmp > 0)
			plus.push_back(tmp);
		else
			minus.push_back(tmp);
	}
	sort(plus.begin(), plus.end(), greater<int>());
	for (int i = 0; i < plus.size(); i++) {
		if (i != plus.size() - 1) {
			if (plus[i] == 1 || plus[i + 1] == 1)
				sum += plus[i] + plus[i + 1];
			else
				sum += plus[i] * plus[i + 1];
			++i;
		}
		else
			sum += plus[i];
	}
	sort(minus.begin(), minus.end());
	for (int i = 0; i < minus.size(); i++) {
		if (i != minus.size() - 1) {
			sum += minus[i] * minus[i + 1];
			++i;
		}
		else
			sum += minus[i];
	}
	cout << sum << '\n';
	return 0;
}