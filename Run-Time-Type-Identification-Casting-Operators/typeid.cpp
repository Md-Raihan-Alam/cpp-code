//Typeid displays the types of objects pointer; It first obtains type information about one of the C++'s built-in types
#include<iostream>
#include<typeinfo>
using namespace std;
class BaseClass{
    virtual void f(){};// make BaseCLass polymorphic
};
class Derived1:public BaseClass{

};
class Derived2:public BaseClass{

};
int main()
{
    int i;
    BaseClass *p,baseob;
    Derived1 ob1;
    Derived2 ob2;
    //First, display type name of a built-in type
    cout<<"Typeid of i is ";
    cout<<typeid(i).name()<<endl;
    //Demonstrate typeid with polymorphic types
    p=&baseob;
    cout<<"p i spointing to an object of type ";
    cout<<typeid(*p).name()<<endl;
    p=&ob1;
    cout<<"p is pointing to an object of type ";
    cout<<typeid(*p).name()<<endl;
    p=&ob2;
    cout<<"p is pointing to an object of type ";
    cout<<typeid(*p).name()<<endl;
    return 0;
}