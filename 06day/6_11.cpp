#include <iostream>
using namespace std;

void reset(int &i) {
	i *= 2;
}

int main() {
	int num;
	cin >> num;
	cout << "num : " << num << endl;
	reset(num);
	cout << "num : " << num << endl;

	return 0;
}
