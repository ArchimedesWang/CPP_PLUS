#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> vInt;
	for (int i = 0; i < 5; i++)
		vInt.push_back(i);

	for (auto &m: vInt)
		m = (m%2 == 0 ? m : m*2);

	for (auto m: vInt)
		cout << m;
	cout << endl;

	return 0;
}
