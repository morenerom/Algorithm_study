#include <iostream>
#include <list>
using namespace std;

int main() {
	int n, tmp;
	cin >> n;
	list<pair<int,int>> arr;
	for (int i = 1; i <= n; i++) {
		cin >> tmp;
		arr.push_back(make_pair(tmp,i));
	}
	auto iter = arr.begin();
	while ((n--) != 1) {
		if (iter->first > 0) {
			int tmps = iter->second, tmpf = iter->first;
			cout << tmps;
			auto tmpIter = iter;
			tmpIter++;
			if (tmpIter == arr.end())
				tmpIter = arr.begin();
			arr.erase(iter);
			iter = tmpIter;
			for (int i = 1; i < tmpf; i++) {
				iter++;
				if (iter == arr.end())
					iter = arr.begin();
			}
		}
		else {
			int tmps = iter->second, tmpf = iter->first;
			cout << tmps;
			auto tmpIter = iter;
			if (tmpIter == arr.begin())
				tmpIter = arr.end();
			tmpIter--;
			arr.erase(iter);
			iter = tmpIter;
			for (int i = 1; i < -tmpf; i++) {
				if (iter == arr.begin())
					iter = arr.end();
				iter--;
			}
		}
		cout << ' ';
	}
	cout << arr.begin()->second << '\n';
	return 0;
}