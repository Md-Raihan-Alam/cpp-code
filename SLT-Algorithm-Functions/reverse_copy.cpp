// C++ program to copy from array to vector
// using reverse_copy() in STL.
#include <bits/stdc++.h>
using namespace std;
  
int main()
{
    vector<int> src { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
  
    vector<int> dest(src.size());
  
    reverse_copy(src.begin(), src.end(), dest.begin());
  
    cout << "The vector is: \n";
    for (int x : dest) {
        cout << x << " ";
    }
  
    return 0;
}