#include <iostream>
#include <vector>
#include <cmath>
#include <map>
#include <string>
#include <vector>
using namespace std;

map<int, int> m;
int a, p, cnt = 0;

void DFS(int d) {
	++m[d];
	if (m[d] == 2)
		return;
	int sum = 0;
	while (d) {
		sum += pow(d % 10, p);
		d /= 10;
	}
	DFS(sum);
}

void findEnd(int d) {
	if (m[d] == 2)
		return;
	++cnt;
	int sum = 0;
	while (d) {
		sum += pow(d % 10, p);
		d /= 10;
	}
	findEnd(sum);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> a >> p;
	DFS(a);
	findEnd(a);
	cout << cnt << '\n';
	return 0;
}