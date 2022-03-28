#include<iostream>
#include<string>
int main()
{
    std::string user="What the man? ";
	std::string user2="Whatever man ";
    // find_first_of=will return whatever character first it will find
    std::cout<<user.find_first_of("the")<<std::endl;
    return 0;
}