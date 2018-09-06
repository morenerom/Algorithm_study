#include <iostream>
#include <set>
#include <algorithm>
#include <cstring>
using namespace std;

int K, V, E;
int color[20005] = { 0, };
set<int> mat[20005];

void DFS(int d, int c) {
	color[d] = c;
	for (auto i : mat[d]) {
		if (!color[i]) {
			DFS(i, 3-c);
		}
	}
}

bool isSameColor() {
	for (int i = 1; i <= V; i++) {
		for (auto j : mat[i]) {
			if (color[i] == color[j])
				return true;
		}
	}
	return false;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> K;
	while (K--) {
		bool check = true;
		cin >> V >> E;
		int d1, d2;
		for (int i = 1; i <= V; i++) {
			mat[i].clear();
			memset(color, 0, sizeof(color));
		}
		for (int i = 0; i < E; i++) {
			cin >> d1 >> d2;
			mat[d1].insert(d2);
			mat[d2].insert(d1);
		}
		for (int i = 1; i <= V; i++) {
			if (!color[i])
				DFS(i, 1);
		}
		if (isSameColor())
			cout << "NO\n";
		else
			cout << "YES\n";
	}
	return 0;
}