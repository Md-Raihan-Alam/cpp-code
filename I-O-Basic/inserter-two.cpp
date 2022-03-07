/**Create an inserter for objects of type coord, using a non-friend inserter**/
#include<iostream>
class coord
{
    public:
    int x,y;///must be public
    coord(){x=0;y=0;}
    coord(int i,int j){x=i;y=j;}
};
///an inserter for the coord class
std::ostream &operator<<(std::ostream &stream,coord ob)
{
    stream<<ob.x<<", "<<ob.y<<std::endl;
    return stream;
}
int main()
{ 
    coord a(1,12),b(10,130);
    std::cout<<a<<b<<std::endl;
    return 0;
}