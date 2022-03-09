#include<iostream>
std::ostream &setup(std::ostream &stream)
{
    stream.width(10);
    stream.precision(4);
    stream.fill('*');
    return stream;
}
int main()
{
    std::cout<<setup<<123.543432;
    return 0;
}