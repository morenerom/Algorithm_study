#include <vector>
#include <map>
#include <algorithm>
#include <string>
using namespace std;

class InterestingParty
{
public:
	int bestInvite(vector<string> first, vector<string> second) {
		map <string, int> dic;

		for (int i = 0; i < first.size(); i++) {
			dic[first[i]] = 0;
			dic[second[i]] = 0;
		}

		for (int i = 0; i < first.size(); i++) {
			dic[first[i]]++;
			dic[second[i]]++;
		}

		map<string, int>::iterator iter;
		int m = 0;
		for (iter = dic.begin(); iter != dic.end(); iter++) {
			m = max(m, iter->second);
		}
		return m;
	}
};