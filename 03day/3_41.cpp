#include <vector>
#include <iostream>
using namespace std;

int main() {
	char a[] = "Are you OK?";
	vector<char> vChar(begin(a), end(a));
	for (auto i: vChar)
		cout << i;
	cout << endl;

	return 0;
}
