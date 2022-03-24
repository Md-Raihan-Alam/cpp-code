#include<iostream>
using namespace std;
void f(const int *p)
{
    int *v;
    //cast away const0ness
    v=const_cast<int*>(p);
    *v=100;//now, modify object through v
}
int main()
{
    int x=99;
    cout<<"x before call "<<x<<endl;
    f(&x);
    cout<<"x after call "<<x<<endl;
    return 0;
}