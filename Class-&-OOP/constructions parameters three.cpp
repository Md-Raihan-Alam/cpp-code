#include<iostream>
class myClass
{
    int i,j;
public:
    myClass(int a,int b);
    void show();
};
myClass::myClass(int a,int b)
{
    i=a;
    j=b;
}
void myClass::show()
{
    std::cout<<i<<" "<<j<<std::endl;
}
int main()
{
    int num1,num2;
    std::cout<<"Enter first number=";
    std::cin>>num1;
    std::cout<<"Enter second number=";
    std::cin>>num2;
    myClass obj1(num1,num2);
    obj1.show();
    return 0;
}
