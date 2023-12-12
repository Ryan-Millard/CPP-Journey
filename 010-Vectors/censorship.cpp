#include "../std_lib_facilities.h"

int main()
{
	vector<string> words;

	cout<<"Enter some words (don't be norty): \n";
	for(string word; cin>>word;)
		words.push_back(word);

	for(string word : words)
	{
		if(word == "fuck" || word == "shit")
		{
			cout<<word[0]<<"***\a\n";
			continue;
		}
		cout<<word<<'\n';
	}
}
