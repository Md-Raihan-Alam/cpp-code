#include<iostream>
template <class X, class Y>
void myFunc(X dataOne,Y dataTwo)
{
    std::cout<<dataOne<<" "<<dataTwo<<std::endl;
}
int main(void)
{
    myFunc(10,"Hi");
    myFunc(0.23,10L);
    return 0;
}