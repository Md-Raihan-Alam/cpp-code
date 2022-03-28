// SORTING STRINGS
// CPP program to illustrate
// Implementation of sort() function
#include <iostream>
#include <list>
#include <string>
using namespace std;
  
int main()
{
    // list declaration of string type
    list<string> mylist{ "hi", "bye", "thanks" };
  
    // sort function
    mylist.sort();
  
    // printing the list after sort
    for (auto it = mylist.begin(); it != mylist.end(); ++it)
        cout << ' ' << *it;
    return 0;
}