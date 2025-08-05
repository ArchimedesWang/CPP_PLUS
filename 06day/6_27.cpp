#include <iostream>
#include <initializer_list>
using namespace std;

int addInt(initializer_list<int> i1) {
	int sum = 0;
	for (auto i : i1)
		sum += i;
	return sum;
}

int main() {
	cout << addInt({1, 2, 3, 4, 5}) << endl;

	return 0;
}
