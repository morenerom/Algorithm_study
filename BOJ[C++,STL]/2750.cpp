#include <iostream>
#include <queue>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	priority_queue<int, vector<int>, greater<int>> q;
	cin >> n;
	for(int i=0;i<n;i++) {
		int tmp;
		cin >> tmp;
		q.push(tmp);
	}
	for (int i = 0; i < n; i++) {
		cout << q.top() << '\n';
		q.pop();
	}
		
	return 0;
}