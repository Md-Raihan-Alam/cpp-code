#include <iostream>
#include <sstream>
int main()
{
    //initialize an integer
    int num=20;
    //applying the stringstream class
    //declare a stream object
    //stringStream in loop case must be declare inside loop or it will not get update for each loop
    std::stringstream stream;
    stream<<num;;
    //initializing a string
    std::string str;
    stream>>str;
    std::cout<<"Number is now in string "<<str;
    return 0;
}
