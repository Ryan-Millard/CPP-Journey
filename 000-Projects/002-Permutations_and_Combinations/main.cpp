#include "../std_lib_facilities.h"
#include <climits>

bool is_perm_calc();

unsigned int set_value(unsigned char), permutation(unsigned int a, unsigned int b), combination(unsigned int a, unsigned int b);

int main()
{
	while(1)
	{
		cout<<"Enter the values of the following:\n";
		unsigned int a{set_value('a')}, b{set_value('b')};
		while(b >= a)
		{
			cout<<"\n\tb must be < a, not >= a.";
			b = set_value('b');
		}

		if(is_perm_calc()) cout<<"\nPermutation: "<<permutation(a, b)<<'\n';
		else cout<<"\nCombination: "<<combination(a, b)<<'\n';
		cout<<"-----------------------------------------------------------------------------------------------------------------\n";
	}
}

unsigned int set_value(unsigned char c)
{
	unsigned int input;

	cout<<"\n\t"<<c<<": ";
	cin>>input;
	while(cin.fail())
	{
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		std::cout<<"\n\tInvalid input. Please enter a number that does not have a decimal and is greater than 0.\n";

		cout<<"\n\t"<<c<<": ";
		cin>>input;
	}

	return input;
}

bool is_perm_calc()
{
	constexpr char PERMUTATION_OPTION = 'p', COMBINATION_OPTION = 'c';

	cout<<"\nChoose the calculation below:\n\tPermutation or Combination (p or c): ";
	char calc_chosen;
	while(1)
	{
		cin>>calc_chosen;
		switch(tolower(calc_chosen))
		{
			case PERMUTATION_OPTION: return 1;
			case COMBINATION_OPTION: return 0;
			default: cout << "\n\tInvalid option. Please enter 'p' for Permutation or 'c' for Combination. ";
		}
	}
}

unsigned long long factorial(unsigned int n)
{
	if(n == 0) return 1;

	unsigned long long result = 1;
	for(; n > 0; n--) result *= n;
	return result;
}

unsigned int permutation(unsigned int a, unsigned int b) { return factorial(a)/factorial(a-b); }

unsigned int combination(unsigned int a, unsigned int b) { return permutation(a, b)/factorial(b); }
