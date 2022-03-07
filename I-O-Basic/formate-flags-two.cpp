#include<iostream>
int main()
{
    std::cout.unsetf(std::ios::dec);
    std::cout.setf(std::ios::uppercase | std::ios::showbase | std::ios::hex);
    std::cout<<88<<std::endl;
    std::cout.unsetf(std::ios::uppercase);
    std::cout<<88<<std::endl;
    return 0;
}