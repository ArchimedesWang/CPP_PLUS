#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	vector<string> vStr;
	string str;
	char cont = 'y';

	while (cin >> str) {
		vStr.push_back(str);
		cin >> cont;
		if (cont != 'y')
			break;
	}

	for (auto &mem: vStr){
		for (auto &c: mem)
			c = toupper(c);
		cout << mem << endl;
	}

	return 0;
}
