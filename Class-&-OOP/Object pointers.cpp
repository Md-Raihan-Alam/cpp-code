#include<iostream>
class myClass
{
    int a;
public:
    myClass(int x);///Constructor
    int get();
};
myClass::myClass(int x)
{
    a=x;
}
int myClass::get()
{
    return a;
}
int main()
{
    myClass ob(120);///create object
    myClass *p;///create pointer to object
    p=&ob;///put address pointer into p
    std::cout<<"Value using object: "<<ob.get()<<"\n";
    std::cout<<"Value using pointer: "<<p->get();
    return 0;
}
