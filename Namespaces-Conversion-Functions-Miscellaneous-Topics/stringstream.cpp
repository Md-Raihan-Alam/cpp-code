// stringstream is input and output
#include<iostream>
#include<sstream>
using namespace std;
int main()
{
  //insertion operator <<
    stringstream os;
    os << "software "; 
    cout<<os.str();
//str(string) function to read input
    os.str("TestingHelp"); 
//str() function for extraction
    cout<<os.str()<<endl;
//extraction operator (>>)
    stringstream ss;
    ss<<"26 08 2019";
    string mystr1;
    ss >> mystr1;
    string mystr2;
    ss>>mystr2;
    string mystr3;
    ss>>mystr3;
    cout<<mystr1<< "/"<<mystr2<<"/"<<mystr3;
    return 0;
}