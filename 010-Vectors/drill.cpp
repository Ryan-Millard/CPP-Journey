#include "../std_lib_facilities.h"
#include <cfloat>

void eval_current_measurement(const double, double &, double &);
bool eval_current_unit(string);

int main()
{
	double current_measurement, smallest{DBL_MAX}, largest{DBL_MIN};
	long sum{0};
	int num_of_values{0};
	string unit;

	cout<<"Enter a double: ";
	while(cin>>current_measurement && cin>>unit)
	{
		if(!eval_current_unit(unit))
		{
			cout<<"The unit you entered was invalid, please try again:";
			continue;
		}

		eval_current_measurement(current_measurement, smallest, largest);

		sum+=current_measurement;
		num_of_values++;

		cout<<"Enter another double:\n";
	}

	cout<<"---------------------------------------------\n"
		<<"Smallest value: "<<smallest<<'\n'
		<<"Largest value: "<<largest<<'\n'
		<<"Number of values: "<<num_of_values<<'\n'
		<<"Sum of the values: "<<sum<<'\n';
}

void eval_current_measurement(const double current_measurement, double &smallest, double &largest)
{
		if(current_measurement < smallest)
		{
			smallest = current_measurement;
			cout<<"That is the smallest value so far!\n";
		}
		if(current_measurement > largest)
		{
			largest = current_measurement;
			cout<<"That is the largest value so far!\n";
		}
}

bool eval_current_unit(string unit)
{
	if(unit.size() > 2) return false;

	switch(unit[0])
	{
		case 'c':
			if(unit[1] == 'm') return true;
			break;
		case 'i':
			if(unit[1] == 'n') return true;
			break;
		case 'f':
			if(unit[1] == 't') return true;
			break;
		case 'm':
			if(unit.size() == 1) return true;
			break;
	}

	return false;
}
