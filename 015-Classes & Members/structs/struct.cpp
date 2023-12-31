#include "struct.h"

Time::Time(int hh, int mm)
:h{hh}, m{mm}
{
	if(!is_valid()) throw Invalid{};
}
void Time::add_time(int n) { }
bool Time::is_valid()
{
	return 1;
}
