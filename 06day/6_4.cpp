#include <iostream>
using namespace std;

int fact(int val);

int main() {
	cout << "Enter number" << endl;
	int fac;
	cin >> fac;
	if (fac < 0) {
		cout << "ERROR" << endl;
		return -1;
	}
	cout << fac << "! is " << fact(fac) << endl;

	return 0;
}

int fact(int val) {
	int ret = 1;
	while (val > 1)
		ret *= val--;
	return ret;
}
