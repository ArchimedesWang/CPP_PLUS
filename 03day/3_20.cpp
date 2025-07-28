#include <iostream>
#include <vector>
using namespace std;

//int main()
//{
//	vector<int> vInt;
//	int i;
//	char cont = 'y';
//
//	while (cin >> i) {
//		vInt.push_back(i);
//		cin >> cont;
//		if (cont != 'y')
//			break;
//	}
//
//	for (int i = 0; i < vInt.size()-1; i++){
//		cout << vInt[i] + vInt[i+1] << endl;
//	}
//
//	return 0;
//}

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

	decltype(vInt.size()) n = vInt.size() - 1;
	for (int i = 0; i < n; i++){
		cout << vInt[i] + vInt[n-i] << endl;
	}

	return 0;
}
