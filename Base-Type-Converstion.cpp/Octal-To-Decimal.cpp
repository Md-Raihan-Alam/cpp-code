#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int rem,sum=0,i=0;
    while(num!=0)
    {
        rem=num%10;
        sum+=rem*pow(8,i);
        i++;
        num=num/10;
    }
    cout<<sum<<endl;
    return 0;
}