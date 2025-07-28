#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> vInt;
	int i;
	char cont = 'y';

	while (cin >> i) {
		vInt.push_back(i);
		cin >> cont;
		if (cont != 'y')
			break;
	}

	for (auto mem: vInt){
		cout << mem << endl;
	}

	return 0;
}
