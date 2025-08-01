#include <iostream>
#include <string>
using namespace std;

int main() {
	int grade;
	string final_grade;
	cout << "Enter a grade" <<endl;
	cin >> grade;

	final_grade = grade > 90 ? "high pass" :
							 grade > 75 ? "middle pass" :
							 grade > 60 ? "pass" : "fail";

	cout << final_grade << endl;

	return 0;
}
