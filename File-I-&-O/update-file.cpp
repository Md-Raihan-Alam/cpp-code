#include<iostream>
#include<vector>
#include<fstream>
#include<string>
int main()
{
    std::ofstream file ("sample2.txt",std::ios::app);
    std::vector<std::string> names;
    names.push_back("Raihan");
    names.push_back("Caleb");
    names.push_back("Susan");
    for(std::string name : names)
    {
        file<<name<<std::endl;
    }
    file.close();
    return 0;
}
