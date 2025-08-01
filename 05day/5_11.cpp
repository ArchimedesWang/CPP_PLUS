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
	int sCnt = 0;
	int tCnt = 0;
	int nCnt = 0;

	while (cin.get(word)) {
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

			case ' ':
				++sCnt;
				break;

			case '\n':
				++nCnt;
				break;

			case '\t':
				++tCnt;
				break;
		}
	}

	cout << "a: " << aCnt << endl;
	cout << "e: " << eCnt << endl;
	cout << "i: " << iCnt << endl;
	cout << "o: " << oCnt << endl;
	cout << "u: " << uCnt << endl;
	cout << " : " << sCnt << endl;
	cout << "\\n: " << nCnt << endl;
	cout << "\\t: " << tCnt << endl;

	return 0;
}
