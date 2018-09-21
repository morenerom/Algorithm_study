#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <utility>
using namespace std;

bool visit[100001] = { false, };
vector<pair<int, int> > vp[100001];
vector<pair<int, int> > len;

void DFS(int a, int l) {
	int cnt = 0;
	visit[a] = true;
	for (int i = 0; i < vp[a].size(); i++) {
		if (!visit[vp[a][i].first]) {
			visit[vp[a][i].first] = true;
			DFS(vp[a][i].first, l + vp[a][i].second);
		}
		else
			++cnt;
	}
	if (cnt == vp[a].size())
		len.push_back(make_pair(a, l));
}

bool cmp(pair<int, int> a, pair<int, int> b) { return a.second > b.second; }

int main() {
	int v, n, f, s;
	cin >> v;
	for (int i = 1; i <= v; i++) {
		cin >> n;
		while (1) {
			cin >> f;
			if (f == -1)
				break;
			else
				cin >> s;
			vp[n].push_back(make_pair(f, s));
		}
	}
	DFS(1, 0);
	sort(len.begin(), len.end(), cmp);
	int ss = len.begin()->first;
	memset(visit, 0, sizeof(visit));
	len.clear();
	DFS(ss, 0);
	sort(len.begin(), len.end(), cmp);
	cout << len.begin()->second << '\n';
	return 0;
}