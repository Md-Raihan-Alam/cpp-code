#include<iostream>
#include<fstream>
int main()
{
    std::string st2;
    //ifstream->reading from file
    std::ifstream file("Sample.txt");
    //file>>st2; will take until space
    getline(file,st2);
    std::cout<<st2;
    return 0;
}
