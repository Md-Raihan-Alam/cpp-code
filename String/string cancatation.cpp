#include<iostream>
#include<string>
#include<conio.h>
int main()
{
	std::string greeting="Hello";
	std::string user=" Raihan";
	std::string greeting_user=greeting+user;
	greeting_user+="!";
	std::cout<<greeting+ " there"<<std::endl;
	std::cout<<greeting_user<<std::endl;
	getch();
}
