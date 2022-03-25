#include<iostream>
using namespace std;
class myClass{
    public:
    static int i;
    void seti(int n){i=n;}
    int geti(){return i;}
};
int myClass::i;
int main()
{
    myClass o1,o2;
    //set i directly
    myClass::i=100;//no object is referenced
    cout<<"o1.i :"<<o1.geti()<<endl<<"o2.i :"<<o2.geti()<<endl;
    return 0;
}