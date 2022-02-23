#include<iostream>
class samp{
    int i,j;
public:
    void set_j(int a,int b){ i=a;j=b;}
    int get_product(){ return i*j;}
};
int main()
{
    samp *p;
    p=new samp;///allocate object
    if(!p){
        std::cout<<"Allocation error"<<std::endl;
        return 0;
    }
    p->set_j(2,2);
    std::cout<<"Product is "<<p->get_product();
    delete p;
    return 0;
}
