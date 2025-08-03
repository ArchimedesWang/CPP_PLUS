#include <iostream>
#include <string>

using namespace std;

int main() {
	string str1;
	string str2;

	do {
		cout << "Enter two string" << endl;
		cin >> str1 >> str2;
		cout << (str1 < str2 ? str1 : str2)
			 << endl;

	} while (cin);

	return 0;
}
