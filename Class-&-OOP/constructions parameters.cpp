#include<iostream>
class myClass
{
    int a,b;
public:
    myClass(int x,int y);
    void show();
};
myClass::myClass(int x,int y)
{
    std::cout<<"In construction\n";
    a=x;
    b=y;
}
void myClass::show()
{
    std::cout<<a<<" "<<b<<std::endl;
}
int main()
{
    myClass obj1(4,6),obj2(10,12);
    obj1.show();
    obj2.show();
    return 0;
}
