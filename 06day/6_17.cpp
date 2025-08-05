#include <iostream>
#include <string>

using namespace std;

bool HasUpper(const string &str) {
	for (auto s : str) 
		if (isupper(s))
			return true;
	return false;
}

void ChangeToLower(string &str) {
	for (auto &s : str)
		s = tolower(s);
}

int main() {
	string str;
	cout << "Enter a string" << endl;
	cin >> str;

	if (HasUpper(str))
		ChangeToLower(str);

	cout << str << endl;

	return 0;
}
