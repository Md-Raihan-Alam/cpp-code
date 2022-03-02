#include<iostream>
class coord
{
    int x,y;///coordinate values
public:
    coord(){ x=0;y=0; }
    coord(int i,int j){ x=i;y=j;}
    void get_value(int &i,int &j){ i=x;j=y;}
    coord operator++();///unary plus
    coord operator--();///unary minus
    coord operator-();///negation
};
///Overload ++ for coord class
coord coord::operator++()
{
    x++;
    y++;
    return *this;
}
///Overload unary - for coord class
coord coord::operator-()
{
    x=-x;
    y=-y;
    return *this;
}
///Overload unary -- for coord class
coord coord::operator--()
{
    x--;
    y--;
    return *this;
}
int main()
{
    coord o1(10,10);
    int x,y;
    ++o1;///increment an object
    o1.get_value(x,y);
    std::cout<<"(++o1) X: "<<x<<", Y: "<<y<<std::endl;
    --o1;///decrement an object
    o1.get_value(x,y);
    std::cout<<"(--o1) X: "<<x<<", Y: "<<y<<std::endl;
    o1=-o1;///negation
    o1.get_value(x,y);
    std::cout<<"(-o1) X: "<<x<<", Y: "<<y<<std::endl;
    return 0;
}