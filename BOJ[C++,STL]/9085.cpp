#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int t, sum;
	cin >> t;
	while (t--) {
		sum = 0;
		int n;
		cin >> n;
		while (n--) {
			int tmp;
			cin >> tmp;
			sum += tmp;
		}
		cout << sum << '\n';
	}

	return 0;
}