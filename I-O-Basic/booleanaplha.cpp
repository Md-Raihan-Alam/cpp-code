#include<iostream>
#include<iomanip>
int main()
{
    bool b;
    std::cout<<"Before setting boolean"<<std::endl;
    b=true;
    std::cout<<b<<" ";
    b=false;
    std::cout<<b<<std::endl;
    std::cout<<"after setting booleanalpha flag:"<<std::endl;
    b=true;
    std::cout<<std::boolalpha<<b<<" ";
    b=false;
    std::cout<<std::boolalpha<<b<<std::endl;
    std::cout<<"Enter a boolean value:";
    std::cin>>std::boolalpha>>b;///Enter true or false
    std::cout<<"You have entered "<<b<<std::endl;
    return 0;
}