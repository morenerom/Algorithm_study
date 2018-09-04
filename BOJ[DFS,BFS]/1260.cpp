#include <iostream>
#include <queue>
using namespace std;

int n, m, v;
int mat[1005][1005] = { 0, };
int DFS_visit[1005] = { 0, };
int BFS_visit[1005] = { 0, };
queue<int> q;

void DFS(int d) {
	DFS_visit[d] = 1;
	printf("%d ", d);
	for (int i = 1; i <= n; i++) {
		if (mat[d][i] && !DFS_visit[i]) 
			DFS(i);
	}
}

void BFS(int d) {
	BFS_visit[d] = 1;
	printf("%d ", d);
	for (int i = 1; i <= n; i++) {
		if (mat[d][i] && !BFS_visit[i]) {
			q.push(i);
			BFS_visit[i] = 1;
		}
	}
	q.pop();
	if(!q.empty())
		BFS(q.front());
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n >> m >> v;
	int d1, d2;
	for (int i = 0; i < m; i++) {
		cin >> d1 >> d2;
		mat[d1][d2] = mat[d2][d1] = 1;
	}

	DFS(v);
	printf("\n");
	q.push(v);
	BFS(v);

	return 0;
}