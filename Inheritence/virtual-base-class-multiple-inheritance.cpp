#include<iostream>
class base{
    public:
    int i;
};
///inherit base as virtual
class derived1:virtual public base{
    public:
    int j;
};
///inherit base as virtual here too
class derived2:virtual public base{
    public:
    int k;
};
///Here derived 3 inherits both derived 1 and derived2. However only one copy of base is present
class derived3:public derived1,public derived2{
    public:
    int product(){ return i*j*k;}
};
int main()
{
    derived3 ob;
    ///base is also present in other classes
    ///derived1 ob;
    ///ob.i=100
    ob.i=10;///unambiguous because only one copy present
    ob.j=3;
    ob.k=5;
    std::cout<<"Product is "<<ob.product()<<"\n";
    return 0;
}