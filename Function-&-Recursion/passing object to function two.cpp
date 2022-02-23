#include<iostream>
class samp
{
    int i;
public:
    samp(int n) {i=n;}
    void set_i(int n){ i=n;}
    int get_i() {return i;}
};
/**
Set o.i to its square. This has no effect on the object used to call sqr_it(), however,
**/
void sqr_it(samp o)
{
    o.set_i(o.get_i()*o.get_i());
    std::cout<<"Copy of a has i value of "<<o.get_i();
    std::cout<<"\n";
}
int main()
{
    samp a(10);
    sqr_it(a);///a passed by value
    std::cout<<"But , a.i is unchanged in main: ";
    std::cout<<a.get_i();///displays 10
    return 0;
}
