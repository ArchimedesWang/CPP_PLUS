#include <iostream>

int main(){
	std::cout << "/*"; // yes
	std::cout << "*/"; // yes
	std::cout << /*"*/"*/; // no
	std::cout << /* "*/" /* "/*" */; // yes

	return 0;
}
