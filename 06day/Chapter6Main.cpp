#include <iostream>
#include "Chapter6.h"
using namespace std;

int main() {
	int num;
	cout << "Enter number" << endl;
	cin >> num;
	int x = fact(num);
	cout << x << endl;

	return 0;
}
