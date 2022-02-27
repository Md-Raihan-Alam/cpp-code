#include<iostream>
class myClass{
    int x;
public:
    ///Overload constructor two ways
    myClass(){x=0;}///no initializer
    myClass(int n){x=n;}///initilaizer
    int getx(){ return x; }
};
int main()
{
    myClass o1(10);///declare with initial value
    myClass o2;///declare without initializer
    std::cout<<"o1:"<<o1.getx()<<std::endl;
    std::cout<<"o2:"<<o2.getx()<<std::endl;
    return 0;
}