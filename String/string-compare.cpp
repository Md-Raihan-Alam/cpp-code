#include<iostream>
#include<string>
int main()
{
    std::string user="What the man? ";
	std::string user2="Whatever man ";
    std::cout<<user.compare("What the man? ")<<std::endl;// work like strcmp
    return 0;
}