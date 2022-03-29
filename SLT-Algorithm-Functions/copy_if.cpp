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
    //using copy_if() to copy odd elements
    copy_if(v1.begin(),v1.end(),v2.begin(),[](int i){return i%2!=0;});     
    for(auto x: v2) cout<<x<<" ";
    return 0;
}