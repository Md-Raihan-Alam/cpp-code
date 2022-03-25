#include<iostream>
// you can also call it like this
//using std::cout
//using std::cin
int main()
{
    double val;
    //use explicit std:: qualification
    std::cout<<"Enter a number:";
    std::cin>>val;
    std::cout<<"This is your number: "<<val<<std::endl;
    return 0;
}