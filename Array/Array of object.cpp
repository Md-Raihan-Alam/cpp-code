#include<iostream>
class samp
{
    int a;
public:
    void set_a(int n) { a=n; }
    int get_a() { return a;}
};
int main()
{
    samp ob[4];///array of object
    for(int i=0;i<4;i++) ob[i].set_a(i);///input
    for(int i=0;i<4;i++) std::cout<<ob[i].get_a()<<" ";///output
    return 0;
}
