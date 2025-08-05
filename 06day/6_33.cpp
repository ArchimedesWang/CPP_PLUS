#include <iostream>
#include <vector>
using namespace std;
using Iter = vector<int>::const_iterator;

void print(Iter first, Iter last){
	if (first != last) {
		cout << *first << " ";
		print(++first, last);
	}
}

int main() {
	vector<int> int1 = {0, 1, 2, 3, 4, 5};
	print(int1.cbegin(), int1.cend());

	return 0;
}
