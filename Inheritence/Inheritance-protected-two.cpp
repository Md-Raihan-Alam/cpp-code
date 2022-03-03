#include<iostream>
class base
{
    protected:///private to base
    int a,b;///but still accessible by derived
    public:
    void set_value(int n,int m){a=n;b=m;}
};
class derived:protected base{///inherit as protected
    int c;
public:
    void set_valueOfC(int n){c=n;}
    ///void set_valueOfC(int n,int i,int j){c=n;set_value(i,j);} can be access like this
    ///this function has access to a and b from base
    void showabc(){
        std::cout<<a<<" "<<b<<" "<<c<<"\n";
    }
};
int main()
{
    derived ob;
    ///Error: set_value() is now a protected member of base
    ///ob.set_value(2,4); is not accessible here
    // ob.set_valueOfC(3,5,6);
    ob.set_valueOfC(3);
    ob.showabc();
    return 0;
}