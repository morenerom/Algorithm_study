#include <iostream>
using namespace std;

int Min(int a, int b) { return a > b ? b : a; }

int main() {
	int n;
	int cnt2 = 0, cnt5 = 0;
	cin >> n;
	if (n == 0) {
		cout << "0\n";
		return 0;
	}
	int tmp;
	for (int i = 1; i <= n; i++) {
		tmp = i;
		while (tmp != 0) {
			if (tmp % 2 == 0) {
				tmp /= 2;
				cnt2++;
			}
			else if (tmp % 5 == 0) {
				tmp /= 5;
				cnt5++;
			}
			else
				break;
		}
	}
	cout << Min(cnt2, cnt5) << '\n';
	return 0;
}