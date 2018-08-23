#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	int n, m;
	list<int> l;
	list<int> result;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		l.push_back(i);
	list<int>::iterator iter = find(l.begin(), l.end(), m);
	while (1) {
		result.push_back(*iter);
		iter = l.erase(iter);
		if (l.empty())
			break;
		for (int i = 0; i < m-1; i++) {
			if (iter == l.end())
				iter = l.begin();
			iter++;
			if (iter == l.end())
				iter = l.begin();
		}
	}
	cout << '<';
	for (iter = result.begin(); iter != result.end(); ) {
		cout << *iter ;
		if (++iter != result.end())
			cout << ", ";
	}
	cout << ">\n";
	return 0;
}