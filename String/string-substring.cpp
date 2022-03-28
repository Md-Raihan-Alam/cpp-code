#include<iostream>
#include<string>
int main()
{
    std::string user="What the man? ";
	std::string user2="Whatever man ";
    std::cout<<user.substr(2,4)<<std::endl;//from where,how many index
    return 0;
}