#include <iostream>
#include <string>
using namespace std;

class Queue {
	int arr[10005];
	int f, r;
public:
	Queue() {
		f = 0;
		r = -1;
	}
	void push(int num);
	void pop();
	void size();
	void empty();
	void front();
	void back();
};

void Queue::push(int num) {
	arr[++r] = num;
}

void Queue::pop() {
	if (f > r)
		cout << "-1\n";
	else {
		cout << arr[f] << '\n';
		f++;
	}
}

void Queue::size() {
	cout << r - f + 1 << '\n';
}

void Queue::empty() {
	if (f > r)
		cout << "1\n";
	else
		cout << "0\n";
}

void Queue::front() {
	if (f > r)
		cout << "-1\n";
	else
		cout << arr[f] << '\n';
}

void Queue::back() {
	if (f > r)
		cout << "-1\n";
	else
		cout << arr[r] << '\n';
}

int main() {
	int n, num;
	string command;
	Queue q;
	cin >> n;
	while (n--) {
		cin >> command;
		if (command == "push") {
			cin >> num;
			q.push(num);
		}
		else if (command == "pop")
			q.pop();
		else if (command == "size")
			q.size();
		else if (command == "empty")
			q.empty();
		else if (command == "front")
			q.front();
		else
			q.back();
	}

	return 0;
}