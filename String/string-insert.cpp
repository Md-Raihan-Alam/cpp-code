#include<iostream>
#include<string>
int main()
{
    std::string user="What the man? ";
	std::string user2="Whatever man ";
    user.insert(0,user2);//what index, what string
    std::cout<<user;
    return 0;
}