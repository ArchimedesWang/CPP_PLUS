#include <iostream>
using namespace std;

void print1(const int *p) {
	cout << *p << endl;
}

void print2(const int *beg, const int *end) {
	while (beg != end)
		cout << *beg++ << endl;
}

void print3(const int ia[], size_t size) {
	for (size_t i = 0; i != size; ++i)
		cout << ia[i] << endl;
}

void print4(int (&arr)[2]) {
	for (auto elem : arr)
		cout << elem << endl;
}

int main() {
	int i = 0, j[2] = {0, 1};
	print1(&i);
	print1(j);

	print2(begin(j), end(j));

	print3(j, end(j)-begin(j));

	print4(j);

	return 0;
}
