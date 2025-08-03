#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> iVec1{3,2, 1, 2, 3, 4}; 
	vector<int> iVec2{1, 3, 4, 5, 6};
	
	if (iVec1.size() > iVec2.size()) {
		auto i2Size = iVec2.size();
		for (unsigned i = 0; i < i2Size; i++) {
			if (iVec1[i] != iVec2[i]) {
				cout << "Different" << endl;
				return -1;
			}
		}
	} else {
		auto i1Size = iVec1.size();
		for (unsigned i = 0; i < i1Size; i++) {
			if (iVec1[i] != iVec2[i]) {
				cout << "Different" << endl;
				return -1;
			}
		}
	}

	cout << "Same" << endl;

	return 0;
}
