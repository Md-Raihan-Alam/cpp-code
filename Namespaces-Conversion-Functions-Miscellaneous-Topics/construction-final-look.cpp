#include<iostream>
#include<cstdlib>
using namespace std;
class myClass{
    int a;
    public:
    myClass(int x){a=x;}
    int geta(){return a;}
};
int main()
{
    myClass ob1=4;//convert to myClass(4)
    cout<<"ob1: "<<ob1.geta()<<endl;
    return 0;
}