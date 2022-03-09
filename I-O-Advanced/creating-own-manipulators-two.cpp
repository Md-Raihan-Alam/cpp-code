#include<iostream>
std::ostream &attention(std::ostream &stream)
{
    stream<<"Attentions:";
    return stream;
}
std::ostream &note(std::ostream &stream)
{
    stream<<"Please Note:";
    return stream;
}
int main()
{
    std::cout<<attention<<"High voltage circuit\n";
    std::cout<<note<<"Turn off all lights\n";
    return 0;
}