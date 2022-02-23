#include<iostream>
class myClass
{
    int a,b;
public:
    void setData(int i,int j){ a=i;b=j;}
    void show(){std::cout<<a<<" "<<b<<"\n";}
};
/**
This class is similar to myClass but uses a different class name and thus appears as a different type to the compliler
**/
class yourClass
{
    int a,b;
    public:
    void setData(int i,int j){ a=i;b=j;}
    void show(){std::cout<<a<<" "<<b<<"\n";}
};
int main()
{
    myClass ob1,ob2;
    yourClass ob3;
    ob1.setData(10,12);
    ob2=ob1;///This will work
    ob2.show();
    ///ob3=ob1;->This will show error because both class are different
    return 0;
}
