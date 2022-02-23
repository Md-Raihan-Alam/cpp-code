#include<iostream>
class myClass
{
    ///private to myclass
    int a;
public:
    void set_a(int num);
    int get_a();
};
/**
the best way to access member function syntax is
ret-type class-name::func-name(parameter-list)
{
    ->body of function
}
**/
///access member function like this
void myClass::set_a(int num)
{
    a=num;
}
int myClass::get_a()
{
    return a;
}
int main()
{
    myClass ob1,ob2;///these are objects of type myClass
    ob1.set_a(20);
    ob2.set_a(99);
    std::cout<<ob1.get_a()<<std::endl;
    std::cout<<ob2.get_a()<<std::endl;
    return 0;
}
