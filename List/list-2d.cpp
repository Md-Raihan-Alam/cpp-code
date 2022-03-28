#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<list<int>> list1(2); 
    cout<<"enter values:"<<endl;
    for( auto i=0;i<2;i++) 
    //here, 2 is the size of the overall list.
        {
        list<int> list2; int a;
        for(auto j1=0;j1<2;j1++) 
    // here, 2 is the size of each indiviual list. Please note that the individual lists can also be of different sizes.
            {
            cin>>a;
            list2.push_back(a);
            }
          list1.push_back(list2);
          }
    cout<<"your values:"<<endl;
    for(auto i1=list1.begin();i1!=list1.end();i1++)
    {
        list<int>& list2=*i1; 
        for(auto j=list2.begin();j!=list2.end();j++)
          {
            cout<<*j<<" ";
          }
        cout<<endl;
    }
    return 0;
}