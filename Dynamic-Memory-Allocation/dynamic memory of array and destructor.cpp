#include<iostream>
class samp{
    int i,j;
public:
    void set_ij(int a,int b) { i=a;j=b;}
    ~samp() { std::cout<<"Destroying...\n";}
    int get_product(){ return i*j;}
};
int main()
{
    samp *p;
    int i;
    p=new samp[10];///allocate object array
    if(!p){
        std::cout<<"Allocation error\n";
        return i;
    }
    for(i=0;i<10;i++){
        p[i].set_ij(i,i);
    }
    for(i=0;i<10;i++){
        std::cout<<"Product ["<<i<<"] is:";
        std::cout<<p[i].get_product()<<"\n";
    }
    delete [] p;
    return 0;
}
