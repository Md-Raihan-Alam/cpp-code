#include<iostream>
int nums(int a=0,int b=0)///default arguments
{
    std::cout<<"a:"<<a<<" b:"<<b<<std::endl;
}
int main()
{
    nums();
    nums(19);
    nums(20,43);
    return 0;
}