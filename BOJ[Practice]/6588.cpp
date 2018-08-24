#include <iostream>
#include <cmath>
#include <cstdio>
//#include <stdio.h>
//#pragma warning(disable: 4996)
//using namespace std;

#define len 1000000
int arr[len + 5];

void getPrime() {
	arr[1] = 0;
	for (int i = 2; i <= len; i++)
		arr[i] = i;

	for (int i = 2; i <= sqrt(len); i++) {
		if (arr[i] == 0)
			continue;
		for (int j = i + i; j <= len; j += i)
			arr[j] = 0;
	}
}

int main() {
	//ios::sync_with_stdio(0);
	getPrime();
	int n;
	int check;
	while (1) {
		check = 0;
		//cin >> n;
		scanf("%d", &n);
		if (n == 0)
			break;
		for (int i = 3; i <= len; i += 2) {
			if (arr[n - i] && arr[i]) {
				printf("%d = %d + %d\n", n, i, n - i);
				//cout << n << " = " << i << " + " << n - i << '\n';
				check = 1;
				break;
			}
		}
		if (check == 0)
			printf("Goldbach's conjecture is wrong.\n");
		//cout << "Goldbach's conjecture is wrong.\n";
	}
	return 0;
}