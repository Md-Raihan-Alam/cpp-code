#include<iostream>
template <class MyType> class MyClass{// generic class call
    MyType p1;
    MyType p2;
    public:
    MyClass(MyType x,MyType y){ //generic class constructor
        p1=x;
        p2=y;
    }
    void WhatYouGot(){
        std::cout<<"I got p1="<<p1<<" and p2= "<<p2<<std::endl;
    }
};
int main()
{
    MyClass<int> intObject(10,25);/// generic class object set
    intObject.WhatYouGot();
    MyClass<std::string> stringObj("String-One","String-Two");///generic class object set
    stringObj.WhatYouGot();
    return 0;
}