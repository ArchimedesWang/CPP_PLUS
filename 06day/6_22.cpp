#include <iostream>
using namespace std;

void swapPoint(int *&p, int *&q ) {
	int *temp;
	temp = p;
	p = q;
	q = temp;
}

int main() {
	int *p, *q;
	int a = 1, b = 2;
	p = &a;
	q = &b;
	cout << *p << " " << *q << endl;
	swapPoint(p, q);
	cout << *p << " " << *q << endl;

	return 0;
}
