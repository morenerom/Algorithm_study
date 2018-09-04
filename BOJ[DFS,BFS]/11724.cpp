#include <iostream>
using namespace std;

int n, m;
int mat[1005][1005] = { 0, };
int visit[1005] = { 0, };

void DFS(int d) {
	visit[d] = 1;
	for (int i = 1; i <= n; i++) {
		if (mat[d][i] && !visit[i])
			DFS(i);
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n >> m;
	int d1, d2, cnt = 0;
	for (int i = 0; i < m; i++) {
		cin >> d1 >> d2;
		mat[d1][d2] = mat[d2][d1] = 1;
	}
	for (int i = 1; i <= n; i++) {
		if (!visit[i]) {
			DFS(i);
			cnt++;
		}
	}
	cout << cnt << '\n';
}