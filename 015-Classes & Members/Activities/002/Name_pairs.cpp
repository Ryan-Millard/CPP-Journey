
#include "./Name_pairs.h"

void Name_pairs::readNames()
{
	std::cout<<"Enter names (type 'done' to finish):\n";
	string newName_str;
	while(cin>>newName_str && to_lower(newName_str)!="done") names_sVec.push_back(newName_str);
}

void Name_pairs::readAges()
{
	std::cout << "Enter ages for each name:\n";
	double newAge_doub;
	for(const string& name : names_sVec)
	{
		std::cout << name << ": "; std::cin >> newAge_doub;
		ages_dVec.push_back(newAge_doub);
	}
}

Name_pairs Name_pairs::sort(const Name_pairs& toSort_NamePairs, const unsigned int start_int, const unsigned int end_int)
{
	const long unsigned int namesSize_uInt{ names_sVec.size_uLongInt() };
	if(!namesSize_uInt) return; // return if {}

	for(long unsigned int i{namesSize_uInt - 1}; 0 < i; i--)
	{
		if(names_sVec[i] < names_sVec[i-1])
	}
}

const long unsigned int Name_pairs::size_uLongInt()
{
	const long unsigned int namesSize_uLongInt{names_sVec.size()};
	if( namesSize_uLongInt != ages_dVec.size() ) return -1;
	return namesSize_uLongInt;
}
