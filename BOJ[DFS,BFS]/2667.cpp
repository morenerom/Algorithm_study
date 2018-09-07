#include <iostream>
#include <queue>
#include <set>
using namespace std;

int n, houseCnt, complexCnt = 0;
char mat[26][26];
bool visit[26][26] = { false, };
int direction[4][2] = { {1,0},{-1,0},{0,1},{0,-1} };
queue<pair<int, int>> q;
multiset<int> cnt;

void BFS(int i, int j) {
	visit[i][j] = true;
	for (int d = 0; d < 4; d++) {
		int tmpI = i + direction[d][0];
		int tmpJ = j + direction[d][1];
		if ((tmpJ >= 0 && tmpJ < n) && (tmpI >= 0 && tmpI < n) && !visit[tmpI][tmpJ] && mat[tmpI][tmpJ] == '1') {
			visit[tmpI][tmpJ] = true;
			q.push(make_pair(tmpI, tmpJ));
			++houseCnt;
		}
	}
	q.pop();
	if (!q.empty())
		BFS(q.front().first, q.front().second);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> mat[i];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (mat[i][j] == '1' && !visit[i][j]) {
				houseCnt = 1;
				q.push(make_pair(i, j));
				BFS(i, j);
				++complexCnt;
				cnt.insert(houseCnt);
			}
		}
	}
	cout << complexCnt << '\n';
	for (auto x : cnt)
		cout << x << '\n';
	return 0;
}