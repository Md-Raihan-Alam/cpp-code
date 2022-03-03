#include<iostream>
///create first bass class
class B1{
    int a;
public:
    B1(int x){a=x;}
    int getA(){return a;}
};
///create second base class
class B2{
    int b;
public:
    B2(int x)
    {
        b=x;
    }
    int getB(){return b;}
};
///directly inherit two bass classes
class D:public B1,public B2{
    int c;
public:
    ///here z and y are passed directly to B1 and B2
    D(int x,int y,int z):B1(x),B2(y){
        c=z;
    }
    void show()
    {
        std::cout<<getA()<<" "<<getB()<<" "<<c<<std::endl;
    }
};
int main()
{
    D ob(1,2,3);
    ob.show();
    return 0;
}
