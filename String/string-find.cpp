#include<iostream>
#include<string>
int main()
{
    std::string user="What the man? ";
	std::string user2="Whatever man ";
    //return index value
    std::cout<<user.find("a")<<std::endl;
    std::cout<<user.find("the")<<std::endl;
    return 0;
}