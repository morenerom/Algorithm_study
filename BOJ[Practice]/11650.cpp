#include <iostream>
#include <algorithm>
using namespace std;

struct spot
{
	int x;
	int y;
};

bool cmp(spot a, spot b) {
	if (a.x < b.x)
		return true;
	else if (a.x == b.x)
		return a.y < b.y;
	else
		return false;
}


int main() {
	int n;
	struct spot arr[100010];
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i].x >> arr[i].y;

	sort(arr, arr + n, cmp);

	for (int i = 0; i < n; i++)
		cout << arr[i].x << ' ' << arr[i].y << '\n';
	return 0;
}