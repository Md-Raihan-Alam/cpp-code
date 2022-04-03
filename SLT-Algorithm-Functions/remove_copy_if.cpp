#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
bool isOdd(int i){return ((i%2)!=0);}
//Function to remove copy from v1 result vector is v2
void remove_copy_ifDemo(vector<int>&v1,vector<int>&v2)
{
    remove_copy_if(v1.begin(),v1.end(),v2.begin(),isOdd);
}
//Function to print content of vector
void print(vector<int>&v)
{
    int len=v.size();
    for(int i=0;i<len;i++)
        cout<<v[i]<<" ";
    cout<<endl;
}
//Drive Code
int main()
{
    //Declare vector v1,v2
    vector<int> v1,v2(10);
    //push data in vector
    for(int i=10;i<=20;i++)
        v1.push_back(i);
    cout<<"elements of v1 before remove_copy: ";
    for(auto x:v1) cout<<x<<" ";
    cout<<endl;
    remove_copy_ifDemo(v1,v2);
    cout<<"elements of v1 after remove_copy: ";
    for(auto x:v1) cout<<x<<" ";
    cout<<endl;
    cout<<"After removing odd numbers from v1 copy result in vector v2"<<endl;
    for(auto x:v2) cout<<x<<" ";
    cout<<endl;
    return 0;
}