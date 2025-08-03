#include <iostream>
#include <string>

using namespace std;

int main() {
	string  curString, preString = "";
	bool isBool = false;

	while (cin >> curString) {
		if (curString == preString) {
			isBool = true;
			break;
		} else {
			preString = curString;		
		}
	}

	if (!isBool)
		cout << "NO" << endl;
	else
		cout << "YES" << endl;
	return 0;
}
