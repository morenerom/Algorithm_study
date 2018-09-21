#include <iostream>
#include <queue>
#include <vector>
#include <cstring>
#include <utility>
#include <algorithm>
using namespace std;

struct node {
	int i, j;
	int cnt = 0;
};
bool check;
int n, s = 10000, isCnt = 0;
int mat[105][105];
int visit[105][105] = { 0, };
int d[4][2] = { {0,1},{1,0},{-1,0},{0,-1} };
queue<node> v;
pair<int, int> start;

void BFS() {
	int i = v.front().i;
	int j = v.front().j;
	for (int x = 0; x < 4; x++) {
		int tmpI = i + d[x][0];
		int tmpJ = j + d[x][1];
		if ((tmpI >= 1 && tmpI <= n) && (tmpJ >= 1 && tmpJ <= n) && !visit[tmpI][tmpJ] && mat[tmpI][tmpJ]) {
			visit[tmpI][tmpJ] = isCnt;
			node tmp;
			tmp.i = tmpI, tmp.j = tmpJ;
			v.push(tmp);
		}
	}
	v.pop();
	if (!v.empty())
		BFS();
}

void DFS(int i, int j, int cnt) {
	for (int x = 0; x < 4; x++) {
		int tmpI = i + d[x][0]; 
		int tmpJ = j + d[x][1];
		if ((tmpI >= 1 && tmpI <= n) && (tmpJ >= 1 && tmpJ <= n)) {
			if (visit[tmpI][tmpJ] > 0 && visit[start.first][start.second] != visit[tmpI][tmpJ]) {
				if (cnt < s)
					s = cnt;
				check = false;
				return;
			}
			if (visit[tmpI][tmpJ] <= 0 && !mat[tmpI][tmpJ]) {
				--visit[tmpI][tmpJ];
				DFS(tmpI, tmpJ, cnt + 1);
				if (!check)
					return;
			}
		}
	}
}

int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++)
			cin >> mat[i][j];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (!visit[i][j] && mat[i][j]) {
				++isCnt;
				node tmp;
				tmp.i = i, tmp.j = j;
				v.push(tmp);
				visit[i][j] = isCnt;
				BFS();
			}
		}
	}
	for (int i = 1; i <= n; i++) {	// 섬의 경계면을 v에 push
		for (int j = 1; j <= n; j++) {
			if (!mat[i][j])
				continue;
			int cnt = 0;
			for (int x = 0; x < 4; x++) {
				int tmpI = i + d[x][0];
				int tmpJ = j + d[x][1];
				if ((tmpI >= 1 && tmpI <= n) && (tmpJ >= 1 && tmpJ < n)) {
					if (visit[tmpI][tmpJ] <= 0 && visit[i][j] > 0) {
						check = true;
						start = make_pair(i, j);
						DFS(i,j,0);
						break;
					}
				}
			}
		}
	}
	cout << s << '\n';
	/*for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++)
			cout << visit[i][j] << ' ';
		cout << '\n';
	}*/

	return 0;
}
