#include<iostream>
#include<string>
#include<fstream>
int main()
{
    std::ofstream fileOne;
    fileOne.open("New.txt");
    fileOne<<"New Data 1\n";
    fileOne<<"New Data 2\n";
    fileOne<<"New Data 3\n";
    fileOne.close();
    std::ifstream fileTwo;
    std::string fileData;
    fileTwo.open("New.txt");
    while(!fileTwo.eof()){
        getline(fileTwo,fileData);
        std::cout<<fileData<<std::endl;
    }
    return 0;
}
