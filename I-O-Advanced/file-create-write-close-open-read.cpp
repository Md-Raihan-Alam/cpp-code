#include<iostream>
#include<fstream>///necessary for files I O
int main()
{
    std::ofstream fileOutput("test");//create output file
    if(!fileOutput){
        std::cout<<"Cannot open file"<<std::endl;
        return 0;
    }
    ///Write data in files
    fileOutput<<"Hello!\n";
    fileOutput<<100<<" "<<std::hex<<100<<std::endl;
    ///Close the file
    fileOutput.close();
    ///Open input file
    std::ifstream fileInput("test");
    if(!fileInput){
        std::cout<<"Cannot open input file"<<std::endl;
        return 0;
    }
    char str[80];
    int i;
    ///Take the input
    fileInput>>str>>i;
    std::cout<<str<<" "<<i<<std::endl;
    ///Close the file
    fileInput.close();
    return 0;
}