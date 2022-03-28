// CPP program to illustrate
// Implementation of begin() function
#include <iostream>
#include <list>
using namespace std;
  
int main()
{
    // declaration of list container
    list<int> mylist{ 1, 2, 3, 4, 5 };
  
    // using begin() to print list
    for (auto it = mylist.begin(); it != 
                            mylist.end(); ++it)
        cout << ' ' << *it;
        list<int> lis = { 10, 20, 30, 40, 50 };
  
    cout <<endl<< "The list in reverse order: ";
  
    for (auto it = lis.rbegin(); it != lis.rend(); ++it)
        cout << *it << " ";
    cout<<endl;
        list<int> ls = { 5, 6, 7, 8, 9 };
 
    // Prints the first element
    cout << "The first element is: " << *lis.cbegin();
 
    // printing list elements
    cout << "\nList: ";
 
    for (auto it = ls.cbegin(); it != ls.end(); ++it)
        cout << *it << " ";
    cout<<endl;
        // declaration of the list
    list<int> ls2 = { 10, 20, 30, 40, 50 };
  
    // prints the last element
    cout << "The last element is: " << *ls2.crbegin();
    cout << "\nList: ";
  
    for (auto it = ls2.crbegin(); it != ls2.crend(); ++it)
        cout << *it << " ";
    return 0;
}