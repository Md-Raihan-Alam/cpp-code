//Use a reference with typeid
#include<iostream>
#include<typeinfo>
using namespace std;
class BaseClass{
    virtual void f(){};//make BaseClass polymorphic
};
class derived1:public BaseClass
{

};
class derived2:public BaseClass
{
    
};
//Demonstrate typeid with a reference parameter
void WhatType(BaseClass &ob)
{
    cout<<"ob is referencing an object of type ";
    cout<<typeid(ob).name()<<endl;
}
int main()
{
    int i;
    BaseClass baseob;
    derived1 ob1;
    derived2 ob2;
    WhatType(baseob);
    WhatType(ob1);
    WhatType(ob2);
    return 0;
}