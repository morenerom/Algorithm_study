#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

int w, h, landCnt;
int mat[51][51];
bool visit[51][51] = { false, };
int direction[8][2] = { {1,0},{-1,0},{0,1},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1} };
queue<pair<int, int>> q;

void BFS(int i, int j) {
	visit[i][j] = true;
	for (int d = 0; d < 8; d++) {
		int tmpI = i + direction[d][0];
		int tmpJ = j + direction[d][1];
		if ((tmpJ >= 0 && tmpJ < w) && (tmpI >= 0 && tmpI < h) && !visit[tmpI][tmpJ] && mat[tmpI][tmpJ] == 1) {
			visit[tmpI][tmpJ] = true;
			q.push(make_pair(tmpI, tmpJ));
		}
	}
	q.pop();
	if (!q.empty())
		BFS(q.front().first, q.front().second);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	while (1) {
		memset(mat, 0, sizeof(mat));
		memset(visit, 0, sizeof(visit));
		landCnt = 0;
		cin >> w >> h;
		if (w == 0 && h == 0)
			return 0;
		for (int i = 0; i < h; i++) {
			for(int j=0;j<w;j++)
				cin >> mat[i][j];
		}
			
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				if (mat[i][j] == 1 && !visit[i][j]) {
					q.push(make_pair(i, j));
					BFS(i, j);
					++landCnt;
				}
			}
		}
		cout << landCnt << '\n';
	}
	return 0;
}