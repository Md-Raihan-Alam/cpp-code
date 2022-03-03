#include<iostream>
class base
{
protected:
    int a,b;///private to base
public:
    void set_ab(int n,int m){a=n;b=m;}
};
class derived:public base
{
    int c;
public:
    void set_c(int n){c=n;}
    ///this function has access to a and b from base
    void showabc(){
        std::cout<<a<<" "<<b<<" "<<c<<"\n";
    }
};
int main()
{
    derived ob;
    /**
    a and b are not accessible here because they are private to both base and derived
    **/
   ob.set_ab(1,2);
   ob.set_c(400);
   ob.showabc();
   return 0;
}