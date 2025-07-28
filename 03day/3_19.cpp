#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> vInt1(10, 42);
	vector<int> vInt2{42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
	vector<int> vInt3;
	for (int i = 0; i < 10; i++) {
		vInt3.push_back(42);
	}

	return 0;
}
