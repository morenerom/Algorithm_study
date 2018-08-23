#include <iostream>
#include <string>
using namespace std;

class Stack {
	int t;
	int arr[10001];
public:
	Stack() {
		t = -1;
	}
	void push(int num);
	void pop();
	void size();
	void empty();
	void top();
};

void Stack::push(int num) {
	arr[++t] = num;
}

void Stack::pop() {
	if (t == -1)
		cout << "-1\n";
	else {
		cout << arr[t] << '\n';
		t--;
	}
}

void Stack::size() {
	cout << t + 1 << '\n';
}

void Stack::empty() {
	if (t == -1)
		cout << "1\n";
	else
		cout << "0\n";
}

void Stack::top() {
	if (t == -1)
		cout << "-1\n";
	else
		cout << arr[t] << '\n';
}

int main() {
	ios::sync_with_stdio(false);
	Stack s;
	int n, k;
	string command;
	cin >> n;
	while (n--) {
		cin >> command;
		if (command == "push") {
			cin >> k;
			s.push(k);
		}
		else if (command == "pop") {
			s.pop();
		}
		else if (command == "size") {
			s.size();
		}
		else if (command == "empty") {
			s.empty();
		}
		else {
			s.top();
		}
	}

	return 0;
}