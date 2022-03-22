#include<iostream>
void Xhandler()
{
    try{
        throw std::string("hello");//throw a string
    }
    catch(std::string){//catch a string
        std::cout<<"Caught string inside Xhandler\n";
        throw; //rethrow string out of function
    }
}
int main()
{
    std::cout<<"start\n";
    try{
        Xhandler();
    }
    catch(std::string){
        std::cout<<"Caught string inside main\n";
    }
    std::cout<<"end";
    return 0;
}