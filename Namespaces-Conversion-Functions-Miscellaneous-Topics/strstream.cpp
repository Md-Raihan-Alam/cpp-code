//Deomstrate an input/output array
#include<iostream>
#include<strstream>
using namespace std;
int main()
{
    char iobuf[255];
    strstream iostr(iobuf,sizeof iobuf);
    iostr<<"This is a test\n";
    iostr<<100<<hex<<" "<<100<<ends;
    char str[80];
    int i;
    iostr.getline(str,79);//read string up to \n
    iostr>>dec>>i;//read 100;
    cout<<str<<" "<<i<<" ";
    iostr>>hex>>i;
    cout<<hex<<i;
    return 0;
}