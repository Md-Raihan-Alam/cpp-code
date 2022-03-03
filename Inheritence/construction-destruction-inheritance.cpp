#include<iostream>
class base
{
public:
    base(){
        std::cout<<"Constructing base class\n";
    }
    ~base(){
        std::cout<<"Destructing base class\n";
    }
};
class derived:public base
{
public:
    derived(){
        std::cout<<"Constructing derived class\n";
    }
    ~derived()
    {
        std::cout<<"Destructing derived class\n";
    }
};
int main()
{
    derived ob;
    return 0;
}