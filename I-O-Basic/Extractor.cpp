#include<iostream>
#include<conio.h>
class coord
{
    int x,y;
public:
    coord(){x=0;y=0;}
    coord(int i,int j){x=i;y=j;}
    friend std::ostream &operator<<(std::ostream &stream,coord ob);
    friend std::istream &operator>>(std::istream &stream,coord ob);
};
std::ostream &operator<<(std::ostream &stream,coord ob)
{
    stream<<ob.x<<" "<<ob.y<<"\n";
    return stream;
}
std::istream &operator>>(std::istream &stream,coord ob){
    std::cout<<"Enter coordinates:";
    stream>>ob.x>>ob.y;
    return stream;
}
int main()
{
    coord a(1,1),b(10,12);
    std::cout<<a<<b;
    std::cin>>a;
    std::cout<<a;
    getch();
}