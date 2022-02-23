/**
Now that the address of an object is passed to sqr_it(),
he function can modify the value of the argument whose address
is used in the call.
**/
#include<iostream>
class samp
{
    int i;
public:
    samp(int n) {i=n;}
    void set_i(int n) {i=n;}
    int get_i() { return i;}
};
/**
Set o.i to its square. This affects the calling argument.
**/
void sqr_it(samp *o)
{
    o->set_i(o->get_i()*o->get_i());
    std::cout<<"Copy of a has i value of "<<o->get_i();
    std::cout<<"\n";
}
int main()
{
    samp a(10);
    sqr_it(&a);/// pass a's address to sqr_it()
    std::cout<<"Now, a in main() has been changed: ";
    std::cout<<a.get_i();///displays 100
    return 0;
}
