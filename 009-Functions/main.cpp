#include "../std_lib_facilities.h"

int square(int);

int main()
{
	cout<<square(1)<<'\n';
	cout<<square(2)<<'\n';
	cout<<square(3)<<'\n';
	cout<<square(4)<<'\n';
	cout<<square(5)<<'\n';
}

int square(int x)
{
	int result{0};

	for(int i = x; i > 0; i--)
	{
		result+=x;
	}

	return result;
}
