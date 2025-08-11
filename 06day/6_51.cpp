#include <iostream>
using namespace std;

void f() {
	cout << "a" << endl;
}

void f(int x) {
	cout << "b" << endl;
}

void f(int x, int y) {
	cout << "c" << endl;
}

void f(double x, double y = 3.14) {
	cout << "d" << endl;
}

int main() {
	f(2.56, 42);
	f(42);
	f(42, 0);
	f(2.56, 3.14);

	return 0;
}
