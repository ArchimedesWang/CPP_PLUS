#include <iostream>
#include <vector>
using namespace std;

vector<int>::iterator fItr(vector<int>::iterator beg, 
						   vector<int>::iterator end,
						   int val) {
	while (beg != end) {
		if (*beg == val)
			return beg;
		++beg;
	}
	return beg;
}

int main() {
	vector<int> vList = {1, 2, 3, 4, 5};
	int val;
	cout << "Enter a number" << endl;
	cin >> val;
	auto i = fItr(vList.begin(), vList.end(), val);
	if (i != vList.end()) {
		cout << "Find:" << *i << endl;
	} else {
		cout << "Not Find" << endl;
	}

	return 0;
}
