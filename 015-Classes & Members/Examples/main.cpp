#include <iostream>

#include "./enumerations/enum.h"
#include "./structs/struct.h"
#include "./classes/class.h"

int main();
Month int_to_month(int x);

int main()
{
	Date d{2004, 01, 20};
	Time t{2, 35};

	Month m{Month::DEC};
	// m = 7; // error: can't assign Month to int
	// int n = m; // error: can't assign int to Month
	Month z{int_to_month(7)};

	Color c{Color::RED};
}

Month int_to_month(int x)
{
	bool valid_Month = !(x<int(Month::JAN) || int(Month::DEC)<x);

	if(valid_Month) return Month(x);
	std::cerr<<"bad month";
	return Month(-1);
}
