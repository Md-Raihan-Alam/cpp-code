#include<iostream>
void showFlags();
int main()
{
    ///show default condition of format flags
    showFlags();
    std::cout.setf(std::ios::oct | std::ios::showbase | std::ios::fixed);
    showFlags();
    return 0;
}
///This function displays the status of format flags
void showFlags()
{
    std::ios::fmtflags f;
    f=std::cout.flags();///get flag settings
    if(f & std::ios::skipws) std::cout<<"skipws on\n";
    else std::cout<<"skipws off\n";
    if(f & std::ios::left) std::cout<<"left on\n";
    else std::cout<<"left off\n";
    if(f & std::ios::right) std::cout<<"right on\n";
    else std::cout<<"right off\n";
    if(f & std::ios::internal) std::cout<<"internal on\n";
    else std::cout<<"internal off\n";
    if(f & std::ios::dec) std::cout<<"dec on\n";
    else std::cout<<"dec off\n";
    if(f & std::ios::oct) std::cout<<"oct on\n";
    else std::cout<<"oct off\n";
    if(f & std::ios::hex) std::cout<<"hex on\n";
    else std::cout<<"hex off\n";
    if(f & std::ios::showbase) std::cout<<"Showbase on\n";
    else std::cout<<"showbase off\n";
    if(f & std::ios::showpoint) std::cout<<"showpoint on\n";
    else std::cout<<"showpoint off\n";
    if(f & std::ios::uppercase) std::cout<<"uppercase on\n";
    else std::cout<<"uppercase off\n";
    if(f & std::ios::scientific) std::cout<<"scientific on\n";
    else std::cout<<"scientifc off\n";
    if(f & std::ios::fixed) std::cout<<"fixed on\n";
    else std::cout<<"fixed off\n";
    if(f & std::ios::unitbuf) std::cout<<"unitbuf on\n";
    else std::cout<<"unitbuf off\n";
    if(f & std::ios::boolalpha) std::cout<<"boolalpa on\n";
    std::cout<<"boolalpa off\n";
    std::cout<<"\n";
}