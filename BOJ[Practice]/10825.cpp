#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct student {
	string name;
	int korean;
	int eng;
	int math;
};

bool cmp(student a, student b) {
	if (a.korean != b.korean)
		return a.korean > b.korean;
	else {
		if (a.eng != b.eng)
			return a.eng < b.eng;
		else {
			if (a.math != b.math)
				return a.math > b.math;
			else {
				if (a.name.compare(b.name) < 0)
					return true;
				else
					return false;
			}
		}
	}

}

int main() {
	int n;
	cin >> n;
	student std[100002];
	for (int i = 0; i < n; i++)
		cin >> std[i].name >> std[i].korean >> std[i].eng >> std[i].math;

	sort(std, std + n, cmp);

	for (int i = 0; i < n; i++)
		cout << std[i].name << endl;

	return 0;
}