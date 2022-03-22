#include<iostream>
#include<new>
int main()
{
    double *p;
    //this will eventually run out of memory
    do{
        try{
            p=new double[100000];
        }catch(std::bad_alloc xa){
            std::cout<<"Allocation failure\n";
            return 1;
        }
        std::cout<<"Allocation ok.\n";
    }while(p);
    return 0;
}