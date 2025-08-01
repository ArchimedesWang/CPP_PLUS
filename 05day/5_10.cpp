#include <iostream>
using namespace std;

int main() {
	cout << "Input word" <<endl;
	char word;
	int aCnt = 0;
	int eCnt = 0;
	int iCnt = 0;
	int oCnt = 0;
	int uCnt = 0;

	while (cin >> word) {
		switch (word) {
			case 'a':
			case 'A':
				++aCnt;
				break;
		
			case 'e':
			case 'E':
				++eCnt;
				break;

			case 'i':
			case 'I':
				++iCnt;
				break;

			case 'o':
			case 'O':
				++oCnt;
				break;

			case 'u':
			case 'U':
				++uCnt;
				break;
		}
	}

	cout << "a: " << aCnt << endl;
	cout << "e: " << eCnt << endl;
	cout << "i: " << iCnt << endl;
	cout << "o: " << oCnt << endl;
	cout << "u: " << uCnt << endl;

	return 0;
}
