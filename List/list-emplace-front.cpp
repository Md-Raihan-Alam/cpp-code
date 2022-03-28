// CPP program to illustrate
// Implementation of emplace_front() function
#include <iostream>
#include <list>
using namespace std;
  
int main()
{
    list<int> mylist;
    mylist.emplace_front(1);
    mylist.emplace_front(2);
    mylist.emplace_front(3);
    mylist.emplace_front(4);
    mylist.emplace_front(5);
    mylist.emplace_front(6);
    // list becomes 6, 5, 4, 3, 2, 1
  
    // printing the list
    for (auto it = mylist.begin(); it != mylist.end(); ++it)
        cout << ' ' << *it;
  
    return 0;
}