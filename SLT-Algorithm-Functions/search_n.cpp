#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int i, j;
  
    // Declaring the sequence to be searched into
    vector<int> v1 = { 1, 2, 3, 4, 5, 3, 3, 6, 7 };
  
    // Declaring the value to be searched for
    int v2 = 3;
  
    // Declaring an iterator for storing the returning pointer
    vector<int>::iterator i1;
  
    // Using std::search_n and storing the result in
    // iterator i1
    i1 = std::search_n(v1.begin(), v1.end(), 2, v2);
  
    // checking if iterator i1 contains end pointer of v1 or not
    if (i1 != v1.end()) {
        cout << "v2 is present consecutively 2 times at index "
             << (i1 - v1.begin());
    } else {
        cout << "v2 is not present consecutively 2 times in "
             << "vector v1";
    }
  
    return 0;
}