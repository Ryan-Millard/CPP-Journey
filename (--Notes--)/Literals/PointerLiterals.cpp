#include "../../std_lib_facilities.h"

int main()
{
	// ONLY ONE - the null pointer, nullptr
	// any constant that == 0 cant be used as a null pointer
	int* p1 = 0; // OK: null pointer
	// int* p2 = 2-2; // OK: null pointer
	// int* p3 = 1; // error: 1 is an int, not a pointer
	// int z = 0;	int* p4 = z; // OK: null pointer

	cout<<"p1: "<<p1<<'\n';
		// <<"p2: "<<p2<<'\n';
		// <<"p3: "<<p3<<'\n';
		// <<"p4: "<<p4<<'\n';
}
