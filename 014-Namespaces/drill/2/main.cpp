#include "../../../std_lib_facilities.h"

void swap_v(int,int), swap_r(int&,int&), swap_cr(const int&, const int&);

int main()
{
	int x = 7, y =9;
	swap_?(x,y); // replace ? by v, r, or cr
	swap_?(7,9);
	const int cx = 7, cy = 9;
	swap_?(cx,cy);
	swap_?(7.7,9.9);
	double dx = 7.7, dy = 9.9;
	swap_?(dx,dy); /* narrowing */
}

void swap_v(int a, int b){ int temp; temp = a; a=b; b=temp; }

void swap_r(int& a,int& b){ int temp; temp = a; a=b; b=temp; }

void swap_cr(const int& a, const int&b){ int temp; temp = a; a=b; b=temp; }
