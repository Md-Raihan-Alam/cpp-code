// A short example using array-based output
#include<iostream>
#include<strstream>
using namespace std;
int main()
{
    char buf[255];//output buffer
    ostrstream ostr(buf,sizeof buf);//open output array
    ostr<<"Array-based I/O uses stream just like ";
    ostr<<"'normal' I/O\n"<<100;
    ostr<<' '<<123.23<<'\n';
    //you can use manipulators, too
    ostr<<hex<<100<<' ';
    //or format flags
    ostr.setf(ios::scientific);
    ostr<<dec<<123.23;
    ostr<<endl<<ends;// ends terminate the ostrstream
    //show resultant string
    cout<<buf;
    return 0;
}