#include<iostream>
//This function can only throw ints,chars and doubles
void Xhandler(int test) throw()
{
    //The following statements no longer work. Instead, they will cause an abnormal program termination
    if(test==0) throw test;//throw int
    if(test==1) throw 'a';//throw char
    if(test==2) throw 123.23;//throw double
}
int main()
{
    std::cout<<"Start\n";
    try{
        Xhandler(0);
        Xhandler(1);
        Xhandler(2);
    }
    catch(int i){
        std::cout<<"Caught int\n";
    }
    catch(char c){
        std::cout<<"Caught char\n";
    }
    catch(double d){
        std::cout<<"Caught double\n";
    }
    std::cout<<"end";
}