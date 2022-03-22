#include<iostream>
// A try/catch can be inside a function other than main()
void Xhandler(int test)
{
    try{
        if(test) throw test;
    }
    catch(int i){
        std::cout<<"Caught One! Ex. # "<<i<<std::endl;
    }
}
int main()
{
    std::cout<<"Start\n";
    Xhandler(1);
    Xhandler(2);
    Xhandler(3);
    Xhandler(4);
    Xhandler(5);
    Xhandler(0);
    std::cout<<"End";
}