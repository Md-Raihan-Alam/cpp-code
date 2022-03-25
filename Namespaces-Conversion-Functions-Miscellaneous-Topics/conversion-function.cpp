// a simple conversion function example
#include<iostream>
using namespace std;
class coord{
    int x,y;
    public:
    coord(int i,int j){x=i;y=j;}
    operator int(){return x*y;}// conversion function
};
int main()
{
    coord o1(2,3),o2(4,3);
    int i;
    i=o1;//automatically convert to integer
    cout<<i<<endl;
    i=100+o2;//convert o2 to integer
    cout<<i<<endl;
    return 0;
}