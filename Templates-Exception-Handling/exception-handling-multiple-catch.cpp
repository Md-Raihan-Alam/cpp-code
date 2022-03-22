#include<iostream>
// Different types of exceptions can be caught
void Xhandler(int test)
{
    try{
        if(test) throw test;
        else throw std::string("Value is Zero"); //throwing a string is bad idea and not recommended
    }
    catch(int i){
        std::cout<<"Caught One! Ex. # "<<i<<std::endl;
    }
    catch(std::string str){
        std::cout<<"Caught a string: ";
        std::cout<<str<<std::endl;
    }
}
int main()
{
    std::cout<<"Start\n";
    Xhandler(1);
    Xhandler(2);
    Xhandler(0);
    Xhandler(3);
    std::cout<<"end";
    return 0;
}