#include<iostream>
class samp
{
    int a,b;
public:
    samp(int n,int m) { a=n;b=m;}
    int get_a() { return a; }
    int get_b() { return b; }
};
int main()
{
    samp ob[4][2]={
    samp(1,2), samp(3,4),
    samp(5,6), samp(7,8),
    samp(9,10), samp(11,12),
    samp(13,14), samp(15,16),
    };
    for(int i=0;i<4;i++){
        std::cout<<ob[i][0].get_a()<<" ";
        std::cout<<ob[i][0].get_b()<<"\n";
        std::cout<<ob[i][1].get_a()<<" ";
        std::cout<<ob[i][1].get_b()<<"\n";
        }
    return 0;
}
