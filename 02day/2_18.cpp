#include <iostream>

int main()
{
	int a = 1;
	int b = 2;
	int *p = &a;

	std::cout << "p is " << p << "\n" << "*p is " << *p << std::endl;
	
	p = &b;
	*p = 4;
	std::cout << "p is " << p << "\n" << "*p is " << *p << std::endl;

	return 0;
}
