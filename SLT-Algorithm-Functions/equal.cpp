#include<bits/stdc++.h>
using namespace std;
int main()
{
    int v1[]={10,20,30,40,50};
    vector<int> vec{10,20,30,40,50};
    if(equal(vec.begin(),vec.end(),v1))
        cout<<"The contents of both squence are equal"<<endl;
    return 0;
}