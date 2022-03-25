#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> vec={1,2,3,4,5,6,7,8,9};
    vector<int> vec2={1,2,3,4,5,6,7,8,9};
    for(auto x:vec) cout<<x<<" ";
    //vector-beginning,how-many-shift,vector-end
    //left
    rotate(vec.begin(),vec.begin()+1,vec.end());
    cout<<endl;
    for(auto x:vec) cout<<x<<" ";
    cout<<endl;
    //right
    rotate(vec2.begin(),vec2.begin()+vec2.size()-1,vec2.end());
    for(auto x:vec2) cout<<x<<" ";
    return 0;
}