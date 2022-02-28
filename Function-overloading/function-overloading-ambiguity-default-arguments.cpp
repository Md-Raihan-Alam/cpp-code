#include<iostream>
int f(int a)
{
    return a*a;
}
int f(int a,int b=10)
{
    return a*b;
}
int main()
{
    std::cout<<f(10,2);//calls f(int,int)
    std::cout<<f(10);///ambiguous call f(int) or f(int,int)???
    return 0;
}