/* This example illustrates how a virtual function can be used to respond to random events occurring at run time*/
#include<iostream>
#include<cstdlib>
class base{
    public:
    int i;
    base(int x){i=x;}
    virtual void func(){
        std::cout<<"Using base version of func():";
        std::cout<<i<<std::endl;
    }
};
class derived1:public base{
    public:
    derived1(int x):base(x){}
    void func()
    {
        std::cout<<"Using derived1's version of func():";
        std::cout<<i*i<<std::endl;
    }
};
class derived2: public base{
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
    derived1 d_ob1(10);
    derived2 d_ob2(10);
    int i,j;
    for(i=0;i<10;i++){
        j=rand();
        if((j%2)) p=&d_ob1;//if odd use d_ob1
        else p=&d_ob2;// if even use d_ob2
        p->func();//call appropriate function
    }
    return 0;
}