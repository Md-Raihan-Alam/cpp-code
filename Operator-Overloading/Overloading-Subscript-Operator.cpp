#include<iostream>
#define SIZE 5
class arrayType{
    int a[SIZE];
public:
    arrayType(){
        int i;
        for(i=0;i<SIZE;i++) a[i]=i;
    }
    int operator[](int i){ return a[i];}
};
int main()
{
    arrayType ob;
    int i;
    for(i=0;i<SIZE;i++){
        std::cout<<ob[i]<<" ";
    }
    return 0;
}