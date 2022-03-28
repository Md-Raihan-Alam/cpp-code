#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str1("Dommonstrating string");
    /*A string object can also assing a normal string"*/
    string str2="string Two";
    string str3;
    //assign a string
    str3=str1;
    cout<<str1<<" "<<str3<<endl;
    //concatenate two string
    str3=str1+str2;
    cout<<str3<<endl;
    //compare strings
    if(str3>str1) cout<<"str3 > str1"<<endl;
    else if(str3<str1) cout<<"str3 < str1"<<endl;
    if(str3==str1+str2) cout<<"str3==str1+str2"<<endl;
    if(str3!=str1+str2) cout<<"str3!=str1+str2"<<endl;
    //create a string object using another string object
    string str4(str1);
    cout<<str4;
    return 0;
}