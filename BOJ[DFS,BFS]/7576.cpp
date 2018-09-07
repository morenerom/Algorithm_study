#include <iostream>
#include <queue>
using namespace std;

int m, n, oneNum = 0, totalNum, maxDep;
int mat[1001][1001];
bool visit[1001][1001] = { false, };
int direction[4][2] = { {1,0},{-1,0},{0,1},{0,-1} };
queue<pair<int,int>> q;
queue<int> depthList;

void BFS() {
	int i = q.front().first;
	int j = q.front().second;
	int depth = depthList.front();
	for (int d = 0; d < 4; d++) {
		int tmpI = i + direction[d][0];
		int tmpJ = j + direction[d][1];
		if ((tmpI >= 1 && tmpI <= n) && (tmpJ >= 1 && tmpJ <= m) && !visit[tmpI][tmpJ] && mat[tmpI][tmpJ] == 0) {
			q.push(make_pair(tmpI, tmpJ));
			depthList.push(depth + 1);
			maxDep = depth + 1;
			visit[tmpI][tmpJ] = true;
			++oneNum;
		}
	}
	q.pop();
	depthList.pop();
	if (!q.empty())
		BFS();
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> m >> n;
	totalNum = m * n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> mat[i][j];
			if (mat[i][j] == 1) {
				q.push(make_pair(i, j));
				depthList.push(0);
				visit[i][j] = true;
				++oneNum;
			}
			else if (mat[i][j] == -1)
				--totalNum;
		}
	}
	if (oneNum == totalNum) {
		cout << "0\n";
		return 0;
	}
	BFS();
	if (oneNum == totalNum) cout << maxDep << "\n";
	else cout << "-1\n";
	return 0;
}