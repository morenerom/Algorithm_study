#include <iostream>
#include <string>
using namespace std;

class Deque {
	int arr[20010];
	int f, r;
public:
	Deque() {
		f = 10001;
		r = 10000;
	}
	void push_front(int num) {
		arr[--f] = num;
	}
	void push_back(int num) {
		arr[++r] = num;
	}
	void pop_front() {
		if (f > r)
			cout << "-1\n";
		else
			cout << arr[f++] << '\n';
	}
	void pop_back() {
		if (f > r)
			cout << "-1\n";
		else
			cout << arr[r--] << '\n';
	}
	void size() {
		cout << r - f + 1 << '\n';
	}
	void empty() {
		if (f > r)
			cout << "1\n";
		else
			cout << "0\n";
	}
	void front() {
		cout << arr[f] << '\n';
	}
	void back() {
		cout << arr[r] << '\n';
	}
};

int main() {
	int n, k;
	cin >> n;
	string s;
	Deque d;
	while (n--) {
		cin >> s;
		if (s == "push_front") {
			cin >> k;
			d.push_front(k);
		}
		else if (s == "push_back") {
			cin >> k;
			d.push_back(k);
		}
		else if (s == "pop_front")
			d.pop_front();
		else if (s == "pop_back")
			d.pop_back();
		else if (s == "size")
			d.size();
		else if (s == "empty")
			d.empty();
		else if (s == "front")
			d.front();
		else
			d.back();
	}
	return 0;
}