#include <iostream>
#include <cstring>
using namespace std;

int mat[100001];
int visit[100001] = { 0, };
int finish[100001] = { 0, };
int cnt;

void DFS(int d) {
	visit[d] = 1;
	int next_d = mat[d];
	if (!visit[next_d]) {
		DFS(next_d);
	}
	else {
		if (!finish[next_d]) {
			for (int i = next_d; i != d; i = mat[i])
				cnt++;
			cnt++;
		}
	}
	finish[d] = 1;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t, n, d;
	cin >> t;
	while (t--) {
		memset(mat, 0, sizeof(mat));
		memset(visit, 0, sizeof(visit));
		memset(finish, 0, sizeof(finish));
		cnt = 0;
		cin >> n;
		for (int i = 1; i <= n; i++)
			cin >> mat[i];
		
		for (int i = 1; i <= n; i++) {
			if (!visit[i])
				DFS(i);
		}
		cout << n - cnt << '\n';
	}

	return 0;
}