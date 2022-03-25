//ostringstream for output
#include<iostream>
#include<sstream>
#include<string>
using namespace std;
int main()
{
    ostringstream os;
    string myvar="This is a variable";
    os.write("\nabc",4);
    os<<"\nTesting if os works "<<myvar<<endl;
    cout<<os.str();// str is needed
    return 0;
} 