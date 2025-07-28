#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	int i = 0;
	string str1;
	cin >> str1;
	while (i < str1.size()) { 
		str1[i] = 'X';
		i++;
	}
	cout << str1 << endl;
	return 0;
}
