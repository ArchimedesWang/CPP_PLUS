#include <iostream>
using namespace std;

int main()
{
	int a[10] = {};
	int b[10] = {};
	
	for (int i = 0; i < 10; i++) {
		a[i] = i;
	}

	for (int i = 0; i < 10; i++) {
		b[i] = a[i];
	}
	
	for (int i = 0; i < 10; i++) {
		cout << a[i];
	}

	cout << endl;

	for (int i = 0; i < 10; i++) {
		cout << b[i];
	}

	cout << endl;

	return 0;
}
