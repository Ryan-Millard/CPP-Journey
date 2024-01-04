
#include "../../../std_lib_facilities.h"

class Name_pairs
{
	public:
		Name_pairs(vector<string> n, vector<double> a) : names_sVec{n}, ages_dVec{a} {}
		Name_pairs() : names_sVec{ {} }, ages_dVec{ {} } {}
		void readNames();
		void readAges();
		void print();
		Name_pairs sort(const Name_pairs& toSort_NamePairs)
			{ return sort(toSort_NamePairs, 0, toSort_NamePairs.size_uLongInt()-1); }
		Name_pairs sort(const Name_pairs& toSort_NamePairs, unsigned int start_int, unsigned int end_int);
		const long unsigned int size_uLongInt();
	private:
		vector<string> names_sVec;
		vector<double> ages_dVec;
};
