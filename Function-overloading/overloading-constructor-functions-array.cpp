#include<iostream>
class myClass{
    int x;
public:
    ///overload constructor two ways
    myClass(){x=0;}///no initializer
    myClass(int n){x=n;}///initializer
    int getx(){ return x; }
};
int main()
{
    myClass o1[10];///declare with initial value
    myClass o2[10]={1,2,3,4,5,6,7,8,9,10};///initializer
    for(int i=0;i<10;i++){
        std::cout<<"o1["<<i<<"]:"<<o1[i].getx();
        std::cout<<"\n";
        std::cout<<"o2["<<i<<"]:"<<o2[i].getx()<<std::endl;
    }
    return 0;
}