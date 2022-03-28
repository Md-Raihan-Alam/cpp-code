#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<char> lst;//create an empty file
    int i;
    for(i=0;i<10;i++) lst.push_back('A'+i);
    cout<<"Size="<<lst.size()<<endl;
    list<char>::iterator p;
    cout<<"Contents: ";
    while(!lst.empty())
    {
        p=lst.begin();
        cout<<*p<<" ";
        lst.pop_front();
    }
    return 0;
}