#include<iostream>
///define the base class
class B
{
    int i;
public:
    void set_i(int n);
    int get_i();
};
/** general form
class derived-class-name:access-specifier base-class-name
**/
///define derived class
class D: public B
{
    int j;
public:
    void set_j(int n);
    int mul();
};
///Set value i in base
void B::set_i(int n)
{
    i=n;
}
///Return value of i in base
int B::get_i()
{
    return i;
}
///set value of j in derived
void D::set_j(int n)
{
    j=n;
}
///return value of base's i items derived's j
int D::mul()
{
    ///derived class can get base class public member functions
    return j*get_i();
}
int main()
{
    D ob;
    ob.set_i(40);/// i in base
    ob.set_j(5);///load j in derived
    std::cout<<ob.mul();///displays 200
    return 0;
}
