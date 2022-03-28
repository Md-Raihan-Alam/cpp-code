// CPP program to illustrate
// Implementation of remove_if() function
#include <iostream>
#include <list>
using namespace std;
 
// Predicate implemented as a function
bool even(const int& value) { return (value % 2) == 0; }
 
// Main function
int main()
{
    list<int> mylist{ 1, 2, 2, 2, 5, 6, 7 };
    mylist.remove_if(even);
    for (auto it = mylist.begin(); it != mylist.end(); ++it)
        cout << ' ' << *it;
}