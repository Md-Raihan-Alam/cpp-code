#include<iostream>
using namespace std;
class Demo{
    mutable int i;
    int j;
    public:
    int geti() const{
        return i;//ok
    }
    void seti(int x)const{
        i=x;//now; ok cause i is declared as mutable
    }
    // void setj(int x) const{
    //     j=x;//Still wrong cause j won't compile
    // }
};
int main()
{
    Demo ob;
    ob.seti(1900);
    cout<<ob.geti();
    return 0;
}