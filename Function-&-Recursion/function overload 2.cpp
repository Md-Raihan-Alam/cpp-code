#include<iostream>
/// overload abs() three ways
int abs(int n);
long abs(long n);
double abs(double n);
int main()
{
    std::cout<<"Absolute value of -10: "<<abs(-10)<<std::endl;
    std::cout<<"Absolute value of -10L: "<<abs(-10L)<<std::endl;
    std::cout<<"Absolute value of -10.01: "<<abs(-10.01)<<std::endl;
    return 0;
}
///abs() for ints
int abs(int n)
{
    std::cout<<"In integer abs()\n";
    return n<0 ? -n:n;
}
///abs() for longs
long abs(long n)
{
    std::cout<<"In long abs()\n";
    return n<0? -n:n;
}
///abs() for double
double abs(double n)
{
    std::cout<<"Int double abs()\n";
    return n<0? -n:n;
}
