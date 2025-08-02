#include <iostream>
#include <string>

using namespace std;

int main() {
	string preString = "", cruString, maxString;
	int cruCnt = 1, maxCnt = 1;

	while (cin >> cruString) {
		if (cruString == preString) {
			++cruCnt;

			if (cruCnt > maxCnt) {
				maxCnt = cruCnt;
				maxString = cruString;
			}
		} else {
			preString = cruString;
			cruCnt = 1;
		} 
	}

	if (maxCnt == 1) 
		cout << "NO" << endl;
	else
		cout << maxString << " is " << maxCnt << endl;

	return 0;
}
