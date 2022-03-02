#include<iostream>
class coord
{
    int x,y;///coordinate values
public:
    coord(){x=0;y=0;}
    coord(int i,int j){ x=i;y=j;}
    void get_values(int &i,int &j){i=x;j=y;}
    friend coord operator+(coord ob1,int i);
    friend coord operator+(int i,coord ob1);
};
///Overload for ob+int
coord operator+(coord ob1,int i)
{
    coord temp;
    temp.x=ob1.x+i;
    temp.y=ob1.y+i;
    return temp;
}
///Overload for int+ob
coord operator+(int i,coord ob1)
{
    coord temp;
    temp.x=ob1.x+i;
    temp.y=ob1.y+i;
    return temp;
}
int main()
{
    coord ob1(10,10),ob2(50,50);
    int x,y;
    ob1=ob1+30;///object+int
    ob1.get_values(x,y);
    std::cout<<"(object+int) X:"<<x<<", Y:"<<y<<std::endl;
    ob2=40+ob2;////int+object
    ob2.get_values(x,y);
    std::cout<<"(Int+Object) X:"<<x<<", Y:"<<y<<std::endl;
    return 0;
}
