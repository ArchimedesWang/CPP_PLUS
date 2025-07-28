#include <iostream>
#include <string> 
#include <vector>
using namespace std;

int main()
{
	string text;
	getline(cin, text);

	for (auto it = text.begin();
		 it != text.end(); ++it){
		*it = toupper(*it);
	}

	cout << text << endl;

	return 0;
}
