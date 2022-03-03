#include<iostream>
class base
{
    int i;
public:
    base(int n)
    {
        std::cout<<"Constructing base class\n";
        i=n;
    }
    ~base(){
        std::cout<<"Destructing base class\n";
    }
    void show()
    {
        std::cout<<i<<"\n";
    }
};
class derived:public base
{
    int j;
    public:
    derived(int n):base(n){///pass arg to base class
    std::cout<<"Constructing derived class\n";
    j=n;
    }
    ~derived(){
        std::cout<<"Destructing derivec class\n";
    }
    void showValueJ(){
        std::cout<<j<<"\n";
    }
};
int main()
{
    derived o(10);
    o.show();
    o.showValueJ();
    return 0;
}