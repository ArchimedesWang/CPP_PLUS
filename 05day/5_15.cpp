#include <iostream>
#include <string>
using namespace std;

int main() {
	string str, pstr, cstr;
	cout << "Enter words" << endl;
	cin >> str;
	for (auto c : str)
		cout << c << endl;
	cout << endl;

	return 0;
}
