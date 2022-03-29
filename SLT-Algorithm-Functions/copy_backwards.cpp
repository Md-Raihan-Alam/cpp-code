#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    // initializing source vector
    vector<int> v1 = { 1, 5, 6, 3, 8, 3 };
         
    // declaring destination vectors
    vector<int> v2(v1.size());
    // using copy_backward() to copy 1st 4 elements
    // ending at second last position
    copy_backward(v1.begin(),v1.begin()+4,v2.begin()+5);
    for(auto x:v2) cout<<x<<" ";      
    return 0;
}