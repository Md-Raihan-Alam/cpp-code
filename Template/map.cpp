#include<iostream>
#include<map>
#include<string>
int main()
{
     std::map<std::string, int> marks;
     marks.insert(std::pair<std::string, int>("Raihan", 42));
     marks.insert(std::pair<std::string, int>("Rayhan", 30));
     marks.insert(std::pair<std::string, int>("Faisal", 40));
     marks.insert(std::pair<std::string, int>("Alcurd", 50));
     marks.insert(std::pair<std::string, int>("Shank", 31));
     marks.insert(std::pair<std::string, int>("Sukuna",12));
     marks.insert(std::pair<std::string, int>("Cale", 34));

     std::map<std::string, int>::iterator itr;
     std::cout << "\nThe map marks is : \n";
     std::cout << "Name\t\tMarks\n";
     for (itr =  marks.begin(); itr !=  marks.end(); itr++) {
        std::cout << itr->first<< "\t\t" << itr->second << "\n";
     }
     std::cout << std::endl;
     return 0;
}
