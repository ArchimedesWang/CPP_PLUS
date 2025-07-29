#include <iostream>
using namespace std;

int main() {
	int a[5];
	int b[5];

	cout << "Enter 5 numbes" << endl;
	for (int i = 0; i < 5; i++) {
		cin >> a[i];
	}
	cout << "Enter 5 numbes agin" << endl;
	for (int i = 0; i < 5; i++) {
		cin >> b[i];
	}

	int *p = a;
	int *q = b;

	while (p != end(a) && q != end(b)){
		if (*p != *q) {
			cout << "different" << endl;
			return -1;
		}
		q++;
		p++;
	}

	cout << "same" << endl;

	return 0;
}
