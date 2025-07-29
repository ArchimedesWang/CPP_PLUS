#include <iostream>
#include <string>

using namespace std; 

int main() {
	string str1;
	string str2;

	cout << "Enter a string" << endl;
	cin >> str1;
	cout << "Enter a string again" << endl;
	cin >> str2;

	if (str1 > str2) 
		cout << str1 << " > " << str2 << endl;
	else if (str1 < str2)
		cout << str1 << " < " << str2 << endl;
	else
		cout << str1 << " = " << str2 << endl;

	return 0;
}
