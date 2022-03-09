#include<iostream>
#include<cstring>
std::istream &getpass(std::istream &stream)
{
    std::cout<<"\a";//sound bell
    std::cout<<"Enter password:";
    return stream;
}
int main()
{
    char pw[80];
    do{
        std::cin>>getpass>>pw;
    }while(strcmp(pw,"password"));
    std::cout<<"Login completed\n";
    return 0;
}