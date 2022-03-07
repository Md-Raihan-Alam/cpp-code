#include<iostream>
#include<conio.h>
class triangle{
    int height,base;
public:
    triangle(int h,int b){height=h;base=b;}
    friend std::ostream &operator<<(std::ostream &stream,triangle ob);
};
///Draw a triangle
std::ostream &operator<<(std::ostream &stream,triangle ob)
{
    int i,j,h,k;
    i=j=ob.base-1;
    for(h=ob.height-1;h;h--){
        for(k=i;k;k--)
            stream<<" ";
        stream<<"*";
        if(j!=i){
        for(k=j-i-1;k;k--)
            stream<<" ";
        stream<<"*";
    }
    i--;
    stream<<"\n";
    }
    for(k=0;k<ob.base;k++) stream<<"*";
    stream<<"\n";
    return stream;
}
int main()
{
    triangle t1(5,5), t2(10,10),t3(20,20);
    std::cout<<t1<<std::endl;
    std::cout<<t2<<std::endl;
    std::cout<<t3<<std::endl;
    getch();
}