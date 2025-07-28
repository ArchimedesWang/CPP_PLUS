#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	char cont = 'y';
	string str, result;

	while (cin >> str) {
		result += str;
		cout << "y or n" << endl;
		cin >> cont;
		if (cont == 'y') {
			cout << "Enter a string" << endl;
		} else {
			break;
		}
	}
	cout << "The concat string is " << result << endl;

	return 0;
}
