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
	for (char &c: str1) { // 无影响
		c = 'X';
	}
	cout << str1 << endl;
	return 0;
}
