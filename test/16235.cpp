//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//bool cmp(pair<pair<int, int>, int> a, pair<pair<int, int>, int> b) { return a.second < b.second; }
//int d[8][2] = { {1,0},{1,1},{0,1},{-1,1},{-1,0},{-1,-1},{0,-1},{1,-1} };
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	int a[101][101] = { 0, };
//	int land[101][101] = { 0, };
//	vector <pair<pair<int, int>, int> > v;
//	vector <pair<pair<int, int>, int> > dv;
//	int n, m, k;
//	cin >> n >> m >> k;
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++)
//			land[i][j] = 5;
//	}
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++)
//			cin >> a[i][j];
//	}
//	int ti, tj, ta;
//	for (int i = 0; i < m; i++) {
//		cin >> ti >> tj >> ta;
//		v.push_back(make_pair(make_pair(ti, tj), ta));
//	}
//	sort(v.begin(), v.end(), cmp);
//	int t;
//	for (int x = 1; x <= k; x++) {
//		// spring
//		for (int i = 0; i < v.size(); i++) {
//			if (land[v[i].first.first][v[i].first.second] >= v[i].second) {
//				land[v[i].first.first][v[i].first.second] -= v[i].second;
//				++v[i].second;
//			}
//			else {
//				vector<pair<pair<int, int>, int> >::iterator iter = v.begin()+i;
//				dv.push_back(v[i]);
//				v.erase(iter);
//				--i;
//			}
//		}
//		// summer
//		for (int i = 0; i < dv.size(); i++)
//			land[dv[i].first.first][dv[i].first.second] += dv[i].second / 2;
//		dv.clear();
//		// fall
//		t = v.size();
// 		for (int i = 0; i < t; i++) {
//			if (v[i].second % 5 == 0) {
//				for (int j = 0; j < 8; j++) {
//					ti = v[i].first.first + d[j][0];
//					tj = v[i].first.second + d[j][1];
//					if ((ti >= 1 && ti <= n) && (tj >= 1 && tj <= n))
//							v.push_back(make_pair(make_pair(ti, tj), 1));
//				}
//						
//			}
//		}
//		sort(v.begin(), v.end(), cmp);
//		// winter
//		for (int i = 1; i <= n; i++) {
//			for (int j = 1; j <= n; j++)
//				land[i][j] += a[i][j];
//		}
//	}
//	cout << v.size() << '\n';
//	return 0;
//}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int d[8][2] = { {1,0},{1,1},{0,1},{-1,1},{-1,0},{-1,-1},{0,-1},{1,-1} };

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a[101][101] = { 0, };
	int land[101][101] = { 0, };
	vector <int> v[101][101];
	vector <pair<pair<int,int>,int>> dv;
	int n, m, k;
	cin >> n >> m >> k;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++)
			land[i][j] = 5;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++)
			cin >> a[i][j];
	}
	int ti, tj, ta;
	for (int i = 0; i < m; i++) {
		cin >> ti >> tj >> ta;
		v[ti][tj].push_back(ta);
	}
	int t;
	for (int x = 1; x <= k; x++) {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++)
				sort(v[i][j].begin(), v[i][j].end());
		}
		// spring
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				for (int k = 0; k < v[i][j].size(); k++) {
					if (land[i][j] >= v[i][j][k]) {
						land[i][j] -= v[i][j][k];
						++v[i][j][k];
					}
					else {
						vector<int>::iterator iter = v[i][j].begin() + k;
						dv.push_back(make_pair(make_pair(i, j), v[i][j][k]));
						v[i][j].erase(iter);
						k--;
					}
				}
			}
		}
		// summer
		for (int i = 0; i < dv.size(); i++)
			land[dv[i].first.first][dv[i].first.second] += dv[i].second / 2;
		dv.clear();
		// fall
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				for (int k = 0; k < v[i][j].size(); k++) {
					if (v[i][j][k] % 5 == 0) {
						for (int l = 0; l < 8; l++) {
							ti = i + d[l][0];
							tj = j + d[l][1];
							if ((ti >= 1 && ti <= n) && (tj >= 1 && tj <= n))
								v[ti][tj].push_back(1);
						}
					}
				}
			}
		}
		// winter
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++)
				land[i][j] += a[i][j];
		}
	}
	int cnt = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cnt += v[i][j].size();
		}
	}
	cout << cnt << '\n';
	return 0;
}