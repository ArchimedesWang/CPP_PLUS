#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string str1;
	cin >> str1;
	for (auto &c: str1) {
		c = 'X';
	}
	cout << str1 << endl;
	return 0;
}
