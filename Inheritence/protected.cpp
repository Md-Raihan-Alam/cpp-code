#include<iostream>
class samp{
    ///private by default
    int a;
protected:
    int b;///still private to samp
public:
    int c;
    samp(int n,int m){ a=n;b=m;}
    int get_valueOfA(){return a;}
    int get_valueOfC(){return c;}
};
int main()
{
    samp ob(10,20);
    ///ob.b=99; Error! b is protected and thus private
    ob.c=30;//Ok, c is public
    std::cout<<ob.get_valueOfA()<<" "<<ob.get_valueOfC()<<std::endl;
    return 0;
}