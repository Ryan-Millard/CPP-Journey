#include "../std_lib_facilities.h"

int main()
{
	string name;
	double age;

	cout<<"Enter your name followed by your age: ";
	cin>>name>>age; // age in years

	age*=12; // age in months

	cout<<"Hello, "<<name<<", you are "<<age<<" months old.\n";
}
