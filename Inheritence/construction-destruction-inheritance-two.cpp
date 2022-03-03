#include<iostream>
class base
{
public:
    base(){std::cout<<"Constructing base class\n";}
    ~base(){std::cout<<"Destructing base class\n";}
};
class derived:public base
{
    int j;
public:
    derived(int n){
        std::cout<<"Constructing derived class\n";
        j=n;
    }
    ~derived(){std::cout<<"Destructing derived class\n";}
    void show_valueOfJ(){std::cout<<j<<"\n";}
};
int main(){
    derived o(10);
    o.show_valueOfJ();
    return 0;
}