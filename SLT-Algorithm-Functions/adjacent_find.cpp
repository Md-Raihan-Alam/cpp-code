#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> vec{10,13,16,16,18};
    vector<int> vec2{18,16,12,11};
    //Iterator pointer which point to the address of the repeated element
    auto it=adjacent_find(vec.begin(),vec.end());
    cout<<distance(vec.begin(),it)<<" "<<*it<<endl;
   return 0;
}