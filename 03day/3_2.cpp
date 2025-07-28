#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	string strLine;
	if(getline(cin, strLine))
//	if(cin >> strLine)
		cout << strLine << endl;
	return 0;
}
