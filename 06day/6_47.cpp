#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> vInt, unsigned index) {
	unsigned sz = vInt.size();
	#ifndef NDEBUG
	cout << sz << endl;
	#endif 

	if(!vInt.empty() && index < sz) {
		cout << vInt[index] << endl;
		print(vInt, index + 1);
	}
}

int main() {
	vector<int> v = {1, 3, 5, 7};
	print(v, 0);

	return 0;
}
