#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fileInput("test");
    ofstream fileOutput("test");
    if(!fileInput){
        cout<<"Cannot open input file\n";
        return 1;
    }
    fileOutput<<"Hello\n";
    fileOutput<<100<<" "<<hex<<100<<std::endl;
    char ch;
    fileInput.unsetf(ios::skipws);/// do not skip spaces
    while(!fileInput.eof()){/// until the end of file
        fileInput>>ch;
        if(ch==' ') ch='|';
        if(!fileInput.eof()) fileOutput<<ch;
    }
    fileInput.close();
    fileOutput.close();
    return 0;
}