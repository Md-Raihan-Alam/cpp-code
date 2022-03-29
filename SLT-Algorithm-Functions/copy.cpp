#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v={1,2,3,4,5};
    vector<int> v2(v.size());
    vector<int> v3(v.size());
    //v.begin+how-many-element=v.begin+v.size
    copy(v.begin(),v.begin()+v.size(),v2.begin());
    for(auto x:v2) cout<<x<<" ";
    cout<<endl;
    // using copy_n() to copy 1st 4 elements
   copy_n(v.begin(), 4, v3.begin());
    
   // printing new vector
    for(auto x:v3) cout<<x<<" ";
    return 0;
}