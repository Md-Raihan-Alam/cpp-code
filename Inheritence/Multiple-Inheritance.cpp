#include<iostream>
class B1
{
    int a;
public:
    B1(int x){a=x;}
    int getA(){return a;}
};
///inherit direct base class
class D1:public B1{
    int b;
public:
    D1(int x,int y):B1(y){///pass y to B1
        b=x;
    }
    int getB(){
        return b;
    }
};
///inherit a derived class and an indirect base
class D2:public D1{
    int c;
public:
    D2(int x,int y,int z):D1(y,z){///pass arg to D1
        c=x;
    }
/**
Because bases inherited as public, D2 has access to public elements of both B1 and D1 
**/
    void show()
    {
        std::cout<<getA()<<" "<<getB()<<" "<<c<<std::endl;
    }
};
int main()
{
    D2 ob(1,2,3);
    ob.show();
    ///getA() and getB() are still public here
    std::cout<<ob.getA()<<" "<<ob.getB()<<"\n";
    return 0;
}