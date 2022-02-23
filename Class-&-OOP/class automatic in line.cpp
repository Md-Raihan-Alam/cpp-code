#include<iostream>
class samp{
    int i,j;
public:
    samp(int a,int b){ i=a;j=b;}
    int divisible(){ return !(i%j);}
};
int main()
{
    samp ob1(10,2),ob2(10,3);
    ///this is true
    if(ob1.divisible()) std::cout<<"10 is divided by 2";
    if(ob2.divisible()) std::cout<<"10 is divided by 3";
    return 0;
}
