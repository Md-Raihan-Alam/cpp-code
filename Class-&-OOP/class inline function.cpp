#include<iostream>
class samp
{
    int i,j;
public:
    samp(int a,int b);
    int divisible();///in line in its definition
};
samp::samp(int a,int b)
{
    i=a;
    j=b;
}
/** Return 1 if i is evenly divisible by j
This member function is expanded in line
**/
inline int samp::divisible()
{
    return !(i%j);
}
int main()
{
    samp ob(10,2), ob2(12,7);
    ///this is true
    if(ob.divisible()) std::cout<<"10 is divisible by 2";
    if(ob2.divisible()) std::cout<<"12 is divisible by 7";
    return 0;
}
