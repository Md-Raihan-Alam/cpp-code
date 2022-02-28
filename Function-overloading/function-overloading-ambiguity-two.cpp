#include<iostream>
void f(unsigned char c)
{
    std::cout<<c;
}
void f(char c)
{
    std::cout<<c;
}
int main()
{
    f('c');
    f(86);//which f() is called???
    return 0;
}