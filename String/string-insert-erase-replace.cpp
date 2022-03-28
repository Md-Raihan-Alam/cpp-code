//Demonstrate insert(),erase() and replace()
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str1("This is a string");
    string str2="ABCDEFGHIJ";
    cout<<"Initial strings:"<<endl;
    cout<<"Str1: "<<str1<<endl;
    cout<<"Str2: "<<str2<<endl;
    //Demonstrate insert()
    cout<<"INsert str2 into str1:\n";
    str1.insert(5,str2);
    cout<<str1<<endl<<endl;
    //Domonstrate erase()
    cout<<"Remove 7 characters form str\n";
    str1.erase(5,7);
    cout<<str1<<endl;
    //Demonstarte replace
    cout<<"Replace 2 characters in str1 with str2:\n";
    str1.replace(5,2,str2);//from what index,how many index, what string
    cout<<str1<<endl;
    return 0;
}