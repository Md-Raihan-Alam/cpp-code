#include<iostream>
#include<new>
int main()
{
    double *p;
    do{
        p=new(std::nothrow) double[100000];// returns null on failure but exceptions provide a better alternative
        if(p) std::cout<<"Allocation ok\n";
        else std::cout<<"Allocaion error\n";
    }while(p);
    return 0;
}