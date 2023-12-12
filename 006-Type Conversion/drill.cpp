#include "../std_lib_facilities.h"

int main()
{
	cout<<"Enter the name of the person you want to write to: ";
	string first_name;
	cin>>first_name;
	cout<<"Dear "<<first_name<<
		",\n\tHow are things going? How would you rate your C++ skills right now?\n\tI can't even rate mine right now, I know nothing.😂\n";
	cout<<"Enter a\nfriend's\nname.\n";
	string friend_name;
	cin>>friend_name;
	cout<<"\tHave you seen "<<friend_name<<" recently?\n";
	cout<<"Is\n"<<friend_name<<"\nmale\nor\nfemale\n(enter\neither\n\"m\" or\n\"f\")?\n";
	char friend_sex;
	cin>>friend_sex;
	if(friend_sex == 'm') cout<<"\tIf you see "<<friend_name<<" please ask him to call me.\n";
	if(friend_sex == 'f') cout<<"\tIf you see "<<friend_name<<" please ask her to call me.\n";
	int age;
	while(true)
	{
		cout<<"Enter\n"<<first_name<<"'s\nage:\n";
		cin>>age;
		if(age > 0 || age < 110) break;
		simple_error("you're kidding!");
	}
	cout<<"\tI hear you just had a birthday and you are "<<age<<" years old.\n";
	if(age == 12) cout<<"\tNext year you will be "<<age+1<<"!\n";
	else if(age == 17) cout<<"\tNext year you will be able to vote.\n";
	else if(age > 70) cout<<"\tI hope you are enjoying retirement.\n";
	cout<<"\tYours sincerely,\n\n\n";
	cout<<"Enter\nyour\nname:\n";
	string writer_name;
	cin>>writer_name;
	cout<<"\t"<<writer_name<<"\n";
}
