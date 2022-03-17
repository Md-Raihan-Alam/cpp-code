///Virtual functions are hierarchical
#include<iostream>
class base{
    public:
    int i;
    base(int x){i=x;}
    virtual void func()
    {
        std::cout<<"Using base version of func()";
        std::cout<<i<<std::endl;
    }
};
class derived1:public base{
    public:
    derived1(int x):base(x){}
    void func(){
        std::cout<<"Using derved's version of func()";
        std::cout<<i*i<<std::endl;
    }
};
class derived2:public base{
    public:
    derived2(int x):base (x){}
    ///derived2 does not override func()
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
    p->func();///use base's func()
    return 0;
}