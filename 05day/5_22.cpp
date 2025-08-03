#include <iostream>
#include <string>

using namespace std;

int main() {
	string  curString, preString = "";
	bool isBool = false;

	begin:
		while (cin >> curString) {
			if (curString == preString) {
				auto it1 = curString.cbegin();
				if (isupper(*it1)) {
					isBool = true;
					break;
				} else 
					goto begin;
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
