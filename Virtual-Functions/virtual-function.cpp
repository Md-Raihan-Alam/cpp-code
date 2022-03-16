/// a simple example using a virtual function
#include<iostream>
class base
{
    public:
    int i;
    base(int x){i=x;}
    virtual void func(){
        std::cout<<"Using ase version of func():";
        std::cout<<i<<std::endl;
    }
};
class derived1: public base{
    public:
    derived1(int x):base(x){
    }
    void func(){
        std::cout<<"Using derived1's version of func():";
        std::cout<<i*i<<std::endl;
    }
};
class derived2:public base{
    public:
    derived2(int x):base(x){}
    void func(){
        std::cout<<"Using derived2's version of func():";
        std::cout<<i+i<<std::endl;
    }
};
int main()
{
    base *p;
    base ob(10);
    derived1 d_ob1(10);
    derived2 d_ob2(10);
    p=&ob;
    p->func();///use base's func()
    p=&d_ob1;
    p->func();///use derived1's func()
    p=&d_ob2;
    p->func();///use derived1's func()
    return 0;
}