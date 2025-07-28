#include <iostream>

int main()
{
	int i = 0, &r = i;
	auto a = r; // int a
	const int ci = i, &cr = ci; 
	auto b = ci; // int b
	auto c = cr; // int c
	auto d = &i; // int *d
	auto e = &ci; // const int *e
	auto &g = ci; // int g -> ci
	std::cout << a << " " << b << " " << c << " "
		      << d << " " << e << " " << g << std::endl;
	
	a = 42;
	b = 42;
	c = 42;
	d = 42; // 指针
	e = 42; // 指针
	g = 42; // 常量引用

	std::cout << a << " " << b << " " << c << " "
		      << d << " " << e << " " << g << std::endl;
	
	return 0;
}
