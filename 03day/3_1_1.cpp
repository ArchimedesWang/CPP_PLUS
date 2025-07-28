#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	int num1, num2;
	cout << "Enter two numbers" << endl;
	cin >> num1 >> num2;
	if (num1 > num2) {
		for (int i = num2; i <= num1; i++){
			cout << i << endl;
		}
	} else {
		for (int i = num1; i <= num2; i++){
			cout << i << endl;
		}	
	}
}
