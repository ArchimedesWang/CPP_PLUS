#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {
	char c1[] = "Are you ok?";
	char c2[] = "I am fine.";
	char c3[strlen(c1) + strlen(c2) + 1];
	
	strcpy(c3, c1);
	strcat(c3, c2);

	cout << c1 << endl;
	cout << c2 << endl;
	cout << c3 << endl;

	return 0;
}
