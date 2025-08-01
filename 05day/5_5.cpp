#include <iostream>
using namespace std;

int main() {
	cout << "Enter a score" << endl;
	int score;
	cin >> score;

	if (score > 100 || score < 0)
		cout << "ERROR";
	else if (score > 90) 
		cout << "A";
	else if (score > 80)
		cout << "B";
	else if (score > 70)
		cout << "C";
	else if (score > 60)
		cout << "D";
	else 
		cout << "E";
	cout << endl;

	return 0;
}
