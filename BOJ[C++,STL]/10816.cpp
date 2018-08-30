#include <cstdio>
#include <unordered_map>
using namespace std;

int main() {
	int n, tmp, m;
	unordered_map<int,int> s;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &tmp);
		s[tmp]++;
	}
	scanf("%d", &m);
	for (int i = 0; i < m; i++) {
		scanf("%d", &tmp);
		printf("%d",s[tmp]);
		if (i != m - 1) printf(" ");
		else printf("\n");
	}
	return 0;
}