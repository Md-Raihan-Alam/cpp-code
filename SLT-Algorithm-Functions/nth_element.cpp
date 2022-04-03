#include<iostream>
#include<algorithm>
using namespace std;
//defining the binary function
bool comp(int a,int b)
{
    return a<b;
}
int main()
{
    int v[]={3,2,10,45,33,56,23,47},i;
    int v2[]={3,2,10,45,33,56,23,47};
    //using nth_element with n as 5
    nth_element(v,v+4,v+8);
    //since n is 5 so 5th element sould be sorted
    for(i=0;i<8;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    //using nth_element with n as 6
    nth_element(v,v+5,v+8,comp);
    for(i=0;i<8;++i){
        cout<<v[i]<<" ";
    }
    return 0;
}