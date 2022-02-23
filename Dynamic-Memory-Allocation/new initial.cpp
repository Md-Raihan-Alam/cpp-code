#include<iostream>
int main()
{
    int *p;
    p=new int(9);///allocate memory and initial
    if(!p){
        std::cout<<"Allocation error\n";
        return 0;
    }
    std::cout<<"The integer at p is "<<*p;
    delete p;///release memory
    return 0;
}
