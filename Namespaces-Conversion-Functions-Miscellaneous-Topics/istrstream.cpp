// An example using array-based input
#include<iostream>
#include<strstream>
using namespace std;
int main()
{
    char buf[]="Hello 100 123.25 a";
    istrstream istr(buf);//open input array
    int i;
    char str[80];
    float f;
    char c;
    istr>>str>>i>>f>>c;
    cout<<str<<" "<<i<<" "<<f;
    cout<<" "<<c<<endl;
    return 0;
}