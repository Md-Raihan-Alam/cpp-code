//Throwing an exception from a function outside the try block
#include<iostream>
void Xtest(int test)
{
    std::cout<<"Inside Xtest,test is: "<<test<<"\n";
    if(test) throw test;
}
int main()
{
    std::cout<<"Start\n";
    try{// start a try block
        std::cout<<"Inside try block\n";
        Xtest(0);
        Xtest(1);
        Xtest(2);
    }
    catch(int i){//catch an error
        std::cout<<"Caugh one! number is ";
        std::cout<<i<<std::endl;
    }
    return 0;
}