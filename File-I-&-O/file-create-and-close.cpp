/**
The useful classes for working with files in C++ are:
1.fstreambase
2.ifstream-->derived from fstreambase
3.ofstream-->derived from fstreambase

In order to work with files in C++, you will have to open it. Primarily, there are 2 ways
to open a file:
1. using the constructor
2. using the member function open() of the class

**/
#include<iostream>
#include<fstream>/** necessary header file **/
int main()
{
/**
    std::ofstream file;
    file.open("sample.txt");
    is same as below:
**/
    //using constuctor
    std::ofstream file("sample.txt"); //create file
    file.close();//close file
    return 0;
}
