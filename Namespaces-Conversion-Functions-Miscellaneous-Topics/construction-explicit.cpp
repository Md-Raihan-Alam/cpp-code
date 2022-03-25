#include<iostream>
#include<cstdlib>
using namespace std;
class myClass{
    int a;
    public:
    explicit myClass(int x){a=x;}
    int geta(){return a;}
};
int main(){
    // myClass ob=100;// error cause construction has been declared explicit
    myClass ob(100);// only this is allowed
    cout<<ob.geta();
    return 0;
}
