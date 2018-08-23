/*
#include <iostream>
#include <cstring>
using namespace std;

char word[600005];
char command, w;
int n, c;
int len;

void D() {
	if (c < len - 1)
		c++;
}
void L() {
	if (c >= 0)
		c--;
}

int main() {
	ios::sync_with_stdio(false);
	cin >> word >> n;
	c = strlen(word) - 1;
	len = strlen(word);
	while (n--) {
		cin >> command;
		if (command == 'P') {
			cin >> w;
			memcpy(&(word[c]) + 2, &(word[c])+1, (len-c-1)*sizeof(char));
			word[++c] = w;
			len++;
		}
		else if (command == 'L') {
			L();
		}
		else if (command == 'D') {
			D();
		}
		else {
			if (c >= 0) {
				memcpy(&(word[c]), &(word[c]) + 1, (len - c) * sizeof(char));
				len--;
				L();
			}
		}
	}
	cout << word << '\n';
	return 0;
}
*/
#include <iostream>
#include <list>
#include <cstring>
using namespace std;

struct node {
	node* next;
	node* front;
	char word;
};

int main() {
	ios::sync_with_stdio(false);
	list<char> str;
	char s[100001];
	cin >> s;
	int len = strlen(s);
	for (int i = 0; i < len; i++)
		str.push_back(s[i]);
	list<char>::iterator cur = str.end();
	int n;
	char command, tmp;
	cin >> n;
	while (n--) {
		cin >> command;
		if (command == 'P') {
			cin >> tmp;
			str.insert(cur, tmp);
		}
		else if (command == 'L') {
			if (cur != str.begin())
				cur--;
		}
		else if (command == 'D') {
			if (cur != str.end())
				cur++;
		}
		else {
			if (cur != str.begin())
				cur = str.erase(--cur);
		}
	}
	for (cur = str.begin(); cur != str.end(); cur++)
		cout << *cur ;
	cout << '\n';
	return 0;
}