#include<iostream>
class coord
{
    int x,y;
public:
    coord(){x=0;y=0;}
    coord(int i,int j){x=i;y=j;}
    friend std::ostream &operator<<(std::ostream &stream,coord ob);///inserter
};
std::ostream &operator<<(std::ostream &stream,coord ob)
{
    stream<<ob.x<<", "<<ob.y<<"\n";
    return stream;
}
int main()
{
    coord a(1,1),b(10,23);
    std::cout<<a<<b<<std::endl;
    return 0;
}