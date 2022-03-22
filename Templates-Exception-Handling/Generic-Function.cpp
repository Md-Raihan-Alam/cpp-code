///Function template example
#include<iostream>
///This is  function template
//I can also write like this; mkae sure no other statements can occur between the template statement and the start of the generic function definition
// or else it will be error
template<typename X>
void swapargs(X &a,X &b)
//template <typename X> void swapargs(X &a,X &b) traditional
//template <class X> void swapargs(X &a,X &b) professional
{
    X temp;
    temp=a;
    a=b;
    b=temp;
}
int main()
{
    int i=10,j=20;
    float x=10.1,y=23.3;
    std::cout<<"original i,j: "<<i<<" "<<j<<std::endl;
    std::cout<<"Original x,y:"<<x<<" "<<y<<std::endl;
    swapargs(i,j);//swap integers
    swapargs(x,y);//swap floats
    std::cout<<"Swapped i,j: "<<i<<" "<<j<<std::endl;
    std::cout<<"Swapped x,y:"<<x<<" "<<y<<std::endl;
    return 0;
}