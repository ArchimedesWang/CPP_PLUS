#include <iostream>
#include <string>
using namespace std;

int main(int asgc, char *argv[]) {
	string str = string(argv[1]) + string(argv[2]);
	cout << str << endl;

	return 0;
}
