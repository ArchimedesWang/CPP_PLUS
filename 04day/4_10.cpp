#include <iostream>
using namespace std;

int main()
{
	int i;
	while (cin >> i){
		cout << "Enter a number" << endl;
		if (i == 42)
			break;
	}
	return 0;
}
