#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b;
	
	if (b == 0)
		throw runtime_error("b can't be 0!");
	c = b / a;

	cout << a << " / " << " is " <<  c << "(int)" << endl;

	return 0;
}
