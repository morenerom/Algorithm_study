#include <iostream>
#include <cmath>
#include <list>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	list<int> result;
	int n, b, c;
	cin >> n >> b;
	while (n != 0) {
		result.push_front(n%b);
		n /= b;
	}
	int len = result.size();
	list<int>::iterator iter;
	for (iter = result.begin(); iter != result.end();iter++) {
		if (*iter <= 9)
			cout << *iter;
		else
			cout << (char)(*iter + 55);
	}
	cout << '\n';
	return 0;
}