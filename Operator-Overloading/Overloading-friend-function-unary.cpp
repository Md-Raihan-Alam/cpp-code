#include<iostream>
class coord
{
    int x,y;///coordinate values
public:
    coord(){x=0;y=0;}
    coord(int i,int j){x=i;y=j;}
    void get_value(int &i,int &j){ i=x;j=y;}
    friend coord operator++(coord &ob);
};
///Overload ++ using a friend
coord operator++(coord &ob)///use reference parameter
{
    ob.x++;
    ob.y++;
    return ob;///return object generating the call
} 
int main()
{
    coord o1(10,10);
    int x,y;
    ++o1;//o1 is passed by reference
    o1.get_value(x,y);
    std::cout<<"(++o1) X:"<<x<<", Y:"<<y<<std::endl;
    return 0;
}