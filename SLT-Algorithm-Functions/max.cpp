#include<iostream>
#include<algorithm>
using namespace std;
//for array
//Defining the binary function
bool comp(int a,int b)
{
    return (a<b);
}
int main()
{
    //coparing ASCII values of a and b
    cout<<max('a','b')<<endl;
    //Return the first one if both the numbers are same
    cout<<max(7,28)<<endl;
    cout<<max({1,2,3,4,5,10,-1,7},comp)<<std::endl;
    return 0;
}