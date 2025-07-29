#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<unsigned> score(11, 0);
	int i;
	char cond = 'y';

	auto itb = score.begin();
	while (cin >> i) {
		if (i <= 100){
			*(itb + i/10) += 1;
		}
		cin >> cond;
		if (cond != 'y')
			break;
	}

	for (auto it = itb; it != score.end(); ++it) {
		cout << *it;
	}
	cout << endl;

	return 0;
}
