#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> v[100001];
queue<int> q;
bool visit[100001] = { false, };
int parent[100001];

void BFS() {
	int p = q.front();
	for (int i = 0; i < v[p].size(); i++) {
		if (!visit[v[p][i]]) {
			visit[v[p][i]] = true;
			q.push(v[p][i]);
			parent[v[p][i]] = p;
		}
	}
	q.pop();
	if (!q.empty())
		BFS();
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, f ,s;
	cin >> n;
	for(int i=1;i<n;i++){
		cin >> f >> s;
		v[f].push_back(s);
		v[s].push_back(f);
	}
	q.push(1);
	visit[1] = true;
	BFS();
	for (int i = 2; i <= n; i++)
		cout << parent[i] << '\n';
	return 0;
}