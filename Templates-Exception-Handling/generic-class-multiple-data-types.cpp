#include<iostream>
template <class Type1,class Type2> class myClass{
    Type1 i;
    Type2 j;
    public:
    myClass(Type1 a,Type2 b){i=a;j=b;}
    void show(){std::cout<<i<<" "<<j<<std::endl;}
};
int main()
{
    myClass<int,double> ob1(10,0.23);
    myClass<char,std::string> ob2('X',"This is a test");
    ob1.show();//show int,double
    ob2.show();//show char,char *
    return 0;
}