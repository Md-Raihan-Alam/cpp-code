//== and != relative to typeid
#include<iostream>
#include<typeinfo>
using namespace std;
class X{
    virtual void f1(){}
};
class Y{
    virtual void f2(){};
};
int main()
{
    X x1,x2;
    Y y1;
    if(typeid(x1)==typeid(x2))
        cout<<"X1 and X2 are same types"<<endl;
    else 
        cout<<"X1 and X2 are different types"<<endl;
    if(typeid(x1)!=typeid(y1))
        cout<<"X1 and Y1 are different types\n";
    else 
        cout<<"X1 and Y1 are same types\n";
    return 0;
}