#include<iostream>
class samp{
    int i,j;
public:
    samp(int a,int b){i=a;j=b;}
    int get_product(){ return i*j; }
};
int main()
{
    samp *p;
    p=new samp(9,10);///allocate memory and initial
    if(!p){
        std::cout<<"Allocation error\n";
        return 0;
    }
    std::cout<<"The product is "<<p->get_product();
    delete p;
    return 0;
}
