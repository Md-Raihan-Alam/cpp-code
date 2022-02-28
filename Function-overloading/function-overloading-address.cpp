#include<iostream>
///output count number of *
void space(int count)
{
    for(;count;count--) std::cout<<"*";
}
///output count number of chs
void space(int count,char ch)
{
    for(;count;count--) std::cout<<ch;
}
int main()
{
    /** 
     Create a pointer to void function with one int parameter
    **/
   void (*fp1)(int);
   /**
   Create a pointer to void function with one parameter and one character parameter
   **/
    void (*fp2)(int,char);
    fp1=space;///gets address of space(int)
    fp2=space;///gets address of space(int, char)
    fp1(22);///output * 22 times
    std::cout<<"\n";
    fp2(30,'x');///output 30 x's
    return 0;
}