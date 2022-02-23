#include<iostream>
///Overload min() three ways
///integers
inline int mini(int a,int b)
{
    return a<b ? a:b;
}
///longs
inline long mini(long a,long b)
{
    return a<b ? a:b;
}
///doubles
inline double mini(double a,double b)
{
    return a<b ? a:b;
}
int main()
{
    std::cout<<mini(-10,10)<<" "<<mini(-10.01,100.002)<<" "<<mini(-10L,12L)<<"\n";
    return 0;
}
