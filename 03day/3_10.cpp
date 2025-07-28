#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string result;
	string str1;
	getline(cin, str1);
	
	for (auto &c: str1) {
		if (!ispunct(c)) {
			result += c;
		} 
	}
	cout << result << endl;

	return 0;
}
