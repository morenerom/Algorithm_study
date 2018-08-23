#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(string a, string b) { 
	if (a.compare(b))
		return true;
	else
		return false;
}

int main() {
	ios::sync_with_stdio(false);
	string s;
	cin >> s;
	int len = s.length();
	//vector<string> t;
	vector<string> arr;
	for (int i = 0; i < len; i++) {
		string t;
		for (int j = i; j < len; j++)
			t += s[j];
		arr.push_back(t);
	}
	sort(arr.begin(), arr.end());
	
	for (int i = 0; i < len; i++)
		cout << arr[i] << '\n';

	return 0;
}