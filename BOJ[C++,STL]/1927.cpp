#include <iostream>
#include <queue>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	priority_queue<int, vector<int>, greater<int>> q;
	int n, com;
	cin >> n;
	while (n--) {
		cin >> com;
		if (com == 0) {
			if (q.empty())
				cout << "0\n";
			else {
				cout << q.top() << '\n';
				q.pop();
			}
		}
		else {
			q.push(com);
		}
	}
	return 0;
}