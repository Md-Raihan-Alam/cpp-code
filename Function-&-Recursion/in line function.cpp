#include<iostream>
inline int even(int x)///inline function is not actually called but rather are expanded in line at the point of each call
{
    return !(x%2);
}
int main()
{
    if(even(10)) std::cout<<"10 is even\n";/**is equivalent to if(!(10%2)) std::cout<<"10" is even"; same for below**/
    if(even(11)) std::cout<<"11 is even\n";
    return 0;
}
