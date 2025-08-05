#include <iostream>
using namespace std;

int numCompare(const int n, const int *p) {
	if (n > *p)
		return n;
	else
		return *p;
}

int main() {
	int num1, num2;
	cout << "Enter two numbers" << endl;
	cin >> num1 >> num2;
	cout << numCompare(num1, &num2) << endl;

	return 0;
}
