#include "../std_lib_facilities.h"

int main()
{
	vector<double> temps;

	for(double temp; cin>>temp;)
	{
		temps.push_back(temp);
	}

	for(double x : temps)
	{
		cout<<x<<'\n';
	}
}
