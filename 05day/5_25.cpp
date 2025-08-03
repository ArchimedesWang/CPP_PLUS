#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	
	while (cin >> a >> b) { 
		try {
			if (b == 0)
				throw runtime_error("b can't be 0!");
			c = a / b;
			break;
		} catch (runtime_error err) {
			cerr << err.what() << endl;
			cout << "Do you want try to agin?(y or n)" << endl;
			char ch;
			cin >> ch;
			if (ch != 'y')
				break;
		}
	}

	cout << a << " / " << b  << " is " <<  c << "(int)" << endl;

	return 0;
}
