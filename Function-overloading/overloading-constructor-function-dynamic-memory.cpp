#include<iostream>
class myClass
{
    int x;
public:
    ///overload constructor two ways
    myClass(){x=0;}///no initializer
    myClass(int n){x=n;}///initializer
    int getValue(){return x;}
    void setValue(int n){ x=n;}
};
int main()
{
    myClass *p;
    myClass ob(10);///initialize with single value
    p=new myClass[10];///can not use initializer here
    if(!p){
        std::cout<<"Allocation failed";
        return 0;
    }
    int i;
    ///initialize all elements to ob
    for(i=0;i<10;i++){
        std::cout<<"p["<<i<<"]:"<<p[i].getValue()<<std::endl;
    }
    return 0;
}