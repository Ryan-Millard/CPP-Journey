#include "../std_lib_facilities.h"

int main()
{
	cout<<"Enter two integers: \n";
	int val1, val2;
	cin>>val1>>val2;

	// Which is larger
	(val1 > val2) ?
		cout<<"The first integer you entered is the larger.\n"
		:
		cout<<"The second integer you entered is the larger.\n";

	cout<<"This is the sum: "<<val1 + val2<<'\n';
	cout<<"This is the difference: "<<val1 - val2<<'\n';
	cout<<"This is the product: "<<val1 * val2<<'\n';
	cout<<"This is the ratio: "<<val1 / val2<<'\n';
}
