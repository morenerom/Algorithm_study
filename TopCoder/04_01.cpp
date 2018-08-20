#include <vector>
#include <algorithm>
using namespace std;

class KiwiJuice
{
public:
	vector<int> pour(vector<int> capacities, vector<int> bottles, vector<int> fromId, vector<int> toId) {
		for (int i = 0; i < fromId.size(); i++) {
			int sum = bottles[fromId[i]] + bottles[toId[i]];
			bottles[toId[i]] = min(sum, capacities[toId[i]]);
			bottles[fromId[i]] = sum - bottles[toId[i]];
		}
		return bottles;
	}
};