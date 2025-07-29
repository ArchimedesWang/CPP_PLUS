#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> vInt1(5);
	vector<int> vInt2(5);

	cout << "Enter 5 numbers" << endl;
	for (int i = 0; i < 5; i++)
		cin >> vInt1[i];
	
	cout << "Enter 5 numbers again" << endl;
	for (int i = 0; i < 5; i++)
		cin >> vInt2[i];

	auto itb1 = vInt1.begin();
	auto itb2 = vInt2.begin();
	while (itb1 != vInt1.end() && itb2 != vInt2.end()) {
		if (*itb1 != *itb2) {
			cout << "different" << endl;
			return -1;
		}
		++itb1;
		++itb2;
	}
	cout << "same" << endl;

	return 0;
}
