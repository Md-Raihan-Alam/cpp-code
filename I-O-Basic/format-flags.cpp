#include<iostream>
int main()
{
    std::cout<<"display using default settings\n";
    std::cout<<123.23<<" hello "<<100<<"\n";
    std::cout<<10<<" "<<-10<<"\n";
    std::cout<<100.0<<"\n\n";
    std::cout<<"Now change formats->dec,hex and scientific\n";
    std::cout.unsetf(std::ios::dec);///no require by all compillers
    std::cout.setf(std::ios::hex | std::ios::scientific);
    std::cout<<123.43<<" hello "<<100<<"\n\n";
    std::cout<<"now->showpos\n";
    std::cout.setf(std::ios::showpos);
    std::cout<<10<<" "<<-10<<"\n\n";
    std::cout<<"now-showpoint and fixed\n";
    std::cout.setf(std::ios::showpoint | std::ios::fixed);
    std::cout<<100.0;
    return 0;
}