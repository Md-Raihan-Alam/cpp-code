#include<iostream>
int f(int a,int b)
{
    return a+b;
}
///this is inherently ambiguous
int f(int a,int &b)
{
    return a-b;
}
int main()
{
    int x=1,y=2;
    std::cout<<f(x,y);///which version of f() is called?
    return 0;
}