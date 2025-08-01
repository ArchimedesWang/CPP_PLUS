#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "Enter a score" << endl;
	int score;
	string grade;
	cin >> score;

	grade = score > 100 ? "Erorr" : score < 0 ?
			              "Erorr" : score < 60?
						  "E"     : score < 70?
						  "D"     : score < 80?
						  "C"     : score < 90?
						  "B"     : "A";
	cout << grade << endl;

	return 0;
}

