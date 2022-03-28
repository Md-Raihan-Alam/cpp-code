#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<char> lst;
    list<char> revlst;
    int i;
    for(i=0;i<10;i++) lst.push_back('A'+i);
    cout<<"Size of lst="<<lst.size()<<endl;
    cout<<"Original contents: ";
    list<char>::iterator p;
    /*Remove elements from lst and put them
    into revlst in revers order*/
    while(!lst.empty()){
        p=lst.begin();
        cout<<*p<<" ";
        lst.pop_front();
        revlst.push_front(*p);
    }
    cout<<endl<<endl;
    cout<<"Size of revlst=";
    cout<<revlst.size()<<endl;
    cout<<"Reversed Contents: ";
    p=revlst.begin();
    while(p!=revlst.end()){
        cout<<*p<<" ";
        p++;
    }
    return 0;
}