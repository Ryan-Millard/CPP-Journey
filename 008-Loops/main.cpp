#include "../std_lib_facilities.h"

int main()
{
	for(char i = 65; i < 123; i++)
	{
		if(i >= 91 && i <=96)
		{
			continue;
		}
		cout<<i<<'\t'<<int(i)<<'\n';
	}
}
