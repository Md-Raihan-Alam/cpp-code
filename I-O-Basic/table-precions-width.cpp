#include<iostream>
#include<cmath>
int main()
{
    double x;
    std::cout.precision(4);
    std::cout<<"     X    sqrt(X)    x^2\n\n";
    for(x=2.0;x<=20.0;x++){
        std::cout.width(7);
        std::cout<<x<<" ";
        std::cout.width(7);
        std::cout<<sqrt(x)<<" ";
        std::cout.width(7);
        std::cout<<x*x<<"\n";
    }
    return 0;
}