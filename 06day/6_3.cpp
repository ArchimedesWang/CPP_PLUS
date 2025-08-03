#include <iostream>
using namespace std;

int fact(int val);

int main() {
	int fac = fact(3);
	cout << fac << endl;

	return 0;
}

int fact(int val) {
	int ret = 1;
	while (val > 1)
		ret *= val--;
	return ret;
}
