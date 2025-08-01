#include <iostream>
using namespace std;

int main() {
	cout << "Input words" << endl;
	char word;
	int i = 0;

	while (cin >> word) {
		if (word == 'a' || word == 'e' || 
			word == 'i' || word == 'o' || word == 'u') 
			++i;
	}

	cout << i << endl;

	return 0;
}
