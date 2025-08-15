#include <iostream>
#include <vector>
using namespace std;

bool fItr(vector<int>::iterator beg, 
		  vector<int>::iterator end,
		  int val) {
	while (beg != end) {
		if (*beg == val)
			return true;
		beg++;
	}
	return false;
}

int main() {
	vector<int> vList = {1, 2, 3, 4, 5};
	int val;
	cout << "Enter a number" << endl;
	cin >> val;
	auto i = fItr(vList.begin(), vList.end(), val);
	if (i == true) {
		cout << "Find!" << endl;
	} else {
		cout << "Not Find" << endl;
	}

	return 0;
}
