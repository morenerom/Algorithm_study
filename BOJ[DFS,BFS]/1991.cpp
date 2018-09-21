#include <iostream>
using namespace std;

int x[27][2];

void preorder(int a) {
	if (a == -1) return;
	cout << (char)(a + 'A');
	preorder(x[a][0]);
	preorder(x[a][1]);
}

void inorder(int a) {
	if (a == -1) return;
	inorder(x[a][0]);
	cout << (char)(a + 'A');
	inorder(x[a][1]);
}

void postorder(int a) {
	if (a == -1) return;
	postorder(x[a][0]);
	postorder(x[a][1]);
	cout << (char)(a + 'A');
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	char f, s, t;
	cin >> n;
	while (n--) {
		cin >> f >> s >> t;
		if (s != '.')
			x[f - 'A'][0] = s - 'A';
		else
			x[f - 'A'][0] = -1;
		if (t != '.')
			x[f - 'A'][1] = t - 'A';
		else
			x[f - 'A'][1] = -1;
	}
	preorder(0);
	cout << '\n';
	inorder(0);
	cout << '\n';
	postorder(0);
	cout << '\n';
	return 0;
}