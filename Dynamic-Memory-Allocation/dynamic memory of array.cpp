#include<iostream>
int main()
{
    int *p;
    p=new int [5];///allocate dynamic array for 5 integers
    if(!p){///if allocation fails then p returns false/null
        std::cout<<"Allocation error"<<std::endl;
        return 0;
    }
    int i;
    for(i=0;i<5;i++){
        p[i]=i;
    }
    for(i=0;i<5;i++){
        std::cout<<"Here is integer at p["<<i<<"]"<<":"<<i<<"\n";
    }
    delete [] p;///release memory; for array
    return 0;
}
