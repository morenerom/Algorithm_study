#include <iostream>
#include <cmath>
#include <list>
using namespace std;

int main() {
	int a, b, m, arr[31];
	long long int sum = 0;
	list<int> result;
	cin >> a >> b >> m;
	for (int i = 0; i < m; i++) {
		cin >> arr[i];
		sum += arr[i] * pow(a, m - 1 - i);
	}
	while (sum != 0) {
		int tmp = sum % b;
		sum /= b;
		result.push_front(tmp);
	}
	list<int>::iterator iter;
	for (iter = result.begin();;) {
		cout << *iter ;
		if (++iter == result.end())
			break;
		else
			cout << ' ';
	}
	cout << '\n';
	return 0;
}