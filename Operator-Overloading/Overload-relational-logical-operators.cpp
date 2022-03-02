#include<iostream>
class coord
{
    int x,y;///coordinate values
public:
    coord() { x=0;y=0;}
    coord(int i,int j){ x=i;y=j;}
    void get_value(int &i,int &j){ i=x;j=y;}
    int operator==(coord ob2);
    int operator&&(coord ob2);
};
///Overload the == operator for coord
int coord::operator==(coord ob2)
{
    return x==ob2.x && y==ob2.y;
}
///Overload the && operator for coord
int coord::operator&&(coord ob2)
{
    return (x&&ob2.x)&&(y&&ob2.y);
}
int main()
{
    coord o1(20,20),o2(3,4),o3(20,20),o4(0,0);
    if(o1==o2) std::cout<<"o1 same as o2"<<std::endl;
    else std::cout<<"o1 and o2 differ"<<std::endl;
    if(o1==o3) std::cout<<"o1 same as o3"<<std::endl;
    else std::cout<<"o1 and o3 differ"<<std::endl;
    if(o1&&o3) std::cout<<"o1 && o3 is true"<<std::endl;
    else std::cout<<"o1 && o3 is false"<<std::endl;
    if(o1&&o4) std::cout<<"o1 && o4 is true"<<std::endl;
    else std::cout<<"o1 & o4 is false"<<std::endl;
    return 0;
}