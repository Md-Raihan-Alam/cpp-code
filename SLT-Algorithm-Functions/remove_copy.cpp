// CPP code to demonstrate remove_copy()
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
  
// Function to remove_copy from v1 result vector is v2
void removecopyDemo(vector <int> &v1)
{
    remove_copy(v1.begin(), v1.end(), v1.begin(), 3);
}
  
  
// Function to print content of vector
void print(vector<int>&v)
{
    int len = v.size();
    for (int i = 0; i < len; i++)
        cout << v[i] << " ";
    cout << endl;
}
  
// Driver code
int main()
{
    // vector 
    vector <int> v1, v2(10);
      
    // push data in vector 
    for(int i = 10; i <= 25; i++)
        v1.push_back(i % 6);
      
    cout << "elements of v1 before remove_copy: "<<endl;
    print(v1);
  
   removecopyDemo(v1);
      
   cout << "After removing element  3" <<endl;
    print(v1);
  
return 0;
  
}