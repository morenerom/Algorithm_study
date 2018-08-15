#include <iostream>
using namespace std;

int main() {
	int input[10][11];
	int sum[11];
	for (int i = 0; i < 10; i++)
		sum[i] = 0;
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 10; j++) {
			cin >> input[i][j];
			if (input[i][j] % 2 == 1)
				sum[i] += input[i][j];
		}
	}

	for (int i = 0; i < n; i++)
		cout << '#' << i + 1 << ' ' << sum[i] << endl;

	return 0;
}