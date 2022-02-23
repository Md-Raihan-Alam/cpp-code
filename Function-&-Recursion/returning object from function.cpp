#include<iostream>
#include<cstring>
class samp
{
    std::string s;
public:
    void show() { std::cout<<s<<"\n";}
    void setStr(std::string str) { s=str; }
};
///Return an object of type samp
samp input()
{
    std::string s;
    samp str2;
    std::cout<<"Enter a string=";
    std::cin>>s;
    str2.setStr(s);
    return str2;
}
int main()
{
    samp ob;
    ///assign returned object to ob
    ob=input();
    ob.show();
    return 0;
}
