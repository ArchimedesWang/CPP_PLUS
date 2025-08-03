#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> vInt1{1, 2, 3, 8, 5};
	vector<int> vInt2{1, 2, 3, 4, 5, 7};

	auto it1 = vInt1.cbegin();
	auto it2 = vInt2.cbegin();

	while (it1 != vInt1.cend() && it2 != vInt2.cend()) {
		if (*it1 != *it2) {
			cout << "Different" << endl;
			return -1;
		}
		++it1;
		++it2;
	}

	cout << "Same" << endl;

	return 0;
}
