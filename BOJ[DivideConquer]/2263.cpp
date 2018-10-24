#include <iostream>
#include <vector>
using namespace std;

vector<int> in, post;
int pos[100001];

void solve(int in_s, int in_e, int post_s, int post_e) {
	if (in_s > in_e || post_s > post_e) return;
	int root = post[post_e];
	cout << root << ' ';
	int left = pos[root] - in_s;
	//left
	solve(in_s, pos[root] - 1, post_s, post_s + left - 1);
	//right
	solve(pos[root] + 1, in_e, post_s + left, post_e - 1);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, tmp;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		in.push_back(tmp);
		pos[tmp] = i;
	}
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		post.push_back(tmp);
	}
	solve(0, n - 1, 0, n - 1);
	return 0;
}