#include "class.h"

Date::Date(int yy, int mm, int dd) // non-default constructor (takes args)
:y{yy}, m{mm}, d{dd} // note: member initializers
					 // preferred over y = yy; m = mm; d = dd; because it immediately intializes upon
					 // obj's creation rather than default intitialization
{
	if(!is_valid()) throw Invalid{};
}
void Date::add_day(int n) { }
bool Date::is_valid()
{
	return 1;
}
