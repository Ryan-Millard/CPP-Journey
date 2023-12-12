#include "../std_lib_facilities.h"

int main()
{
	double a = 3.45'62, b = 7.2;

	cout<<"Before swap:\n"
		<<"\ta: "<<a<<'\n'
		<<"\tb: "<<b<<'\n';

	a += b;
	b = a - b;
	a -= b;

	cout<<"\nAfter swap:\n"
		<<"\ta: "<<a<<'\n'
		<<"\tb: "<<b<<'\n';
}
