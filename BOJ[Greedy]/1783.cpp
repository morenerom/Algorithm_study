#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int	h, w;
	cin >> h >> w;
	if (h == 1)
		cout << 1 << '\n';
	else if (h == 2)
		cout << (4 < (w + 1) / 2 ? 4 : (w + 1) / 2) << '\n';
	else {
		if (w < 7)
			cout << (4 < w ? 4 : w) << '\n';
		else
			cout << w - 2 << '\n';
	}
	return 0;
}