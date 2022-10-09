#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int base;
    cin>>base;
    int ans=0;
    int power=1;
    while(num!=0)
    {
        int r=num%base;
        num/=base;       
        ans+=r*power;
        power*=10;
    }
    cout<<ans;
    return 0;
}