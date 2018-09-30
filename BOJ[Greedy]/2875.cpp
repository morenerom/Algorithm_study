#include <iostream>
using namespace std;

int main() {
	int N, M, K, cnt = 0;
	cin >> N >> M >> K;
	while ((N + M >= K + 3) && (N >= 2) && (M >= 1)) {
		++cnt;
		N -= 2;
		M -= 1;
	}
	cout << cnt << '\n';
	return 0;
}