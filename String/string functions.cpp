#include<iostream>
#include<string>
#include<algorithm>///needed for reverse
#include<conio.h>
int main()
{
	std::string greeting="Hello";
	std::string str="Hello World";
	std::string str2="Hellol";
	std::string user="What the fuck";
	std::string user2="Screw you";
	std::string str3="What is up?";
	reverse(str3.begin(),str3.end());
	std::cout<<str3<<std::endl;
	std::cout<<greeting.size()<<std::endl;//same as length
	greeting.append(" there!");// same as greeting+=" there!"
	std::cout<<greeting<<std::endl;
	str.insert(5," Raihan ,what a wonderful ");//Enter anything within string
	/*insert(from where, what need to enter)*/
	std::cout<<str<<std::endl;
	greeting.erase(4,1);//Remove anythin with string
	/*erase(from where,how many)*/
	std::cout<<greeting<<std::endl;
	str2.pop_back();//remove last character
	std::cout<<str2<<std::endl;
	user.replace(9,4,"***");//replace character
	/*replace(fromt what string index,how many index,replace with what)*/
	std::cout<<user<<std::endl;
	user2.replace(user2.find("Screw"),5,"***");
	std::cout<<user2<<std::endl;
	std::cout<<str3.substr(5,2)<<std::endl;//substr(from what index,how many index)=extract certain string from STRING
	std::cout<<str3.find_first_of("aeiou")<<std::endl;//find_first_of=will return whatever character first it will find
	std::cout<<str3.find_first_of("5465")<<std::endl;/*
	will return strange number if nothing found which is called npos; npos=-1 but it will return
	strange huge positive number cause "find_first_of" return unsigned long=-1 data type value;
	You can check below
	*/
	unsigned long x=-1;
	std::cout<<" This is what find_firs_of return if nothing is found "<<x<<std::endl;
	/*comparing can be done like this; And it is one most recomended
	if(str3=="What is up?") std::cout<<"Equal"<<std::endl;
	It is same as below but compare keyword might be needed for more complex program
	and IT WILL SHOW WHAT BELOW GOT DIFFERENT FIRST
	*/
	if(str3.compare("What is up?")==0) std::cout<<"Equal"<<std::endl;//will not return 0 if not same
	getch();
}
