#include <iostream>
using namespace std;


istream& fprint(istream& in){
	int input;

	while (in >> input, !in.eof()) {
		cout << input << endl;
	}
	in.clear();

	return in;
}


int main() {
	fprint(cin);
	return 0;
}
