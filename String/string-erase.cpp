//erase remove character from string
#include<iostream>
#include<string>
using namespace std;
void eraseDemo(string str)
{
    //Delete all characters
    str.erase();
    cout<<"\nAfter eraseDemo():";
    cout<<str;
}
void eraseDemo2(string str)
{
    //Deletes all characters except first one
    str.erase(1);
    cout<<"\nAfter eraseDemo2():";
    cout<<str;
}
void eraseDemo3(string str)
{
    //Deletes 4 characters from index number 1
    str.erase(1,4);
    cout<<"\nAfter erase: ";
    cout<<str<<"\n"; 
}
void eraseDemo4(string str)
{
    //Deletes character at position 4
    str.erase(str.begin()+4);
    cout<<"\nAfter erase():";
    cout<<str<<endl;
}
int main()
{
    string str="Hello World";
    cout<<"Before eraseDemo():";
    cout<<str;
    eraseDemo(str);
    string str2="New world";
    cout<<"\nBefore eraseDemo2():";
    cout<<str2;
    eraseDemo2(str2);
    string str3="Acer Nitro5";
    cout<<"\nBefore eraseDemo3():";
    cout<<str3;
    eraseDemo3(str3);
    string str4="HP Pavilion";
    cout<<"\nBefore eraseDemo4():";
    cout<<str4;
    eraseDemo4(str4);
    return 0;
}