#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vec{10,20,30,40};
    //iterator used to store the position
    //of searched element
    vector<int>::iterator it;
    //element to be searched
    int ser=30;
    //find function call
    it=find(vec.begin(),vec.end(),ser);
    if(it!=vec.end())
    {
        cout<<"Element "<<ser<<" found at position : ";
        cout<<it-vec.begin()<<" (Counting from zero)\n";
    }else{
        cout<<"Element not found\n\n";
    }
    return 0;
}