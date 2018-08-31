#include <iostream>
#include <vector>
using namespace std;

class InterestingDigits {
	vector<int> arr;
public:
	vector<int> digits(int base) {
		for (int i = 2; i < base; i++) {
			bool check = true;
			for (int j = 0; j < base; j++) {
				for (int k = 0; k < base; k++) {
					for (int l = 0; l < base; l++) {
						if (((j*base*base + k*base + l) % i == 0) && ((j + k + l) % i != 0)) {
							check = false;
							break;
						}
					}
					if (!check) break;
				}
				if (!check) break;
			}
			if (check) arr.push_back(i);
		}
		return arr;
	}
};

int main() {
	int n;
	cin >> n;
	InterestingDigits digit;
	auto v = digit.digits(n);
	for (auto x : v)
		cout << x << '\n';
	return 0;
}