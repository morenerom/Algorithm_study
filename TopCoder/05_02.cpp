#include <vector>
#include <algorithm>
using namespace std;

class Cryptography {
public:
	long long encrypt(vector<int> numbers) {
		long long sum = 0;

		sort(numbers.begin(), numbers.end());
		numbers[0]++;
		sum = numbers[0];
		for (int i = 1; i < numbers.size(); i++)
			sum *= numbers[i];
		return sum;
	}
};