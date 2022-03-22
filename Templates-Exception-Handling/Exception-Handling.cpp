// a simple exception handling example
#include<iostream>
int main()
{
    std::cout<<"Start\n";
    try{// start a try block
        std::cout<<"Inside try block\n";
        throw 1;
        std::cout<<"This will not execute";
    }
    catch(int i){//catch an error ; if you change the type of int or
    // the return type of throw data and type of catch is not same then error will occur
        std::cout<<"Caught One! Number is: ";
        std::cout<<i<<"\n";
    }
    std::cout<<"End";
    return 0;
}