// CPP program to illustrate
// Implementation of = operator
#include <iostream>
#include <list>
using namespace std;
  
int main()
{
    list<int> mylist1{ 1, 2, 3 };
    list<int> mylist2{ 3, 2, 1, 4 };
    mylist1 = mylist2;
    cout << "mylist1 = ";
    for (auto it = mylist1.begin();
              it != mylist1.end(); ++it)
        cout << ' ' << *it;
    return 0;
}