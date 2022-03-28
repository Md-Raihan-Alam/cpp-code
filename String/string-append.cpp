#include<iostream>
#include<string>
int main()
{
    std::string user="What the man? ";
	std::string user2="Whatever man";
    user.append(user2);
    std::cout<<user;
    return 0;
}