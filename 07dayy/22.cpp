#include <iostream>
#include <string>
using namespace std;

class LogString{
	private:
		string data;
		mutable int strLength = -1;
	public:
		LogString(const string &s):data(s){}
		int getLength() const{
			if(strLength == -1)
				strLength = data.size();
			return strLength;
		}
};

int main() {
	const LogString s("Hello");
	cout << s.getLength() << endl;
	return 0;
}
