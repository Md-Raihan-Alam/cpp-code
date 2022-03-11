#include<iostream>
#include<fstream>
int main()
{
    std::ofstream fileOne("sample2.txt");
    std::cout<<"Enter your name:";
    std::string userName;
    getline(std::cin,userName);
    fileOne<<userName;
    fileOne.close();
    std::ifstream fileTwo("sample2.txt");
    std::string fileData;
    getline(fileTwo,fileData);
    std::cout<<"\nThe content of flie is:"<<fileData;
    fileTwo.close();
    return 0;
}
