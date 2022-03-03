#include<iostream>
class base
{
    int x;
public:
    void set_value(int n){ x=n;}
    void show_value(){ std::cout<<x<<"\n";}
};
///Inheritance -as public
class derived:public base
{
    int y;
public:
    ////void set_valueOfX(int n){ x=n;} will show error because inheritance class can not access its parents private class
    void set_valueOfY(int n){ y=n;}
    void show_valueOfY(){std::cout<<y<<"\n";}
};
int main()
{
    derived ob;
    ob.set_value(10);///access member of base class
    ob.set_valueOfY(20);///access member of derived class
    ob.show_value();///access member of base class
    ob.show_valueOfY();///access member of derived class
    return 0;
}