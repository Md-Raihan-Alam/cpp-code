// a static member variable example
#include<iostream>
using namespace std;
class myClass{
    //static declared
    static int i;
    public:
    void seti(int n){i=n;}
    int geti(){return i;}
};
//Definition of myclass::i. i si still private to myclass
// static variable define
int myClass::i;
int main(){
    myClass o1,o2;
    o1.seti(10);
    cout<<"o1.i:" <<o1.geti()<<endl<<"o2.i:"<<o2.geti()<<endl;
    return 0;
}