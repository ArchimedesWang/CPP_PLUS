#include <iostream>
using namespace std;

int fact(int val);

int main() {
	cout << "Enter number" << endl;
	int fac;
	cin >> fac;

	cout << "|" << fac << "|" <<" is " << fact(fac) << endl;

	return 0;
}

int fact(int val) {
	if (val < 0)
		return -val;
	else
		return val;
}
