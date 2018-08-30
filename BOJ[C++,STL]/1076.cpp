#include <iostream>
#include <map>
#include <string>
#include <cmath>
using namespace std;

string s[11] = { "black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white" };

int main() {
	map<string, pair<int, long long int>> m;
	for (int i = 0; i < 10; i++)
		m[s[i]] = make_pair(i, powl(10, i));
	string first, second, third;
	cin >> first >> second >> third;
	cout << (m[first].first * 10 + m[second].first)*m[third].second << '\n';
	return 0;
}