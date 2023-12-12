#include "../../std_lib_facilities.h"

int main()
{
	vector<double> vec;

	cout<<"Enter the distance between two cities along a route.\n";
	double val, total_dist;
	while(cin>>val)
	{
		vec.push_back(val);
		total_dist+=val;
	}

	cout<<"Total distance: "<<total_dist<<'\n';
}
