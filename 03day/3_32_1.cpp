#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> vInt1, vInt2;
	for (int i = 0; i < 10; i++)
		vInt1.push_back(i);
	for (int i = 0; i < 10; i++)
		vInt2.push_back(vInt1[i]);
	for (auto j: vInt2)
		cout << vInt2[j];
	cout <<endl;
}
