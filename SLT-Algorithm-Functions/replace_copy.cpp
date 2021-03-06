#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
// Function to replace 'A' at v.begin() with Z and copy it
// to v.begin() position
void replace_copyDemo(vector<char>& v)
{
    replace_copy(v.begin(), v.begin()+1,
                    v.begin(), 'A', 'Z' );
}
 
// Function to print content of vector
void print(vector<char>& v)
{
    int len = v.size();
    for (int i = 0; i < len; i++)
        cout << v[i] << " ";
    cout << endl;
}
 
// Driver code
int main()
{
 
    vector<char> v;
 
    for (int i = 0; i <= 6; i++)
        v.push_back('A' + i);
    cout << "Before replace_copy " <<": ";
    print(v);
    replace_copyDemo(v);
     
    cout << "After replace_copy " << ": ";
    print(v);
 
    return 0;
}