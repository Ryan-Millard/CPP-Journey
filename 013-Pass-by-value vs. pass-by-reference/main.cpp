#include "../std_lib_facilities.h"

// 1. Use pass-by-value to pass very small objects.
// 2. Use pass-by-const-reference to pass large objects that you don’t need to modify.
// 3. Return a result rather than modifying an object through a reference argument.
// 4. Use pass-by-reference only when you have to.

void g(int a, int& r, const int& cr)
{
	++a; // change the local a
	++r; // change the object referred to by r
	int x = cr; // read the object referred to by cr
}

int main()
{
	int x = 0;
	int y = 0;
	int z = 0;
	g(x,y,z); // x==0; y==1; z==0
	// g(1,2,3); // error: reference argument r needs a variable to refer to
	g(1,y,3); // OK: since cr is const we can pass a literal
}

