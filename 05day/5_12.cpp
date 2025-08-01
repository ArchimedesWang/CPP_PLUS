#include <iostream>
using namespace std;

int main() {
	int ffCnt = 0;
	int flCnt = 0;
	int fiCnt = 0;
	char ch, peach = '\0';

	while (cin >> ch) {
		if (peach == 'f') {
			switch (ch) {
				case 'f':
					++ffCnt;
					break;
				case 'l':
					++flCnt;
					break;
				case 'i':
					++fiCnt;
					break;
			}
		}

		peach = ch;
	}

	cout << "ff: " << ffCnt << endl;
	cout << "fl: " << flCnt << endl;
	cout << "fi: " << fiCnt << endl;

	return 0;
}
