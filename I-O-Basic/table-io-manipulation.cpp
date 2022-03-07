#include<iostream>
#include<iomanip>
#include<cmath>
int main()
{
    double x;
    std::cout<<std::setprecision(4);
    std::cout<<"      x   sqrt(x)    x^x\n";
    for(x=2.0;x<=20.0;x++){
        std::cout<<std::setw(7)<<x<<" ";
        std::cout<<std::setw(7)<<sqrt(x)<<" ";
        std::cout<<std::setw(7)<<x*x<<"\n";
    }
    return 0;
};