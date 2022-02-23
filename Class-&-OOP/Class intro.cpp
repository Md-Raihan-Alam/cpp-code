#include<iostream>
#include<string>
#include<conio.h>
class User///class
{
	std::string status="Gold";///private
	public:
		std::string first_name;
		std::string last_name;
		std::string get_status()///member function
		{
			return status;
        }
};
int main()
{
	User me;
	me.first_name="Raihan ";
	me.last_name="Alam";
	std::cout<<"My Name is "<<me.first_name<<me.last_name<<". My Status is "<<me.get_status()<<std::endl;
	getch();
}
