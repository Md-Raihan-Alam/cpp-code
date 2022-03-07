#include<iostream>
int main()
{
    std::cout.width(10);///set the minimum field width
    std::cout<<"hello"<<std::endl;//right-justify by default
    std::cout.fill('*');//set fill character needs to be ''
    std::cout.width(10);///set width
    std::cout<<"Hello"<<std::endl;///right hand by default
    std::cout.setf(std::ios::left);///left justify by default
    std::cout.width(10);///set width
    std::cout<<"hello"<<std::endl;///output left justified
    std::cout.width(10);///set width
    std::cout.precision(10);///set 10 digits of precision
    std::cout<<123.312421<<std::endl;
    std::cout.width(10);//set width
    std::cout.precision(5);//set 6 digits of precision
    std::cout<<123.347654<<std::endl;
    return 0;
}