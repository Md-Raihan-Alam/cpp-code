// CPP program to illustrate the
// list::assign() function
#include <bits/stdc++.h>
using namespace std;
  
int main()
{
    // Initialization of list
    list<int> demo_list;
  
    // Assigning the value 100, 5 times
    // to the list, list_demo.
    demo_list.assign(5, 100);
  
    // Displaying the list
    for (int itr : demo_list) {
        cout << itr << " ";
    }
  
    return 0;
}