#include<iostream>
#include<string>
int main()
{
    std::string user="What the man? ";
	std::string user2="Whatever man ";
    user.pop_back();
    user.pop_back();
    user.pop_back();
    user.pop_back();
    std::cout<<user;
    return 0;
}