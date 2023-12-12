#include "../std_lib_facilities.h"

int main()
{
	cout<<"Enter a number: ";
	int number;
	cin>>number;
	cout<<"This is the square root: "<<sqrt(number)<<'\n'
		<<"This is the number multiplied by 2: "<<number*2<<'\n'
		<<"This is the number divided by 2: "<<number/2<<'\n'
		<<"This is the remainder when divided by 2: "<<number%2<<'\n';
}
