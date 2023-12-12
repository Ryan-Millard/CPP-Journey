#include "../../std_lib_facilities.h"

double find_median(vector<int> &vec);

int main()
{
	vector<int> vec;
	int next_val;

	cout<<"Enter ya stuff: \n";
	while(cin>>next_val)
		vec.push_back(next_val);

	sort(vec);

	cout<<find_median(vec)<<'\n';
}

double find_median(vector<int> &vec)
{
	int size = vec.size();

	if(size%2 != 0)
		return vec[(size/2)]; /* correct index due to int division */

	cout<<"Even\n";
	int lower = vec[(size/2) - 1];
	int upper = vec[(size/2)];

	return (lower + upper)/2.0; /* int division caused a problem here 😭😭 */
}
