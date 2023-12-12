#include "../../std_lib_facilities.h"

// Integer literals come in three varieties:
	// • Decimal: a series of decimal digits
		// Decimal digits: 0, 1, 2, 3, 4, 5, 6, 7, 8, and 9
	// • Octal: a series of octal digits starting with 0
		// Octal digits: 0, 1, 2, 3, 4, 5, 6, and 7
	// • Hexadecimal: a series of hexadecimal digits starting with 0x or 0X
		// Hexadecimal digits: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, a, b, c, d, e, f, A, B, C, D, E, and F
	// • Binary: a series of binary digits starting with 0b or 0B (C++14)
		// Binary digits: 0, 1

	// A suffix u or U makes an integer literal unsigned (§25.5.3), and a suffix l or L makes it long, for example, 10u and
	// 123456UL.
	// C++14 also allows the use of the single quote as a digit separator in numeric literals. For example,
	// 0b0000'0001'0010'0011 means 0b0000000100100011 and 1'000'000 means 1000000.

int main()
{
	int binary = 0b1111, octal = 017, decimal = 15, hexadecimal = 0xF;

	cout<<"-----------------------------------------------------------------\n"
		<<"Note that these are all the same value, just in different formats\n"
		<<"-----------------------------------------------------------------\n\n"
		<<"Binary: "<<binary<<"\n"
		<<"Octal: "<<octal<<"\n"
		<<"Decimal: "<<decimal<<"\n"
		<<"Hexadecimal: "<<hexadecimal<<"\n";
}
