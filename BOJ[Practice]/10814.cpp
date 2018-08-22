#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

struct user {
	int age;
	string name;
};

bool cmp(user a, user b) {return a.age < b.age;}

int main() {
	int n;
	user usr[100005];
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> usr[i].age >> usr[i].name;

	sort(usr, usr+n, cmp);

	for (int i = 0; i < n; i++)
		cout << usr[i].age << ' ' << usr[i].name << '\n';

	return 0;
}