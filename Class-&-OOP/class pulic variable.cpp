#include<iostream>
class myClass
{
public:
    ///a is public
    int a;
    ///and there is no need for set_a() or get_a()
};
int main()
{
    myClass ob1,ob2;
    ob1.a=10;
    ob2.a=20;
    std::cout<<ob1.a<<"\n"<<ob2.a<<std::endl;
    return 0;
}
