#include<iostream>
using namespace std;
class Demo{
    int i;
    public:
    int geti() const{
        return i;//ok
    }
    // error because seti is declared as const so it is not allowed to modify the invoking object
    // void seti(int x) const{
    //     i=x;
    // }
    void seti(int x) {
        i=x;
    }
};
int main()
{
    Demo ob;
    ob.seti(1900);
    cout<<ob.geti();
    return 0;
}