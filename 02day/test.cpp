#include <iostream>

int main()
{
	int a = 1;
	int *p = &a;
	int **q = &p;

	std::cout << a << "\n" 
		      << p << "\n"
			  << *q << std::endl;

	return 0;
}
