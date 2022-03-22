///Overriding a template function
#include<iostream>
template <class X> void swapargs(X &a,X &b)
{
    X temp;
    temp=a;
    a=b;
    b=temp;
}
//This overrides the generic versionof swapargs()
void swapargs(int a,int b)
{
    std::cout<<"This is inside swapargs(int,int)\n";
}
int main()
{
    float i=10,j=20;
    float x=10.01,y=23.3;
    std::cout<<"Original i,j: "<<i<<" "<<j<<std::endl;
    std::cout<<"Original x,y: "<<x<<" "<<y<<std::endl;
    swapargs(i,j);// calls overloaded swapargs()
    swapargs(x,y);//swap floats
    std::cout<<"Swapped i,j: "<<i<<" "<<j<<std::endl;
    std::cout<<"Swapped x,y: "<<x<<" "<<y<<std::endl;
    return 0;
}