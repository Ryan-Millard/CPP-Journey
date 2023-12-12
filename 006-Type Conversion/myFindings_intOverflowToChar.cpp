#include <iostream>

int main()
{
	int x = 798645312, ascii_size = 128;
	char c = x;
	// char is allowed to overflow
	std::cout<<"c (char equivalent of x): "<<c<<'\n';
	std::cout<<"x(ASCII code for c): "<<x % ascii_size<<'\n';

	// char is thus determined by the remainder
}
