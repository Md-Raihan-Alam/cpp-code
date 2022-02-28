#include<iostream>
float f(float i)
{
    return i/2.5;
}
double f(double i)
{
    return i/3.0;
}
int main()
{
    float x=10.00;
    double y=10.09;
    std::cout<<f(x);//unambigous -use f(float)
    std::cout<<f(y);//unambigous -use f(float)
    std::cout<<f(10);//ambigouse,convert 10 to double or float
    return 0;
}