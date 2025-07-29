#include <iostream>
#include <cstring>

using namespace std;

int main() {
	char a[100], b[100];
	cout << "Enter 2 string" << endl;
	cin >> a >> b;

	auto c = strcmp(a, b);
	if (c > 0) 
		cout << a << " > " << b << endl;
	else if (c < 0)
		cout << a << " < " << b << endl;
	else
		cout << a << " = " << b << endl;

	return 0;
}
