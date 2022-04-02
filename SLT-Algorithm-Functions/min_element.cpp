// C++ program to demonstrate the use of std::min_element
#include <iostream>
#include <algorithm>
using namespace std;
// Defining the BinaryFunction
bool comp(int a, int b)
{
    return (a < b);
}
  
int main()
{
    int v[] = { 9, 4, 7, 2, 5, 10, 11, 12, 1, 3, 6 };
  
    // Finding the minimum value between the third and the
    // fifth element
  
    int* i1;
    i1 = std::min_element(v + 2, v + 5);
  
    cout << *i1 << "\n";
        int* il1;
    il1 = std::min_element(v + 2, v + 9, comp);
  
    cout << *il1 << "\n";
    return 0;
}