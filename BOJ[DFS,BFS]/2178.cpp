#include <iostream>
#include <queue>
using namespace std;

struct Node {
	int i, j;
	int time = 0;
};

int n, m;
char mat[105][105];
int visit[105][105];
int direction[4][2] = { {1,0},{-1,0},{0,1},{0,-1} };
queue<Node> q;

void BFS() {
	int i = q.front().i;
	int j = q.front().j;
	int t = q.front().time;
	int tmpI, tmpJ;
	for (int d = 0; d < 4; d++) {
		tmpI = i + direction[d][0];
		tmpJ = j + direction[d][1];
		if ((tmpI >= 0 && tmpI < n) && (tmpJ >= 0 && tmpJ < m) && !visit[tmpI][tmpJ] && mat[tmpI][tmpJ] == '1') {
			Node tmp;
			tmp.i = tmpI;
			tmp.j = tmpJ;
			tmp.time = t + 1;
			q.push(tmp);
			++visit[tmpI][tmpJ];
			if (tmpI == n - 1 && tmpJ == m - 1) {
				cout << t + 2 << '\n';
				return;
			}
		}
	}
	q.pop();
	BFS();
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	memset(visit, 0, sizeof(visit));
	memset(mat, 0, sizeof(mat));
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> mat[i];
	Node tmp;
	tmp.i = 0, tmp.j = 0;
	visit[0][0] = 1;
	q.push(tmp);
	BFS();
	return 0;
}