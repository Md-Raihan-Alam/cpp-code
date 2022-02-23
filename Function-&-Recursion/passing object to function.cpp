#include<iostream>
class samp
{
    int i;
public:
    samp(int n) {i=n;}
    int get_i() { return i; }
};
///Return square of o.i.
int sqr_it(samp o)
{
    return o.get_i()*o.get_i();
}
int main()
{
    samp a(10),b(2);
    std::cout<<sqr_it(a)<<"\n"<<sqr_it(b);
    return 0;
}
