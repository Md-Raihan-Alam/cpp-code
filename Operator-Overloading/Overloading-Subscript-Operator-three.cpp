#include<iostream>
#define SIZE 10
class arrayType
{
    int a[SIZE];
public:
    arrayType(){
        int i;
        for(i=0;i<SIZE;i++) a[i]=i;
    }
    int &operator[](int i);
};
///Provide range checking for  arrayTYpe
int &arrayType::operator[](int i)
{
    if(i<0 || i>SIZE-1)
    {
        std::cout<<"\nIndex value of ";
        std::cout<<i<<" is out of bounds\n";
        exit(1);
    }
    return a[i];
}
int main()
{
    arrayType ob;
    int i;
    ///this is ik
    for(i=0;i<SIZE;i++) std::cout<<ob[i]<<" ";
    /**
    this generates a run-type error because SIZE+100 IS OUT OF RANGE
    **/
   ob[SIZE+100]=99;///error
   return 0;
}