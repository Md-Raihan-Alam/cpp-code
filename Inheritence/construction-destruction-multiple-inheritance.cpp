#include<iostream>
class BASE{
    public:
    BASE(){std::cout<<"Constructing base class\n";}
    ~BASE(){std::cout<<"Destructing base class\n";}
};
class D1{
    public:
    D1(){std::cout<<"Constructing derived one class\n";}
    ~D1(){std::cout<<"Destructing derived one class\n";}
};
class D2:public BASE,public D1{
    public:
    D2(){std::cout<<"Constructing derived two class\n";}
    ~D2(){std::cout<<"Destructing derived two class\n";}
};
int main()
{
    D2 o;
    return 0;
}