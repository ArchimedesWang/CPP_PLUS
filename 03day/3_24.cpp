#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> vInt;
	char cont = 'y';
	int i;
	string str1;

	while (cin >> i) {
		vInt.push_back(i);
		cin >> cont;
		if (cont == 'y') 
			break;
	}

	cout << "***********" << endl;

	for (int i = 0; i < vInt.size(); i++){
		cout << vInt[i] << endl;	
	}

	for (auto it = vInt.begin();
		 it != (vInt.end() - 1); ++it) {
		*it = *it + *(it + 1);
	}
	
	cout << "***********" << endl;

	for (int i = 0; i < (vInt.size()-1); i++){
		cout << vInt[i] << endl;
	}

	return 0;
}
