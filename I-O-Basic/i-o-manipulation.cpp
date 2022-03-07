#include<iostream>
#include<iomanip>//needed
int main()
{
    std::cout<<std::hex<<100<<std::endl;
    std::cout<<std::oct<<10<<std::endl;
    std::cout<<std::setfill('X')<<std::setw(10);
    std::cout<<100<<" hi "<<std::endl;
    return 0;
}